#include<iostream>
using namespace std;

void InsertionSort(int arr[], int n)
{
	for(int i = 1; i<n; i++)
	{
		int temp = arr[i];
		int j;
		for( j = i-1; j>=0; j--)
		{
			if(temp < arr[j])
			{
				arr[j+1] = arr[j];
			}
			
			else
			{
				break;
			}
		}
		
		arr[j+1] = temp;
		
	}
}


void PrintTheSortedArray(int arr[], int n)
{
	for(int i = 0; i<n; i++)
	{
		cout << arr[i] <<" " << endl;
	}
	
}



int main()
{
	  int n;
	  cin >> n;
	  
	  int arr[100];
	  for(int i = 0; i<n; i++)
	  {
	  	cin >> arr[i];
	  }
	  
	InsertionSort(arr, n);
	PrintTheSortedArray(arr, n);
	  
	
}
