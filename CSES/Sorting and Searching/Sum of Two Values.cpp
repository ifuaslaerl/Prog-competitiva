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
// lower_bound(vector_ou_set.begin(),vector_ou_set.end(),valor) // primeiro valor maior ou igual ao numero procurado
// upper_bound(vector_ou_set.begin(),vector_ou_set.end(),valor) // primeiro valor maior ao numero procurado
// vector.erase(ponteiro) // apaga por ponteiro
// vector.remove(valor) // apaga por valor


const int imax = 2147483647 ; // 2 . 10^9
const int mod = 1e9 + 7 ;

using namespace std;

typedef pair<int,int> pii ;
typedef long long ll ;

int main(){

    fastio

    int n , x ; cin >> n >> x ;
    vector<pair<int,int>> lista(n) ;

    for( int i = 0 ; i < n ; i++ ){
        cin >> lista[i].first ;
        lista[i].second = i+1 ;
    }
    
    sort(lista.begin(),lista.end()) ;

    int l = 0 , r = n-1 ;
    while(l<r){

        //cout << lista[l].first << " " << lista[r].first << "  num\n" ;
    
        if( lista[l].first + lista[r].first == x ) break ;
        else if ( lista[l].first + lista[r].first > x ) r-- ;
        else l++ ;

    }

    if ( lista[l].first + lista[r].first != x || l == r ) cout << "IMPOSSIBLE\n" ;
    else    cout << min(lista[l].second,lista[r].second) << " " << max(lista[l].second,lista[r].second) ;

}
