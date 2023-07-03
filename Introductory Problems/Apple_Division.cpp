/*
There are n apples with known weights. 
Your task is to divide the apples into two groups so that the difference between the weights of the groups is minimal.

Input
The first input line has an integer n: the number of apples.

The next line has n integers p1,p2,…,pn: the weight of each apple.

Output
Print one integer: the minimum difference between the weights of the groups.

Constraints
1≤n≤20
1≤pi≤109

Example
Input:
5
3 2 7 4 1

Output:
1
*/


#include<bits/stdc++.h>
using namespace std ;

void solve(vector<int>&num, long long& mini, long long sum, int idx, long long res){
    if(idx == num.size()){
        mini= min(mini, abs((sum-res)- res)) ;
        return ;
    }

    solve(num, mini, sum, idx+1, res) ;
    solve(num, mini, sum, idx+1, res+num[idx]) ;

}

int main(){
    int n ;
    cin>>n ;
    vector<int>a(n) ;
    long long sum = 0 ;
    for(int i=0; i<n; i++) {
        cin>>a[i] ;
        sum+= a[i] ;
    }

    long long mini=INT_MAX ;
    solve(a, mini, sum, 0, 0) ;
    cout<<mini ;
}