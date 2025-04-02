# include<stdio.h>
void main(){
    int A[20],n,i,k,j,position;
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
       position=i;
       for(j=i+1;j<n;j++){
           if(A[position]>A[j]){
               position=j;
           }
       }
       if(position!=i){
           k=A[position];
           A[position]=A[i];
           A[i]=k;
       }
    }
    printf("\nElements of A after sorting:\n");
    for(i=0;i<n;i++){
        printf("%d\t",A[i]);
    }
}
