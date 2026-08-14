class Solution {
    public ArrayList<Integer> factorial(int n) {
        // code here
        ArrayList<Integer> arr=new ArrayList<>();
        arr.add(1);
        int carry=0;
        for(int i=2;i<=n;i++){
            int j=0;
            while(j<arr.size()){
                int mul=arr.get(j)*i+carry;
                arr.set(j,mul%10);
                carry=mul/10;
                j++;
            }
            while(carry>0){
                arr.add(carry%10);
                carry/=10;
            }
        }
        Collections.reverse(arr);
        return arr;
    }
}