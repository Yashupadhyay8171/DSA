// User function template for C++
class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int i=0;
        int index=0;
        while(index<arr.size()){
            if(arr[index]!=0){
                swap(arr[i++],arr[index]);
            }
            index++;
        }
    }
};