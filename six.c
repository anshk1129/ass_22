#include<stdio.h>
#include<stdlib.h>
int main(){
int *ptr,n,largest;
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
    for(int i=1;i<n;i++){
    if(*(ptr+i)>largest){
        largest=*(ptr+i);
    }
    }
    printf("The largest element is %d",largest);

  free(ptr);
}
return 0;
}