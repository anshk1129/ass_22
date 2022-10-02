#include<stdio.h>
#include<stdlib.h>
int main(){
int *ptr;
ptr=(int *)malloc(sizeof(ptr));
*ptr=100;
printf("Before free %d\n",*ptr);
free(ptr);
printf("After free %d",*ptr);
return 0;
}