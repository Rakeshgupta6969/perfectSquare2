class Solution {
    
    private:

    int solve(int n, vector<int> & dp){

        // base cases
        if(n == 0) return 0;
        
        if(dp[n] != -1) return dp[n];

        int count  = INT_MAX;
       
        for(int i = 1; i*i <= n; i++){
           int result = 1 + solve(n - i*i,dp);
           count = min(count,result);
        }
        
        return dp[n] = count;
        
    
    }


public:
    int numSquares(int n) {
        // here we  the concept of the dp;


    vector<int> dp((n+1),-1);

      return  solve(n,dp);
      
    }
};