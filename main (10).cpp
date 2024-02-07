/******************************************************************************

Lê-se o número de dias e os acessos correspondentes a cada dia.
Soma-se os acessos até que a soma ultrapasse ou seja igual a 1 milhão.
Quando isso acontece, imprime-se o número de dias necessários para chegar a 1 milhão e o programa termina.
*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{


int soma = 0;
int dias = 0;


int N;
int A;
cout << "dia" << endl;
cin >> N;

for(int i=0; i<=N; i++){
    cout << "digite o numero de acessos" << endl;
    cin >> A;
    soma+=A;
    dias++;
   
       
       if(soma>=1000000){
           break;
       }
   }             cout << dias;

    }
  
    
    





