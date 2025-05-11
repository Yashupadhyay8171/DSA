//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


// User function template for C++
class Solution {
  public:
    string findSum(string &s1, string &s2) {
        // Your code goes here
        string ans="";
        int i=s1.size()-1;
        int j=s2.size()-1;
        int carry=0;
        while(i>=0 && j>=0){
            int sum=(s1[i--]-'0')+(s2[j--]-'0')+carry;
            ans+=((sum%10)+'0');
            carry=sum/10;
        }
        while(i>=0){
            int sum=(s1[i--]-'0')+carry;
            ans+=sum%10 + '0';
            carry=sum/10;
        }
        while(j>=0){
            int sum=(s2[j--]-'0')+carry;
            ans+=sum%10 + '0';
            carry=sum/10;
        }
        if(carry>0){
            ans+=(carry+'0');
        }
        while(ans.back()=='0' && ans.size()>1){
            ans.pop_back();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};




//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string x, y;
        cin >> x >> y;
        Solution ob;
        cout << ob.findSum(x, y) << "\n";

        cout << "~"
             << "\n";
    }

    return 0;
}
// } Driver Code Ends