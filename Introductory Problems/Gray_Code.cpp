/*
A Gray code is a list of all 2n bit strings of length n, where any two successive strings differ in exactly one bit (i.e., their Hamming distance is one).
Your task is to create a Gray code for a given length n.

Input
The only input line has an integer n.

Output
Print 2n lines that describe the Gray code. You can print any valid solution.

Constraints
1≤n≤16

Example
Input:
2

Output:
00
01
11
10
*/

#include<bits/stdc++.h>
using namespace std ;

vector<string> solve(int n){
    if(n==1){
        vector<string> res ;
        res.push_back("0") ;
        res.push_back("1") ;
        return res; 
    }

    vector<string>ans = solve(n-1) ;
    vector<string>originalans ;
    for(int i=0; i<ans.size(); i++){
        originalans.push_back("0" + ans[i]) ;
    }

    for(int i=ans.size()-1; i>=0; i--){
        originalans.push_back("1" + ans[i]) ;
    }

    return originalans ;

}

int main(){
    int n ;
    cin>>n ;

    vector<string>ans = solve(n) ;

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i] <<"\n" ;
    }
}