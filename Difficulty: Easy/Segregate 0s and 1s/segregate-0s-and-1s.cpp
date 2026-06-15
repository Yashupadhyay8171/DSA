class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        int i=0;
        int j=arr.size()-1;
        int index=0;
        while(index<=j){
            if(arr[index]==0){
                swap(arr[i++],arr[index++]);
            }
            else{
                swap(arr[index],arr[j--]);
            }
        }
        return;
    }
};