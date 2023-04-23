#include <iostream>
using namespace std;

int main() {
   int n=0, primo=1, secondo=1, terzo=0, contatore=3;
    cin >> n;

    if(n>=2){
        cout << 1 << endl;
        cout << 1 << endl;
        while(contatore<=n){
            terzo=primo+secondo;
            cout << terzo << endl;
            secondo=primo;
            primo=terzo;
            contatore++;
        }
    }else{
        cout << "errore" << endl;
    }
   return 0;
}
