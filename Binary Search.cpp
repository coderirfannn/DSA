#include<iostream>

using namespace std;

void binarySearch(int arr[], int size ,int value)
{
	int startIndex = 0;
	int endIndex =  size-1;
	while(startIndex <=endIndex)
	{
		int mid = (startIndex + endIndex) / 2;

		
		if(arr[mid] ==value )
		{
			cout<<"Value - "<< (value) << " Found At index - "<<mid<<endl;
			
		}
		break;
	
		
		
		
		
	
		if(arr[mid] < value)
		{
			startIndex = mid + 1;
		}else{
			endIndex = mid-1;
		}
	}
}

int main()
{
	int arr[] = {2,4,8 ,12 ,14 ,18};
	
	int size = sizeof(arr)/sizeof(arr[0]);
	
	int value;
	cout<<"Enter the value that you want to search in array :";
	cin>>value;
	
	binarySearch(arr,size,value);
}










