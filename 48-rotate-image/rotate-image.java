class Solution {
    void reverse(int[] m){
        int i=0;
        int j=m.length-1;
        while(i<j){
            int temp=m[i];
            m[i]=m[j];
            m[j]=temp;
            i++;
            j--;
        }
    }
    public void rotate(int[][] arr) {
        for(int i=0;i<arr.length;i++){
            for(int j=0;j<i;j++){
                int temp=arr[i][j];
                arr[i][j]=arr[j][i];
                arr[j][i]=temp;
            }
        }
        for(int i=0;i<arr.length;i++){
            reverse(arr[i]);
        }
    }
}