#include<stdio.h>
#include<stdlib.h>
void SelectionSort(int A[], int n){
    for(int i= 0; i<n-1; i++){
        int imin = i;
        for(int j = i+1; j<n; j++){
            if(A[j]<A[imin])
                imin = j;
        }
        int temp = A[i];
        A[i] = A[imin];
        A[imin] = temp;
    }
} 

int main(){
int A[] = {20, 12, 60, 17, 10, 18};
    int n = sizeof(A)/sizeof(A[0]);
    SelectionSort(A, n);
    for(int i=0; i<n; i++){
        printf("%d ", A[i]);
    }
    
return 0;
}