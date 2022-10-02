#include<stdio.h>
#include<stdlib.h>
int main(){
char*q,c;
int i=0,j=1;
q=(char*)malloc(sizeof(char));
printf("Enter the string\n");
while(c!='\n'){
    c=getc(stdin);
     j++;
     q=(char*)realloc(q,j*(sizeof(char)));
     q[i]=c;
     i++;
}
q[i]='\0';
printf("%s ",q);
free(q);
return 0;
}