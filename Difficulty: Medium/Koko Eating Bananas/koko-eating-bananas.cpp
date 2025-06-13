class Solution {
public:
int ispossiblesol(vector<int>&arr,double mid,int h){
    int c=0;
    for(int i=0;i<arr.size();i++){
        c+=ceil((double)arr[i]/mid);
        if(c>h){
            break;
        }
    }
    return c;
}
    int kokoEat(vector<int>& arr, int h) {
        int s=1;
        int e=*max_element(arr.begin(),arr.end());
        while(s<=e){
            int mid=(s+e)>>1;
            if(ispossiblesol(arr,mid,h)<=h){
                e=mid-1;
            }
            else{ 
                s=mid+1;
            }
        }
        return s;
    }
};