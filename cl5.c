#include <stdio.h>
void main(){
    int i,pos,x,arr[10];
    printf("enter the elements\n");
    for(i=0;i<=5;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n");
    printf("the array before insertion\n");
    for(i=0;i<=5;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    printf("enter the index to be updated\n");
    scanf("%d",&pos);
    printf("enter the element to which we want to update\n");
    scanf("%d",&x);
    arr[pos]=x;
    printf("array after updation ");
    for(i=0;i<=5;i++){
        printf("%d",arr[i]);
        
    }
    
    }
    