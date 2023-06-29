/*
Your task is to divide the numbers 1,2,…,n into two sets of equal sum.

Input

The only input line contains an integer n.

Output

Print "YES", if the division is possible, and "NO" otherwise.
After this, if the division is possible, print an example of how to create the sets. First, print the number of elements in the first set followed by the elements themselves in a separate line, and then, print the second set in a similar way.

Constraints
1≤n≤106

Example 1
Input:
7

Output:
YES
4
1 2 4 7
3
3 5 6

Example 2
Input:
6

Output:
NO
*/


#include<bits/stdc++.h>
using namespace std ;

int main(){
    int n ;
    cin>>n ;

    long long sum = (1LL*n*(n+1))/2 ;
    if(sum & 1){
        cout<<"NO" ;
    }
    else{
        cout<<"YES" <<"\n";
        long long temp = sum/2 ;

        vector<long long>first ,second ;

        for(long long i=n; i>=1; --i){
            if(temp >= i){
                first.push_back(i) ;
                temp-= i ;
            }
            else second.push_back(i) ;
        }


        cout<<first.size() <<"\n" ;
        reverse(first.begin(), first.end()) ;
        for(auto it:first){
            cout<<it <<" " ;
        }
        cout<<"\n" ;

        reverse(second.begin(), second.end()) ;
        cout<<second.size() <<"\n" ;
        for(auto it : second){
            cout<<it <<" " ;
        }
        
        
    }
}