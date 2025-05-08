//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    int findMissing(vector<int> &arr) {
        // code here
        int ans=0;
        for(int i=1;i<arr.size();i++){
            if(i==1){
                ans=arr[i]-arr[i-1];
            }
            else if((arr[i]-arr[i-1])==ans){
                continue;
            }
            else{
                return arr[i]-ans;
            }
        }
        return ans+arr[arr.size()-1];
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;

        getline(cin, input);

        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        cout << ob.findMissing(arr) << "\n";
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends