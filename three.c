#include<stdio.h>
#include<stdlib.h>
int main(){
int *ptr,n,sum=0;
printf("Enter the size of array\n");
scanf("%d",&n);
ptr=(int *)malloc(n*sizeof(int));
printf("Enter %d numbers\n",n);
if(ptr==NULL){
    printf("Memory is not allocate\n");
}
else{
for(int i=0;i<n;i++)
    scanf("%d",ptr+i);
    for(int i=0;i<n;i++)
    sum=sum + *(ptr+i);
    printf("The sum is %d",sum);
    free(ptr);
}
return 0;
}