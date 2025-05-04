//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
    int f=0;
    int l=0;
    for(int i=0;i<arr.size();i++){
        if(target==arr[i]){
            f=i;
            break;
        }
    }
    int i=arr.size()-1;
    while(i>=0){
        if(target==arr[i]){
            l=i;
            break;
        }
        i--;
    }
    if(i<0){
        return 0;
    }
    return l-f+1;
    }
};



//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int d;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            crr.push_back(number);
        }
        d = crr[0];
        int n = arr.size();
        Solution ob;
        int ans = ob.countFreq(arr, d);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends