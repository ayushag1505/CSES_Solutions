/*
Your task is to count the number of ways to construct sum n by throwing a dice one or more times.
Each throw produces an outcome between 1 and  6.

For example, if n=3, there are 4 ways:
1+1+1
1+2
2+1
3

Input
The only input line has an integer n.

Output
Print the number of ways modulo 10^9+7.

Constraints
1 <= n <= 10^6

Example
Input:
3

Output:
4
*/

#include<bits/stdc++.h>
using namespace std ;

int mod = (int)(1e9 + 7) ;

int main(){
    int n ;
    cin>>n ;

    vector<int>dp(n+1, 0) ;
    dp[0] = 1 ;

    for(int i=1; i<=n; i++){
        for(int dice=1; dice<=6; dice++){
            if(i >= dice){
                dp[i]= (dp[i] + dp[i-dice])%mod ;
            }
        }
    }

    cout<<dp[n] ;
    return 0 ;
}