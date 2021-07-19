/**
 * https://www.geeksforgeeks.org/given-a-sorted-and-rotated-array-find-if-there-is-a-pair-with-a-given-sum/
 * O(n)
 **/ 

#include<bits/stdc++.h>
using namespace std;

// Solution
class Numbers{

	public:
		bool isPairPresent(int arr[], int arrSize, int sum){
			map<int,int> store;
			for(int i=0;i<arrSize;i++){
				if(store.find(arr[i])!=store.end()) {
					return true;
				}
				store[i]=arr[i];
			}
			return false;
		}
};

// Driver Code
int main()
{
	// get data from user;
	int totalNumbers, requiredNum;
	cout<<"Enter total Numbers you want to search into: ";
	cin>>totalNumbers;
	cout<<endl;
	int arr[totalNumbers];
	cout<<"Enter the numbers: ";
	for(int i=0;i<totalNumbers;i++) {
		cin>>arr[i];
	}
	cout<<endl<<"Entered the required Sum: ";
	cin>>requiredNum;
	cout<<endl;
	int arrSize = sizeof(arr)/sizeof(arr[0]);

	// solution
	Numbers num;
	cout<<"Is Sum Present?: "<<num.isPairPresent(arr, arrSize, requiredNum);

	return 0;
}