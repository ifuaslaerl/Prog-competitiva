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

    // 3 9
    // 2 3 5
    // [1] = -1
    // [2] = 1
    // [3] = 1
    // [4] = 1
    // [5] = 2
    // [6] = 2
    // [7] = 2 | 5 + 2 || 3 + 2 + 2 A base das moedas precisa ser L.I.
    // [8] = 3 | 5 + 3 || 2 + 3 + 3 | 2 + 2 + 2 + 2 
    // [9] = 4 | 3 + 3 + 3 | 3 + 2 + 2 + 2 || 2 + 2 + 5 | 2 + 3 + 2 + 2 + 2

    for ( int i = 0 ; i <= x ; i++ ){
        for ( int j = 0 ; j < n && i-moedas[j] >= 0 ; j++ ){
            dp_list[i] += dp_list[i-moedas[j]] ;
            dp_list[i] %= MOD ;
        }
    }

    for ( int i = 0 ; i <= x ; i++ ) cout << "dp_list[" << i << "] = " << dp_list[i] << "\n" ; 

    cout << dp_list[x] ;

    return 0 ;

}
