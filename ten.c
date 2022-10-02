#include<stdio.h>
#include<stdlib.h>
int main(){
int *ptr,n,largest,smallest;
printf("Enter the size of array\n");
scanf("%d",&n);
ptr=(int *)calloc(n,sizeof(int));
if(ptr==NULL){
    printf("Memory is not allocated\n");
}
else{
printf("Enter %d numbers\n",n);
for(int i=0;i<n;i++)
    scanf("%d",ptr+i);

    largest=*(ptr);
    smallest=*(ptr);
    for(int i=1;i<n;i++){
    if(*(ptr+i)>largest){
        largest=*(ptr+i);
    }
   if(*(ptr+i)<smallest){
       smallest=*(ptr+i);
   }
    }
    printf("The largest and the smallest element is %d and %d",largest,smallest);

  free(ptr);
}
return 0;
}