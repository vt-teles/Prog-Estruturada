//A sequência de Padovan é uma sequência de naturais P(n) definida pelos valores
//iniciais
//P(0) = P(1) = p(2) = 1
//e a seguinte relação recursiva
//P(n) = P(n - 2) + P(n - 3) se n > 2
//Alguns valores da sequência são: 1, 1, 1, 2, 2, 3, 4, 5, 7, 9, 12, 16, 21, 28...
//Faça uma função recursiva que receba um número N e retorne o N-ésimo termo da
//sequência de Padovan.
#include "stdio.h"
int rec(int n){
    if ((n==0) || (n==1) || (n==2)) return 1;
    return rec(n-2) + rec(n-3);
}
int main(){
    int x; scanf("%d", &x);
    int z = rec(x);
    printf("%d", z);
    return 0;
}