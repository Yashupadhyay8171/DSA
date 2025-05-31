class Solution {
  public:
    // Function to perform selection sort on the given array.
    void selectionSort(vector<int> &arr) {
        // code here
        for(int i=0;i<arr.size();i++){
            int min=i;
            for(int j=i+1;j<arr.size();j++){
                if(arr[min] > arr[j]){
                    min=j;
                }
            }
            swap(arr[min],arr[i]);
        }
    }
};