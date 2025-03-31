#include <stdio.h>
void main(){
    int A[20];
    int i,n,sum=0;
    printf("Enter no.of elements:");
    scanf("%d",&n);
    printf("Enter values:");
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
        sum=sum+A[i];
    }
    printf("Sum of array elements is:%d",sum);
}
