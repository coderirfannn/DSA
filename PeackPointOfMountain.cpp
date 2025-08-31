//finding the  peack point of the mountain

#include<iostream>
using namespace std;

int peakPointOfMountain(int arr[] ,int size)
{
	int startPeak = 0;
	int endingPeak = size-1;
	
	while(startPeak<endingPeak)
	{
		int mid = startPeak+(endingPeak-startPeak)/2;
		if(arr[mid]< arr[mid+1])
		{
			startPeak = mid +1;
		}else{
			endingPeak = mid;
		}
		
		return arr[startPeak];
	}
	
} 


int main()
{
	int arr[] = {3,4,5,1};
	
	cout<<"Pack of the mountaun is :"<<peakPointOfMountain(arr ,4);
}
