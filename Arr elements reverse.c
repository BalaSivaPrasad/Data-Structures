#include <stdio.h>
void main(){
    int A[20];
    int i,k,l,n;
    printf("Enter no.of elements:");
    scanf("%d",&n);
    printf("Enter values:");
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    printf("Elements before reverse:\n");
    for(i=0;i<n;i++){
        printf("%d\t",A[i]);
    }
    k=0;
    l=n-1;
    for(i=0;i<=(n-1)/2;i++){
        k=A[i];
        A[i]=A[l];
        A[l]=k;
        l=l-1;
    }
    printf("\n Elements after reversal:\n");
    for(i=0;i<n;i++){
        printf("%d\t",A[i]);
    }
}
