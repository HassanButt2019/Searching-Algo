#include<iostream>

using namespace std;


int recursiveLinearSearch(int *arr , int s , int key)
{
	if(s == -1 )
		return 0;
	else if(key > arr[s])
		return -1;
	else if ( key == arr[s])
		return 1;
	else
		return recursiveLinearSearch(arr , s-1 , key); 
}

int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int result = recursiveLinearSearch(arr , 9 ,  1) ;
	if(result == 1)
	{
		cout<<"Found"<<endl;
	}else if (result == -1)
	{
		cout<<"Not in the list"<<endl;
	}else
	{
		cout<<"not Found"<<endl;
	}


}

