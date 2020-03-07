/*Find the missing number in array*/

#include<iostream>
using namespace std;

int main()
{
	
	int arr[] = {3,4,1,5,6,2,7,9};
	int len = sizeof(arr)/sizeof(arr[0]);
	int result = len+1;
	for(int i=0;i<len;i++)
	{
		result ^= i+1^arr[i];
	}
	cout<<"Got: "<<result;
	return 0;

}
