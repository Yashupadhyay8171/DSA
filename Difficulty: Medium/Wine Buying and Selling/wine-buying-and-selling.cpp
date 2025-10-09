// User function Template for C++

class Solution {
  public:
    long long int wineSelling(vector<int>& arr, int n) {
        // Code here.
        long long ans = 0;
        int i = 0, j = 0;
        while(true) {
            while (i < n && arr[i] <= 0)
                i++;
            while (j < n && arr[j] >= 0)
                j++;
            if(i == n || j == n ) break;
            int change =min(arr[i], -arr[j]);
            ans += (abs(i - j) * change);
            arr[i] -= change;
            arr[j] += change;
        }
        return ans;
    }
};
