// User function Template for Java

class Solution {

    String calc_Sum(int a[], int b[]) {
        // Complete the function
        StringBuilder str=new StringBuilder();
        int i=a.length-1;
        int j=b.length-1;
        int carry=0;
        while(i>=0 || j>=0){
            int val1=(i>=0) ? a[i--] : 0;
            int val2=(j>=0) ? b[j--] :0;
            int sum=(val1+val2+carry);
            str.append(sum%10);
            carry=sum/10;
        }
        if(carry>0){
            str.append(carry);
        }
        str.reverse();
        return str.toString();
    }
}
