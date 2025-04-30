//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C+
class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        int i=0;
        map<int,int>mp;
        for(auto it:arr){
            mp[it]++;
        }
        int len=arr.size()/2;
        for(auto it:mp){
            if(it.second > len){
                return it.first;
            }
        }
        return -1;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n;
        vector<int> a, b;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution obj;
        cout << obj.majorityElement(a) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends