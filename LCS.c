#include <stdio.h>
#include <string.h>
#include <math.h>

#define SIZE 500
// Cadena 1 = aksdhflkweruyasd  && Cadena 2 = asjdhflkasdhfhss

int max(int a, int b){
    if(a>b)
        return a;
    return b;
}

int lcs(char a[], char b[], int A, int B){
    int counter=0;
    if(A == 0 || B == 0)
        return counter;
    if(a[A]==b[B])
        counter = lcs(a, b, A-1, B-1) + 1;
    if(a[A]!=b[B])
        counter = max(lcs(a, b, A, B-1), lcs(a, b, A-1, B));
    return counter;
}

int main(void){
    // Casos que use:
    //  Caso si estuviese vacío
    //char a[]="";
    //char b[]="";
    //  Caso si estos fueran inguales
    //char a[]="aeiouop";
    //char b[]="aeiou";
    //  Caso si este fuera distinto de vacío y diferente entre sí
    //char a[]="aksdhflkweruyasd";
    //char b[]="asjdhflkasdhfhss";
    
    int A = strlen(a);
    int B = strlen(b);
    // Determinando que el numero de subsecuencias es Theha(2^n)
    //printf("Subsecuencias posibles en A: %.0f\t Subsecuencias posibles en B: %.0f\n", pow(2.0,strlen(Ax)*1.0), pow(2.0,strlen(Bx)*1.0));
    printf("\nLCS :%i", lcs(a, b, A, B));
    return 0;
}