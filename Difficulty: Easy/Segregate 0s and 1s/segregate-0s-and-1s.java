class Solution {
    void segregate0and1(int[] arr) {
        // code here
        int i=0;
        for(int index=0;index<arr.length;index++){
            if(arr[index]!=1){
                int temp=arr[index];
                arr[index]=arr[i];
                arr[i]=temp;
                i++;
            }
        }
    }
}
