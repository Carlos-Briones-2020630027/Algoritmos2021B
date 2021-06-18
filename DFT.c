// intento de DFT
/*
Resalto que ocupe la siguiente liga para ayudarme un poco -> https://batchloaf.wordpress.com/2013/12/07/simple-dft-in-c/
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define PIx2 6.2831
#define size 7

/*Intentando aplicar DFT en {1, 2, 3, 4, 5, 6, 7}*/

int main(){
    float re[size], ima[size];
    int arrayN[size]={1,2,3,4,5,6,7};
   

    for(int k=0; k<size; k++){
        for(int i=0;i<size;i++){
            re[k]=0;
            re[k] += arrayN[i]*cos((PIx2*i*k)/size);   
        }
        for(int i=0;i<size;i++){
            ima[k]=0;
            ima[k] -= arrayN[i]*sin((PIx2*i*k)/size);
        }
    }
    printf("Reales\n");
    for(int k=0; k<size; k++){
        printf("%f\n", re[k]);
    }
    printf("\n");
    printf("Imaginarios\n");
    for(int k=0; k<size; k++){
        printf("%f i\n", ima[k]);
    }
    
    return 0;
}
