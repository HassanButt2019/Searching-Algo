#include<iostream>

using namespace std;

/* Formula of interpolation search */
/* low + ((key - array[low]) / (arr[high] - arr[low] ) ) (high - low) */ 

int InterpolationSearch(int *arr , int l , int end , int key , int pivot)
{

		if(arr[pivot] == key)
		{
			cout<<arr[pivot]<<endl;
			return pivot;
		}
		else if (arr[pivot] > pivot)
		{
			for(int i = pivot ; i < end ; i++)
			{
				if (arr[i] == key) // linear search
				{
					return i;
				}
			}
		}else if ( arr[pivot] < pivot)
		{
			for(int i = end ; i > l ; i--)
			{
				
				if (arr[i] == key) // doing the linear search
				{
					return i;
				}
			}
		}
		return -1;
}
	

int main()
{
	int arr[] = {10, 12, 13, 16, 18, 19, 20, 21, 
                 22, 23, 24, 33, 35, 42, 47};
	int size = sizeof(arr) / sizeof(int);
	int key = 18;
	int low = 0;
	int high = size - 1;
	int pivot = (low + ((key - arr[low]) / (arr[high] - arr[low] ) ) * (high - low)); // getting the pivot 
	int result = InterpolationSearch(arr , low , high , key , pivot );
	if(result != 1)
		cout<<"Found at = "<<result;
	else 
		cout<<"Not Found"<<endl;

}
