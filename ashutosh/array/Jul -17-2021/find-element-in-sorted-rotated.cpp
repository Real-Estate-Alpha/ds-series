/**
 * https://practice.geeksforgeeks.org/problems/search-in-a-rotated-array4618/1
 * O(logN)
 */

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
     int findPivot(int arr[], int l, int h, int totItems) {
           
        if(l >= h) {
            return -1;
        }
        
        // int items = sizeof(arr)/sizeof(arr[0]);
        int mid = (l+h)/2;
        // if mid reached end
        if(mid==totItems-1){
            return -1;
        }
        
        if(arr[mid] > arr[mid+1]){
            return mid+1;
        }
        if(arr[mid] > arr[l]) {
            return findPivot(arr, mid, h, totItems);
        } else {
            return findPivot(arr, l, mid, totItems);
        }
    }
    
    int binarySearch(int arr[], int l, int h, int key) {
        
        if(l>=h) {
            return -1;
        }
        int mid = (l+h)/2;
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]<key){
            return binarySearch(arr, mid+1, h, key);
        }else {
            return binarySearch(arr, l, mid, key);
        }
    }
    
    
    int search(int A[], int l, int h, int key){
                int totItems = h+1;

        int pivot = findPivot(A, l, h, totItems);
        // cout<<"pivot-- "<<pivot<<"---->>";
        if(pivot==-1) {
            l=0;
            h=h;
        }else {
            if(key>=A[pivot] && key <=A[h]) {
                l=pivot;
                h=h;
            }else {
                l=0;
                h=pivot-1;
            }
        }
        //clear what's l and what's h
        return binarySearch(A, l, h, key);
    }
    
   
};

// { Driver Code Starts. 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n];
        for(int i = 0; i < n; i++)
            cin >> A[i];
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(A, 0, n - 1, key) << endl;
    }
return 0;
}  // } Driver Code Ends