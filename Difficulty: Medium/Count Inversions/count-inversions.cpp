//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to count inversions in the array.
    void merge(vector<int>&arr,int s,int mid,int e,int &ans){
        int left=mid-s+1;
        int right=e-mid;
        int *arr1=new int[left];
        int *arr2=new int[right];
        
        int k=s;
        for(int i=0;i<left;i++){
            arr1[i]=arr[k++];
        }
        k=mid+1;
        for(int i=0;i<right;i++){
            arr2[i]=arr[k++];
        }
        int i=0;
        int j=0;
        int main=s;
        while(i<left && j<right){
            if(arr1[i]<=arr2[j]){
                arr[main++]=arr1[i++];
            }
            else{
                ans+=left-i;
                arr[main++]=arr2[j++];
            }
        }
        while(i<left){
            arr[main++]=arr1[i++];
        }
        while(j<right){
            arr[main++]=arr2[j++];
        }
        delete []arr1;
        delete []arr2;
        return;
    }
    void mergeSort(vector<int>&arr,int s,int e,int &ans){
        if(s>=e){
            return;
        }
        int mid=(s+e)>>1;
        mergeSort(arr,s,mid,ans);
        mergeSort(arr,mid+1,e,ans);
        merge(arr,s,mid,e,ans);
        return;
    }
    int inversionCount(vector<int> &arr) {
        // Your Code Here
        int ans=0;
        mergeSort(arr,0,arr.size()-1,ans);
        return ans;
    }
};


//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;
    cin.ignore();
    while (T--) {
        int n;
        vector<int> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);
        Solution obj;
        cout << obj.inversionCount(a) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends