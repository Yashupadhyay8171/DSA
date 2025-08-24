// User function Template for C++

void toBinary(int n) {
    // your code here
    int ans=0;
    int i=0;
    while(n>0){
        int digit=n%2;
        ans+=digit*pow(10,i++);
        n/=2;
    }
    cout<<ans;
}