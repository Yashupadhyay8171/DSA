// The functions should be written in a way that array become sorted
// in increasing order when heapSort() is called.

class Solution {
  public:
    // Function to sort an array using Heap Sort.
    void heapSort(vector<int>& arr) {
        priority_queue<int,vector<int>,greater<int>>pq;
        for(auto it:arr){
            pq.push(it);
        }
        arr.clear();
        while(!pq.empty()){
            arr.push_back(pq.top());
            pq.pop();
        }
    }
};