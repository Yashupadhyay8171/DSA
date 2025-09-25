class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        // Your code goes here
        vector<int>pos;
        vector<int>neg;
        for(auto it:arr){
            if(it>=0){
                pos.push_back(it);
            }
            else{
                neg.push_back(it);
            }
        }
        int i=0;
        for(int it:pos){
            arr[i++]=it;
        }
        for(int it:neg){
            arr[i++]=it;
        }
    }
};