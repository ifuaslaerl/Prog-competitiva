#include <bits/stdc++.h>
 
#define fastio ios_base::sync_with_stdio(false) ; cin.tie(NULL) ;
 
using namespace std ;
 
const int MOD = 1e9 + 7 ;
const int INF = (1e9)*2 ;
 
vector<int> moedas(120) ;
vector<int> dp_list(1e6+5,-1) ;
vector<int> existe(1e6+5) ;
 
int n ;
 
int dp( int num ){
    
    //cout << num << "\n" ;
 
    if ( existe[num] ){
        //cout << "dp_list_existe[" << num << "] = " << dp_list[num] << "\n" ;
        return dp_list[num] ;
    }
 
    int menor = INF ;
    for ( int i = 0 ; i < n ; i++ ){
        if ( num-moedas[i] > 0 )
        menor = min(menor,dp(num-moedas[i])) ;
    }
 
 
    dp_list[num] = 1 + menor ;
    //cout << "dp_list[" << num << "] = " << dp_list[num] << "\n" ;
    existe[num] = true ;
 
    return 1 + menor ;
 
}
 
int main(){
 
    //fastio
 
    int x ; cin >> n >> x ;
 
    for ( int i = 0 ; i < n ; i++ ) cin >> moedas[i] ;
 
    for ( int i = 0 ; i < n ; i++ ){
        dp_list[moedas[i]] = 1 ;
        existe[moedas[i]] = true ;
    }
 
    dp(x) ;
 
    if ( dp_list[x] != INF+1 ) cout << dp_list[x] ;
    else cout << -1 ;

    return 0 ;
 
}
