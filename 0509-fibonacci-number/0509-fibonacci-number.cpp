class Solution {
public:
    int solve(int n,vector<int>&dp)
    {
        if(n==0 || n==1){
            return n;
        }
       
        if(dp[n]!=-1){
            return dp[n];
        }
        
        
        
        
        
        return dp[n]=fib(n-1)+fib(n-2);
       
    }
    
    int solveTab(int n)
    {
        vector<int>dp(n+1);
        dp[0]=0;
        dp[1]=1;
    
        for(int i=2;i<=n;i++){
             dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
    int fib(int n) {
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
       return solveTab(n);  
    }
};