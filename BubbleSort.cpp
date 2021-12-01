#include <iostream>
using namespace std;


void PrintSortedArray(int array[], int n)
{
	for(int i = 0; i<n; i++)
	{
		cout << array[i] <<" ";
	}
}

void BubbleSort(int array[], int n)
{
	for(int i = 0; i<n; i++)
	{
		for(int j = 0; j<n-1-j; j++)
		{
			if(array[j] > array[j+1])
			{
				int temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
}



int main()
{
	int n;
	cin >> n;
	
	int array[100];
	
	for(int i = 0; i<n; i++)
	{
	
		cin >> array[i];
	}
	
	BubbleSort(array, n);
	
	PrintSortedArray(array, n);
	
}
