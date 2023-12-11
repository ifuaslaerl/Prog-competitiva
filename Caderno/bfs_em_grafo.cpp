
#include <bits/stdc++.h>

using namespace std ;

int n , m ; // quantidade de vertices e arestas do grafo
bool vis[n] ; // vetor que guarda se o vertice ja foi visitado

vector<vector<int>> grafo(n) ;
// exemplo de grafo nessa estrutura (desenho do grafo no README):
// 0 - {1,4}
// 1 - {0,2,4}
// 2 - {1,3}
// 3 - {2,4,5}
// 4 - {0,1,3}
// 5 - {3}

void bfs( int x ){

    queue<int> fila ; fila.push(x) ;

    while(!fila.empty()){
        
        int vertice = fila.front() ;
        fila.pop() ;

        if ( vis[vertice] ) continue ;
        
        vis[vertice] = true ; 
        // se o elemento ja for visitado dentro de uma bfs, o mesmo nao sera visitado posteriormente

        // visita todos elementos em volta
        for ( int proximo : grafo[vertice] ) fila.push(proximo) ;

    }

}

// complexidade em O(n+m)