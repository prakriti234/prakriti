//Program to Implement a List using Array and develop functions to perform insertion, deletion and linear search
operations.
#include<stdio.h>
//enter the array
void main(){
    int i,n,pos,val,arr[10];
    printf("enter the no.of elements ");
    scanf("%d",&n);
    printf("enter the values");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n");
    //print array before insertion
    printf("array before insertion\n ");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    //enter the value to be inserted
    printf("enter the value to be inserted\n");
    scanf("%d",&val);
    //enter the index
    printf("enter the index\n");
    scanf("%d",&pos);
    printf("\n");
    for(i=n-1;i>=pos;i--){
        arr[i+1]=arr[i];
    }
    printf("\n");
    arr[pos]=val;
    //enter the final array
    printf("array after insertion\n");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }

}