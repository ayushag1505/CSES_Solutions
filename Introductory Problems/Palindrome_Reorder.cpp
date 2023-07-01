/*
Given a string, your task is to reorder its letters in such a way that it becomes a palindrome (i.e., it reads the same forwards and backwards).

Input
The only input line has a string of length n consisting of characters A–Z.

Output
Print a palindrome consisting of the characters of the original string. You may print any valid solution. If there are no solutions, print "NO SOLUTION".

Constraints
1≤n≤106

Example
Input:
AAAACACBA

Output:
AACABACAA
*/


#include<bits/stdc++.h>
using namespace std ;


int main(){
    string s ;
    cin>>s ;

    int fre[26]= {0} ;

    for(int i=0; i<s.size(); ++i){
        fre[s[i]- 'A']++ ;
    }

    int cnt= 0 ;
    int oddpos= -1 ;
    for(int i=0; i<26; ++i){
        if(fre[i] & 1) {
            cnt++ ;
            oddpos= i ;
        }
        
    }

    if(cnt>1) cout<<"NO SOLUTION" ;
    else{
        string ans=s ;
        int k=0 ;
        for(int i=0; i<26; i++){
            int loop= fre[i] ;

            if(loop % 2 ==0){
                for(int j=0; j<loop/2; ++j){
                    ans[k]= (i + 'A') ;
                    ans[s.size()-k-1] = (i + 'A') ;
                    k++ ;
                }
            }
            
        }

            
        if(cnt){
            int loop= fre[oddpos] ;
            for(int j=0; j<=loop/2; ++j){
                ans[k]= (oddpos + 'A') ;
                ans[s.size()-k-1] = (oddpos + 'A') ;
                k++ ;
            }
        }
            
        
        for(int i=0; i<ans.size(); i++){
            cout<<ans[i] ;
        }
    }
}