/*
You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.

Input
The only input line contains a string of n characters.

Output
Print one integer: the length of the longest repetition.

Constraints
1≤n≤106

Example

Input:
ATTCGGGA

Output:
3
*/

#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s ;
    cin>>s ;

    int ans= 1 ;
    int temp=1 ;
    for(int i=0; i<s.size()-1; ++i){
        if(s[i] == s[i+1]) temp++ ;
        else{
            ans= max(ans, temp) ;
            temp=1 ;
        }
    }
    ans= max(ans, temp) ;
    cout<<ans ;
}