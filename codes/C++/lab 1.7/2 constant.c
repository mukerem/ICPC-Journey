#include<string.h>
#include<ctype.h>
#include<stdio.h>
main(){
    FILE *f1;
    char c,str[10],st1[10];
    int num[100],lineno=0,tokenvalue=0,i=0,j=0,k=0;
    printf("\nEnter the c program: ");
    gets(st1);
    f1=fopen(st1,"r");
    while((c=getc(f1))!=EOF){
        printf("%c",c);
    }
    fclose(f1);
    f1=fopen("input","r");
    while((c=getc(f1))!=EOF){
        if(isdigit(c)){
            tokenvalue=c-'0';
            c=getc(f1);
            while(isdigit(c)){
            tokenvalue = tokenvalue*10+c-'0';
            c=getc(f1);
        }
        num[i++]=tokenvalue;
        ungetc(c,f1);
        }
    }
    fclose(f1);
    printf("\nconstants in the program are ");
    for(j=0;j<i;j++)
        printf("%d ",num[j]);
}
