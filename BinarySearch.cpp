#include<iostream>

using namespace std;


int binarysearch(int *arr , int start , int end , int key)
{
	if(end >= start)
	{
		int mid = (start + end) / 2;
		
		if(arr[mid] == key)
			return mid;
		
		else if(arr[mid] > key)
			return binarysearch(arr , start , mid-1 , key);
		else if(arr[mid] < key)
			return binarysearch(arr , mid+1 , end , key);
	}
}

int main()
{	int arr[] = { 0,0,1,2,2, 3, 4, 10, 40,43,44,45,56,67,78,98,99}; 
    int x = 99; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int result = binarysearch(arr, 0, n - 1, x); 
    (result == -1) ? cout << "Element is not present in array"
                   : cout << "Element is present at index " << result; 
    return 0; 
}
