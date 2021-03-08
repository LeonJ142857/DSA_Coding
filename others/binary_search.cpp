//
// Created by user on 08/03/2021.
//
// { Driver Code Starts
#include <iostream>
#include <vector>
using namespace std;


// } Driver Code Ends
class Solution{
public:
	// Function to find element in sorted array
	// arr: input array
	// N: size of array
	// K: element to be searched
	static int searchInSorted(vector<int> arr, int N, int K)
	{
		int low = 0;
		int high = N-1;
		int mid;
		while(low < high){
			mid = (low + high)/2;
			if(arr[mid] == K) return mid;
			else if(arr[mid] < K) low = mid + 1;
			else high = mid - 1;
		}
		return -1;
	}
};
// { Driver Code Starts.
int main()
{
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		vector<int> arr(n);
		for(int i = 0;i<n;i++)
			cin >> arr[i];
		cout << Solution::searchInSorted(arr, n, k) << endl;
	}
	return 0;
}
// } Driver Code Ends