/**
 * https://www.geeksforgeeks.org/segregate-even-odd-numbers-set-3/
 * O(n)
 **/ 

#include<bits/stdc++.h>
using namespace std;

class Solution{
	public:
		void segregateEvenOdd(int arr[], int arrSize){
			vector<int> oddStore;
			for(int i=0;i<arrSize;i++) {
				if(arr[i]%2!=0){
					oddStore.push_back(arr[i]);
					continue;
				}
				cout<<arr[i]<<" ";
			}
			for(int i=0;i<oddStore.size();i++) {
				cout<<oddStore[i]<<" ";
			}
		}
};

int main()
{
	//get data from user
	int arrSize;
	cout<<"Enter size of array: ";
	cin>>arrSize;
	int arr[arrSize];
	cout<<endl<<"Enter items in array:"<<endl;
	for(int i=0;i<arrSize;i++) {
		cin>>arr[i];
	}

	Solution sol;
	sol.segregateEvenOdd(arr, arrSize);
	return 0;
}