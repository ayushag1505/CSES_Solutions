/*
There are n children who want to go to a Ferris wheel, and your task is to find a gondola for each child.

Each gondola may have one or two children in it, and in addition, the total weight in a gondola may not exceed x. You know the weight of every child.

What is the minimum number of gondolas needed for the children?

Input
The first input line contains two integers n and x: the number of children and the maximum allowed weight.

The next line contains n integers p1,p2,…,pn: the weight of each child.

Output
Print one integer: the minimum number of gondolas.

Constraints
1≤n≤2⋅105
1≤x≤109
1≤pi≤x

Example
Input:
4 10
7 2 3 9

Output:
3
*/

#include<bits/stdc++.h>
using namespace std ;

int main(){
    long n, p ;
    cin>>n >>p ;

    long long a[n] ;
    for(int i=0; i<n; i++) cin>>a[i] ;

    sort(a, a+n) ;

    int i= 0, j=n-1; 
    int ans= 0 ;

    while(i < j){
        if(a[i] + a[j] <= p){
            i++, j-- ;
        }
        else if(a[i] + a[j] > p){
            j-- ;
        }
        ans++ ;
    }
    if(i!= j) cout<<ans ;
    else cout<<ans+1;
}