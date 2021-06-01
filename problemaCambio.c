#include<stdio.h>
#define false 0

void change(int cM[], int n, int l){
    int ceroUno[]={0,0,0,0,0,0,0};
    int resultado=0;
    while(n!=0){
        for(int i=l-1; i>=0; i--){
            if(cM[i]<=n){
                n -= cM[i];
                ceroUno[i]=1;
                printf("Da 1 de %i\n", cM[i]);
                i++;
                resultado++;
            }
        }
    }
    printf("Monedas/billetes dados: [%i]", resultado);
    printf("\nDecisiones 0-1 Monedas= {1, 2, 5, 10, 50, 100, 1000}-->{");
    for(int k=0; k<l;k++){
        printf("%i,", ceroUno[k]);
    }
    printf("}");
}
int main(void){
    int v=0;
    int c[]={1,2,5,10,50,100,1000};
    int lenght = sizeof c / sizeof c[0];
    scanf("%i", &v);
    change(c,v,lenght);
    return 0;
}