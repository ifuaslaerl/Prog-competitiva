
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

// passou!

#include <bits/stdc++.h>

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

void trocar( string &binario , int &pos ){

    if( binario[pos] == '1' ) binario[pos] = '0' ;
    else binario[pos] = '1' ;

}

int pot( int num ){
    int asw = 1 ;
    for( int i = 1 ; i <= num ; i++ ) asw*=2 ;
    return asw ;
}

int main(){

    int n ; cin >> n ;

    int tamanho = pot(n) ;
    
    string bit ;
    for( int i = 0 ; i < n ; i++ ) bit += "0" ; 

    vector<int> mudancas(tamanho+1,1) ;
    for( int i = 1 ; i < n ; i++ ){

        int temp = pot(i) ;
        
        for( int j = temp+1 ; j < tamanho ; j+=temp*2 ){
            mudancas[j] = i+1 ;
            //cout << j << " " ;
        }
        //cout << " pos\n" ;

    }

    //for( int i = 1 ; i < tamanho ; i++ ) cout << mudancas[i+1] << " " ;
    //cout << " mudancas\n" ;

    cout << bit << "\n" ;
    
    for( int i = 1 ; i <= tamanho-1 ; i++ ){
        
        int pos = n - mudancas[i+1] ;

        trocar( bit , pos ) ;
        cout << bit << "\n" ;
    }

}
