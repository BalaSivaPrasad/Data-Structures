#include <stdio.h>

void main() {
        int A[20];
        int n,key,i;
        printf("Enter number of elements");
        scanf("%d",&n);
        /*Input elements*/
        for(i=0;i<=n-1;i++)
        {
            scanf("%d",&A[i]);
        }
        /*Take the Key element to search */
        printf("Enter the element to search");
        scanf("%d", &key);
        /*Performing Linear Search */
        for(i=0;i<=n-1;i++)
        {
            if(A[i]==key)
            {
                printf("Element found at index : %d",i);
            }
        }
}
