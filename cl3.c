#include <stdio.h>
void main(){
    int i,pos,arr[10];
    printf("enter the elements");
    for(i=0;i<=5;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n");
    printf("array before deletion");
    for(i=0;i<=5;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    printf("write the index to be deleted");
    scanf("%d",&pos);
    printf("\n");
    for(i=pos;i<=4;i++){
        arr[i]=arr[i+1];
    }
    printf("array after deletion");
    for(i=0;i<=5;i++){
        printf("%d",arr[i]);
    }
}