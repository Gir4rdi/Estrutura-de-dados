#include <stdio.h>
#include <stdlib.h>

void insertion(int v[], int tam){

    for (int i=1; i<tam; i++) {

        int temp = v[i];
        int j;

        for (j = i-1; j >=0 && v[j] > temp ;j--){
            v[j+1] = v[j];
        }

        v[j+1] = temp;
    }
}

int main(){
    int v[8] ={5,6,7,3,2,1,8,4};

    insertion(v, 8);

    for (int i =0; i<8; i++){
        printf("[%d]", v[i]);
    }
}