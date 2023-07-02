/*
Given a string, your task is to generate all different strings that can be created using its characters.

Input
The only input line has a string of length n. Each character is between a–z.

Output
First print an integer k: the number of strings. Then print k lines: the strings in alphabetical order.

Constraints
1≤n≤8

Example
Input:
aabac

Output:
20
aaabc
aaacb
aabac
aabca
aacab
aacba
abaac
abaca
abcaa
acaab
acaba
acbaa
baaac
baaca
bacaa
bcaaa
caaab
caaba
cabaa
cbaaa
*/


#include<bits/stdc++.h>
using namespace std ;

void solve(string s, vector<bool>&v, string ans, set<string>& res){
    if(ans.size() == s.size()){
        res.insert(ans) ;
        return ;
    }

    for(int i=0; i<s.size(); i++){
        if(!v[i]){
            v[i]= true ;
            solve(s, v, ans+s[i], res) ;
            v[i]= false ;
        }
    }
}

int main(){
    string s ;
    cin>>s ;

    int n= s.size() ;
    
    set<string>res ;
    vector<bool>v(n) ;
    solve(s, v, "", res) ;

    cout<<res.size() <<"\n" ;
    for(auto it: res){
        cout<<it <<"\n" ;
    }
    
}