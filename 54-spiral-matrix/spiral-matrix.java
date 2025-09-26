class Solution {
    public List<Integer> spiralOrder(int[][] arr) {
        List<Integer>ans=new ArrayList<>();
        int sr=0;
        int sc=0;
        int er=arr.length-1;
        int ec=arr[0].length-1;
        int cnt=0;
        int total=arr.length*arr[0].length;
        while(cnt<total){
            for(int i=sc;i<=ec&&cnt<total;i++){
                ans.add(arr[sr][i]);
                cnt++;
            }
            sr++;
            for(int i=sr;i<=er&&cnt<total;i++){
                ans.add(arr[i][ec]);
                cnt++;
            }
            ec--;
            for(int i=ec;i>=sc&&cnt<total;i--){
                ans.add(arr[er][i]);
                cnt++;
            }
            er--;
            for(int i=er;i>=sr&&cnt<total;i--){
                ans.add(arr[i][sc]);
                cnt++;
            }
            sc++;
        }
        return ans;
    }
}