// intento de DFT
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

#define PIx2 6.2831
#define size 7

/*Intentando aplicar DFT en {1, 2, 3, 4, 5, 6, 7}*/

int main(){
    float re[size], ima[size], x[size];
    int arrayN[size]={1,2,3,4,5,6,7};
    srand(time(0));
    for(int i=0; i<size;i++){
        x[i]=(2.0*rand()/RAND_MAX)-1.0;
    }

    for(int k=0; k<size; k++){
        for(int i=0;i<size;i++){
            re[k]=0;
            re[k] += x[i]*cos((PIx2*i*k)/size);   
        }
        for(int i=0;i<size;i++){
            ima[k]=0;
            ima[k] -= x[i]*sin((PIx2*i*k)/size);
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