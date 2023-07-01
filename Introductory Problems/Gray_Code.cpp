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