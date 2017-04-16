#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b; 
    *b = temp;
}
int Partition(int *A, int start, int end){
    int pivot = A[end];
    int pindex = start;
    for(int i=start; i<end; i++){
        if(A[i]<=pivot){
            swap(&A[i], &A[pindex]);
            pindex++;
        }
    }
    swap(&A[pindex], &A[end]);
    return pindex;
}

void QuickSort(int *A,int start, int end) {
	if(start<end){
        int pindex = Partition(A, start, end);
     QuickSort(A, start, pindex -1);
         QuickSort(A, pindex+1, end);
    }
}

int main() {
	
	int A[] = {6,2,3,1,9,10,15,13,12,17}; 
	int i,n;

	n = sizeof(A)/sizeof(A[0]); 
 
	QuickSort(A, 0, n);

	for(i = 0;i < n;i++) 
        printf("%d ",A[i]);
    
	return 0;
} 