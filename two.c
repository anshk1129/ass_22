#include<stdio.h>
#include<stdlib.h>
int main(){
int *ptr,n,sum=0;
printf("Enter the size of array\n");
scanf("%d",&n);
ptr=(int *)calloc(n,sizeof(int));
printf("Enter %d numbers\n",n);
for(int i=0;i<n;i++)
    scanf("%d",ptr+i);
    for(int i=0;i<n;i++)
    sum=sum + *(ptr+i);
   printf("The average of the values which you have entered is %.3f",(float)(sum/n));
  free(ptr);
return 0;
}