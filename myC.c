#include<stdio.h>

void seletsort(char a[], int Length);
void bubbleSort(char arr[], int n);



int main(){
    char a[10] = {1, 3, 4, 11, 5, 6, 7, 8, 9, 10};
    int Length = 10;
    seletsort(a, Length);
    // bubbleSort(a, Length);

    return 0;
}


void bubbleSort(char a[], int Length){
    int i, j, temp;
    for(i=0; i<Length; i++){
        temp = a[i];
        for(j=0; j<Length; j++)
        {
            if(a[j] > temp){
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
            else if(a[j] == temp){
                continue; 
            }
            else{
                continue;
            }
        }
    }
    for(i=0; i<Length; i++){
        printf("%d ", a[i]);
    }
}


void seletsort(char a[], int Length){
    int i, j, temp_min;
    for(i=0; i<Length; i++){
        temp_min = a[i];
        for(j=i+1; j<Length; j++){
            if(a[j] < temp_min){
                temp_min = a[j];//find the min_number
                a[j] = a[i];
                a[i] = temp_min;
            }
        }
    }
    for(i=0; i<Length; i++){
        printf("%d",a[i]);
    }
}