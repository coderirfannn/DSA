// first and last occurrence of the element

#include<iostream>
using namespace std;

// Corrected function to find the FIRST occurrence
int firstOcc(int arr[], int size, int key)
{
	int start = 0;
	int end = size - 1;
	int ans = -1; // Initialize to -1 (not found)

	while(start <= end)
	{
		int mid = start + (end - start) / 2;
		
		if(arr[mid] == key)
		{
			ans = mid;      // Store the index as a potential answer
			end = mid - 1;  // Look for an earlier occurrence on the LEFT side
		}
		else if(arr[mid] < key) // Key is on the right side
		{
			start = mid + 1;
		}
		else // arr[mid] > key, so key is on the left side
		{
			end = mid - 1;
		}
	}
	return ans;
}

// Corrected function to find the LAST occurrence
int lastOcc(int arr[], int size, int key)
{
	int start = 0;
	int end = size - 1;
	int ans = -1; // Initialize to -1 (not found)

	while(start <= end)
	{
		int mid = start + (end - start) / 2;
		
		if(arr[mid] == key)
		{
			ans = mid;        // Store the index as a potential answer
			start = mid + 1;  // Look for a later occurrence on the RIGHT side
		}
		else if(arr[mid] < key) // Key is on the right side
		{
			start = mid + 1;
		}
		else // arr[mid] > key, so key is on the left side
		{
			end = mid - 1;
		}
	}
	return ans;
}

int main()
{
	int arr[] = {1, 1, 2, 3, 3, 3, 3, 5};
	int size = sizeof(arr)/sizeof(arr[0]);
	
	int key;
	cout << "Enter the value that you need to search: ";
	cin >> key;
	
	int first = firstOcc(arr, size, key);
	int last = lastOcc(arr, size, key);

	cout << "First Occurance is at index: " << first << endl;
	cout << "Last Occurance is at index: " << last << endl;

    // You can also calculate the total number of occurrences
    if (first != -1) {
        int total = (last - first) + 1;
        cout << "Total occurrences: " << total << endl;
    } else {
        cout << "Element not found." << endl;
    }

	return 0;
}
