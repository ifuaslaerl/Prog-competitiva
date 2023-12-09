
#include <bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false) ; cin.tie(NULL) ;

using namespace std ;

const int MOD = 1e9 + 7 ;
const int INF = (1e9)*2 ;

int main(){

    //fastio

    int n ; cin >> n ;

    vector<int> dp(n+1,0) ;

    //for ( int i = 0 ; i <=6 ; i++ ) dp[i] = 1 ;
    dp[0] = 1 ;

    for ( int i = 1 ; i <= n ; i++ ){
        for ( int j = 1 ; j <= 6 && j <= i ; j++ ){
            dp[i] += dp[i-j] ;  
            dp[i] %= MOD ;
            //cout << "dp[" << i << "] = " << dp[i] << "\n" ; 
        }
    }

    // cout << "\n" ;
    // for ( int i = 0 ; i <= n ; i++ ) cout << "dp[" << i << "] = " << dp[i] << "\n" ;
    // cout << "\n" ;

    cout << dp[n] << "\n" ;

    return 0 ;

}