#include<stdio.h>
#include<stdlib.h>
void InsertionSort(int A[], int n){
    for(int i= 1; i<n; i++){
        int value = A[i];
        int hole = i;
       while(hole > 0 && A[hole-1]>value){
           A[hole] = A[hole-1];
           hole =hole-1;
       }
        A[hole] = value;
    }
} 

int main(){
int A[] = {20, 45, 12, 22, 88, 18};
    int n = sizeof(A)/sizeof(A[0]);
    InsertionSort(A, n);
    for(int i=0; i<n; i++){
        printf("%d ", A[i]);
    }
    
return 0;
}