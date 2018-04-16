#include <iostream>
using namespace std;

int main(){

int n, div, aux, i, j;

cin >> n;

for(i=1; i<=n; i++){
        cin >> aux;
        div = 0;
    for(int j=2; j<=aux/2; j++){
        if(aux%j == 0){
            div++;
            break;
        }
    }

    if(div == 0 && aux!= 1){
        cout << aux << " eh primo" << endl;
    }
    else{
        cout << aux << " nao eh primo" << endl;
    }

}

return 0;

}
