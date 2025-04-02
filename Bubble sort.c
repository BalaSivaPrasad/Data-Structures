# include<stdio.h>
void main(){
    int A[20],n,i,k,j;
    printf("Enter no.of elements:");
    scanf("%d",&n);
    printf("Enter %d elements:");
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    printf("Elements of A before sorting:\n");
    for(i=0;i<n;i++){
        printf("%d\t",A[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(A[j]>A[j+1]){
                k=A[j];
                A[j]=A[j+1];
                A[j+1]=k;
            }
        }
    }
    printf("\nElements of A after sorting:\n");
    for(i=0;i<n;i++){
        printf("%d\t",A[i]);
    }
}
