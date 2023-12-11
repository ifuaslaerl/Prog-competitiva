
#include <bits/stdc++.h>
using namespace std ;

int main(){
    
    // pega os inputs
    int n ; cin >> n ;
    vector<int> lista(n) , copia(n) , comprimido(n) ;
    for( int i = 0 ; i < n ; i++ ){
        cin >> lista[i] ;
        copia[i] = lista[i] ;
    }

    // ordena a copia da lista
    sort(copia.begin(),copia.end()) ;

    // gera um mapa que transforma a lista ordenada em uma lista crescente de 0 a n
    map<int,int> mapa ;
    int index = 0 ;
    for( int i = 0 ; i < n ; i++ ){
        if ( !mapa.count(copia[i]) ) mapa[copia[i]] = index++ ;
    }

    // utiliza o mapa pra renomear os itens da lista original em valores comprimidos
    for( int i = 0 ; i < n ; i++ ) comprimido[i] = mapa[lista[i]] ;

    cout << "\nLista            -> " ; for( int i = 0 ; i < n ; i++ ) cout << lista[i]      << " " ; cout << endl ;
    cout <<   "Lista ordenada   -> " ; for( int i = 0 ; i < n ; i++ ) cout << copia[i]      << " " ; cout << endl ;
    cout <<   "Lista comprimida -> " ; for( int i = 0 ; i < n ; i++ ) cout << comprimido[i] << " " ; cout << endl ;

    return 0 ;

}

// Complexidade em O(n*log(n))
