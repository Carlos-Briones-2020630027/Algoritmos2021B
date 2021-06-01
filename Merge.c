#include <stdio.h>
#define L 8

void print_array(int cuantos, int datos[], char *str){
    int i;
    printf("%s", str);
    for(i=0; i<cuantos; i++)
        printf("%d\t", datos[i]);
}
void merge(int a[], int b[], int c[], int cuantos){  /* a y b del mismo tamaño */
    int i=0, j=0, k=0;

    while(i<cuantos && j<cuantos)
        if(a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    while(i< cuantos)
        c[k++] = a[i++];
    while(j< cuantos)
        c[k++] = b[j++];
}

void mergesort(int key[], int cuantos){ /* a elevado a la 2 */
    int j, k;
    int w[cuantos];

    for(k=1; k<cuantos; k *=2){
        for(j=0; j<cuantos -k; j+=2 *k)
            merge(key+j, key+j+k, w+j, k);
        for(j=0; j<cuantos; j++)
        key[j]= w[j];
    }
}
int main(void){
    int a[L] = {99, 82, 74, 85, 92, 67, 76, 49};
    print_array(L, a, "Array no ordenado\n");
    printf("\n\n");
    mergesort(a, L);
    print_array(L, a, "Array ordenado \n");
    printf("\n\n");
    return 0;
}