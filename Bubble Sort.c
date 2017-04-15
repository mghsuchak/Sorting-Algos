#include<stdio.h>
#include<stdlib.h>
void BubbleSort(int A[], int n){
    for(int i= 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(A[j] > A[j+1]){
             int temp = A[j];
             A[j] = A[j+1];
              A[j+1] = temp;   
            }     
        }
    }
} 

int main(){
int A[] = {20, 45, 12, 22, 88, 18};
    int n = sizeof(A)/sizeof(A[0]);
    BubbleSort(A, n);
    for(int i=0; i<n; i++){
        printf("%d ", A[i]);
    }
    
return 0;
}