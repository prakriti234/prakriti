#include <stdio.h>
void main(){
    int arr[10],i;
    printf("enter the elements of array \n");
    for(i=0;i<=5;i++){
        scanf("%d",&arr[i]);
    }
    printf("array after traversal\n");
    for(i=0;i<=5;i++){
        printf("arr[%d]=%d\n",i,arr[i]);
    }
}