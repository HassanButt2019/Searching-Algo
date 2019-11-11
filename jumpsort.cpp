#include<iostream>
#include<math.h>
using namespace std;



int jumpsort(int *arr , int size , int key)
{
	int start = 0;
	int end = sqrt(size);
	
	while(arr[end] <= key && end < size)
	{
		start = end;
		end += sqrt(size);
		
		if(end > size -1)
			end = size;	
	} 
	
	for(int i = start  ; i< end ; i++)
	{
		if(arr[i] == key)
			return i;
	}
	return -1;
}

int main()
{	int arr[] = { 0,0,1,2,2, 3, 4, 10, 40,43,44,45,56,67,78,98,99}; 
    int x = 0; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int result = jumpsort(arr, n , x); 
    (result == -1) ? cout << "Element is not present in array"
                   : cout << "Element is present at index " << result; 
    return 0; 
}
