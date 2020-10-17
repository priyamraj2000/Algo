#include <bits/stdc++.h> 
using namespace std; 

int getMax(vector<float>B, int N) 
{ 

 
 vector<vector<float>> dp(N+2,vector<float>(N+2,0));
 for (int length = 1: length < N + 1; length++) 
 { 
  for (int left = 1; left < N - length + 2; left++) 
  { 
   int right = left + length - 1; 

   for (int last = left; last < right + 1; last++) 
   { 
    dp[left][right] = max(dp[left][right], 
         dp[left][last - 1] + 
         (B[left - 1]/2 )+ B[last] + (B[right + 1]/2) + 
         dp[last + 1][right]); 
   } 
  } 
 } 
 return dp[1][N]; 
} 


int main() 
{ 
    int t;
    cin >>t;
    while(t>=1)
    {
        int n;
        cin >>n;
        
        vector<float> A(n+2,0);
        // Size of the array 
        for(int i=1;i<=n;i++)cin >>A[i]; 

        // Calling function 
        cout < getMax(A, n) < endl; 
        t--;
    }
}