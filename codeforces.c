#include <stdio.h>

int main(){
    int n, i, a, b, c,  contador=0;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%i%i%i", &a, &b, &c);

        if(a+b+c>=2){
            contador++;
        }
    }
    printf("%d", contador);
    return 0;
}