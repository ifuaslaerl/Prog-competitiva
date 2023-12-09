
//———————————No bitches?———————————
//⠀⣞⢽⢪⢣⢣⢣⢫⡺⡵⣝⡮⣗⢷⢽⢽⢽⣮⡷⡽⣜⣜⢮⢺⣜⢷⢽⢝⡽⣝
//⠸⡸⠜⠕⠕⠁⢁⢇⢏⢽⢺⣪⡳⡝⣎⣏⢯⢞⡿⣟⣷⣳⢯⡷⣽⢽⢯⣳⣫⠇
//⠀⠀⢀⢀⢄⢬⢪⡪⡎⣆⡈⠚⠜⠕⠇⠗⠝⢕⢯⢫⣞⣯⣿⣻⡽⣏⢗⣗⠏⠀
//⠀⠪⡪⡪⣪⢪⢺⢸⢢⢓⢆⢤⢀⠀⠀⠀⠀⠈⢊⢞⡾⣿⡯⣏⢮⠷⠁⠀⠀
//⠀⠀⠀⠈⠊⠆⡃⠕⢕⢇⢇⢇⢇⢇⢏⢎⢎⢆⢄⠀⢑⣽⣿⢝⠲⠉⠀⠀⠀⠀
//⠀⠀⠀⠀⠀⡿⠂⠠⠀⡇⢇⠕⢈⣀⠀⠁⠡⠣⡣⡫⣂⣿⠯⢪⠰⠂⠀⠀⠀⠀
//⠀⠀⠀⠀⡦⡙⡂⢀⢤⢣⠣⡈⣾⡃⠠⠄⠀⡄⢱⣌⣶⢏⢊⠂⠀⠀⠀⠀⠀⠀
//⠀⠀⠀⠀⢝⡲⣜⡮⡏⢎⢌⢂⠙⠢⠐⢀⢘⢵⣽⣿⡿⠁⠁⠀⠀⠀⠀⠀⠀⠀
//⠀⠀⠀⠀⠨⣺⡺⡕⡕⡱⡑⡆⡕⡅⡕⡜⡼⢽⡻⠏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
//⠀⠀⠀⠀⣼⣳⣫⣾⣵⣗⡵⡱⡡⢣⢑⢕⢜⢕⡝⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
//⠀⠀⠀⣴⣿⣾⣿⣿⣿⡿⡽⡑⢌⠪⡢⡣⣣⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
//⠀⠀⠀⡟⡾⣿⢿⢿⢵⣽⣾⣼⣘⢸⢸⣞⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
//⠀⠀⠀⠀⠁⠇⠡⠩⡫⢿⣝⡻⡮⣒⢽⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
//—————————————————————————————

#include "bits/stdc++.h"

#define fastio ios_base::sync_with_stdio(false);    cin.tie(NULL);
#define testes int t ; cin >> t ; while(t--)  

// comandos uteis
// sort( lista.begin() , lista.end() , ( função de comparação opcional ) ) // crescente
// sort( lista.rbegin() , lista.rend() ) // decrescente
// set<int>::iterator nome_do_ponteiro = nome_do_set.bg // cria um ponteiro para um set que começa no inicio do set // nome_do_ponteiro pra andar com o ponteiro
// auto nome_do_ponteiro // tbm serve pra criar ponteiros  
// distance(nome_do_set.begin(), nome_do_ponteiro) // transforma o ponteiro em indice 
// reverse( lista.begin() , lista.end() ) // inverte a lista // funciona pra strings
// randomInt() // numero inteiro aleatorio
// priority_queue<int> , vector<int> , greater<int>> // priority_queue invertida 

const int imax = 2147483647 ; // 2 . 10^9 

using namespace std;

typedef pair<int,int> pii ;
typedef long long ll ;

int main(){
    
    fastio

    int n ; cin >> n ;

    // 1 - 1 
    // 2 - NO SOLUTION
    // 3 - NO SOLUTION
    // 4 - 2 4 1 3
    // 5 - 1 3 5 2 4
    // 6 - 1 3 5 2 4 6
    // 7 - 1 3 5 7 2 4 6

    if ( n <= 1 ){
        cout << 1 ;
        return 0 ;
    }
    
    if( n <= 3 ){
        cout << "NO SOLUTION" ;
        return 0 ;
    }

    for( int i = 2 ; i <= n ; i+=2 ) cout << i << " " ;
    for( int i = 1 ; i <= n ; i+=2 ) cout << i << " " ;

    return 0 ;

}
