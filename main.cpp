#include <cstdlib>
#include <cstdio>

int suma(int a, int b){
    return a+b;
}

/*
@ a y b son numeros
@ retorna la resta
*/
int resta(int a, int b){
    return a-b;
}

int main(){

    printf("%i \n", suma(3, 9));
    printf("%i \n", resta(10, 2)); 
    system("pause");
}