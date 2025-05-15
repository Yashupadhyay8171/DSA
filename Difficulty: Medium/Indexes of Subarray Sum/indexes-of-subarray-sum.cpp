//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        int first = 0, second = 0;
        int sum = arr[0];
        
        while(first <= second && second < arr.size()) {
            if(sum == target) {
                return {first+1, second+1};
            } else if(sum < target) {
                second++;
                sum += arr[second];
            } else {
                sum -= arr[first];
                
                // When target < sum and first and second is at the same position
                if(first == second) {
                    second++;
                    sum += arr[second];
                }
                first++;
            }
        }
        
        return {-1};
    }
};;


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        int d;
        string input;

        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        cin >> d;
        cin.ignore();

        Solution ob;
        vector<int> result = ob.subarraySum(arr, d);
        for (int i : result) {
            cout << i << " ";
        }
        cout << "\n~\n";
    }
    return 0;
}

// } Driver Code Ends