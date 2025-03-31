#include <stdio.h>
void main(){
    int A[10];
    int i,key,low,mid,high;
    printf("Enter 10 elements:");
    for(i=0;i<10;i++){
        scanf("%d",&A[i]);
    }
    printf("Enter a search element:");
    scanf("%d",&key);
    low=0;
    high=9;
    mid=0;
    while(low!=high){
        mid=(low+high)/2;
        if(A[mid]==key){
            printf("Element found at index:%d",mid);
            break;
        }
        else if(key>A[mid]){
            low=mid+1;
        }
        else if(key<A[mid]){
            high=mid-1;
        }
    }
    if(low==high){
        printf("Element not found");
    }
}
