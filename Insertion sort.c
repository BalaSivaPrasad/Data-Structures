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
    for(i=0;i<n;i++){
        k=A[i];
        j=i-1;
        while(j>=0 && A[j]>=k){
            A[j+1]=A[j];
            j=j-1;
        }
        A[j+1]=k;
    }
    printf("\nElements of A after sorting:\n");
    for(i=0;i<n;i++){
        printf("%d\t",A[i]);
    }
}
