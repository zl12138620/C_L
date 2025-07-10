#include<stdio.h>

void seletsort(char a[], int Length);
void bubbleSort(char arr[], int n);



int main(){
    char a[10] = {1, 3, 4, 11, 5, 6, 7, 8, 9, 10};
    int Length = 10;
    bubbleSort(a,Length);

    return 0;
}


void seletsort(char a[], int Length){
    int i, j, temp;
    for(i=0; i<Length; i++){
        temp = a[i];
        for(j=0; j<Length; j++){

        }
    }
}

void bubbleSort(char a[], int Length){
    int i, j, temp;
    for(i=0; i<Length-1; i++){
        for(j=0; j<Length-i-1; j++){
            if(a[j+1] < a[j]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    for(i=0; i<Length; i++){
        printf("%d ",a[i]);
    }
}



