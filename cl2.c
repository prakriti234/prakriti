//program to Implement a List using Array and develop functions to perform insertion, deletion and linear search
#include <stdio.h>
//enter the array
void main(){
int i,n,arr[10],x,y;
printf("enter the elements\n");
for(i=0;i<5;i++){
    scanf("%d",&arr[i]);
}
printf("\n");
printf("the array is\n");
for(i=0;i<5;i++){
    printf("%d",arr[i]);
}
printf("\n");
//enter the number to be sarched
printf("enter the number to be searched");
scanf("%d",&n);
printf("\n");
//search the number
for(i=0;i<5;i++){
    if(arr[i]==n){
        x=n;
        y=i;
        printf("element found\n");
        printf("index is %d",y);
    }
    
}
}

