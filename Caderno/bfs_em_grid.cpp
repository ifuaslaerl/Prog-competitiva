
#include <bits/stdc++.h>

using namespace std ;

int n , m ; // tamanho da grid
char grid[n][m] ;
bool vis[n][m] ; // matriz que guarda se o vertice ja foi visitado

pair<int,int> direcoes[4] = { {1,0} , {0,1} , {-1,0} , {0,-1} } ; 
// pode receber mais direcoes como na diagonal

// funcao que verifica se as coordenadas dadas estao dentro da grid
bool dentro( int i , int j ) ;

void bfs_no_2d( int i , int j ){

    queue<pair<int,int>> fila ; fila.push({i,j}) ;

    while(!fila.empty()){
        
        int x = fila.front().first ;
        int y = fila.front().second ;
        fila.pop() ;

        if ( vis[x][y] ) continue ;
        
        vis[x][y] = true ; 
        // se o elemento ja for visitado dentro de uma bfs, o mesmo nao sera visitado posteriormente

        // visita todos elementos em volta
        for ( pair<int,int> caminho : direcoes ){
            
            int k = caminho.first ;
            int l = caminho.second ;

            if ( dentro(x+k,y+l) ) fila.push({x+k,y+l}) ;
            
        }

    }

}

// complexidade em O(n*m)

bool dentro( int i , int j ){
    if ( i < 0 || j < 0 || i >= n || j >= m ) return false ;
    return true ;
}
