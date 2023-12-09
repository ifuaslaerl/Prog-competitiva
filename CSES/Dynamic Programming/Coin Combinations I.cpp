#include <bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false) ; cin.tie(NULL) ;

using namespace std ;

const int MOD = 1e9 + 7 ;

int main(){

    //fastio

    int n , x ; cin >> n >> x ;

    vector<int> moedas(n) ;

    int maior = 0 ;
    for ( int i = 0 ; i < n ; i++ ){
        int num ; cin >> num ;
        moedas[i] = num ;
        maior = max(maior,num) ;
    }

    vector<int> dp_list(max(maior+5,x),0) ;

    //for ( int i = 0 ; i < n ; i++ ) cout << moedas[i] << " " ;

    sort(moedas.begin(),moedas.end()) ;

    for ( int i = 0 ; i < n ; i++ ){
        dp_list[moedas[i]] = 1 ;
    }

    for ( int i = 0 ; i <= x ; i++ ){
        for ( int j = 0 ; j < n && i-moedas[j] >= 0 ; j++ ){
            dp_list[i] += dp_list[i-moedas[j]] ;
            dp_list[i] %= MOD ;
        }
    }

    //for ( int i = 0 ; i <= x ; i++ ) cout << "dp_list[" << i << "] = " << dp_list[i] << "\n" ; 

    cout << dp_list[x] ;

    return 0 ;

}
