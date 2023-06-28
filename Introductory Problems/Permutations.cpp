/*
A permutation of integers 1,2,…,n is called beautiful if there are no adjacent elements whose difference is 1.

Given n, construct a beautiful permutation if such a permutation exists.

Input
The only input line contains an integer n.

Output
Print a beautiful permutation of integers 1,2,…,n. 
If there are several solutions, you may print any of them. If there are no solutions, print "NO SOLUTION".

Constraints
1≤n≤106

Example 1
Input:
5

Output:
4 2 5 3 1

Example 2
Input:
3

Output:
NO SOLUTION
*/

#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n ;
    cin>>n ;

    int a[n]= {0} ;
    int ele= 2 ;
    for(int i=0; i<n/2; ++i){
        a[i]= ele ;
        ele+=2 ;
    }

    ele= 1 ;
    for(int i=n/2; i<n; i++){
        a[i]= ele ;
        ele+=2 ;
    }

    bool flag = true ;
    for(int i=0; i<n-1; i++){
        if(abs(a[i] - a[i+1]) == 1){
            flag= false ;
            break ;
        }
    }

    if(flag){
        for(int i=0; i<n; i++) cout<<a[i] <<" " ;
    }    
    else cout<<"NO SOLUTION" ;
}