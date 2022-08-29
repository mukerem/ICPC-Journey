
#include<string.h>
#include<ctype.h>
#include<stdio.h>
void keyword(char str[10]){
    if (strcmp("for",str)==0 || strcmp("while",str)==0 || strcmp("do",str)==0 || 	strcmp("int",str)==0 || strcmp("float",str)==0||strcmp("char",str)==0 || 	strcmp("double",str)==0 || strcmp("if",str)==0 || strcmp("else",str)==0 || 	strcmp("break",str)==0)
       printf("\n%s is a keyword",str);
else
	printf("\n%s is an identifier",str);
}
main(){
    FILE *f1,*f2;
    char c,str[10],st1[10];
    int num[100], i=0,j=0,k=0;
    printf("\nEnter the c program: ");
    gets(st1);
    f1=fopen(st1,"r");
    while((c=getc(f1))!=EOF)
        printf("%c",c);
    fclose(f1);
    f1=fopen(st1,"r");
    f2=fopen("keys_and_identifiers","w");
    while((c=getc(f1))!=EOF){
        if(isalpha(c)){
            putc(c,f2);
            c=getc(f1);
            while(isdigit(c)||isalpha(c)||c=='_'||c=='$'){
                putc(c,f2);
                c=getc(f1);
            }
            putc(' ',f2);
            ungetc(c,f1);
        }
        else if(c==' '||c=='\t')
            printf(" ");
    }
    fclose(f2);
    fclose(f1);
    f2=fopen("keys_and_identifiers","r");
    k=0;
    printf("The keywords and identifiers are:");
    while((c=getc(f2))!=EOF){
        if(c!=' ')
        str[k++]=c;
        else{
            str[k]='\0';
            keyword(str);
            k=0;
        }
    }
    fclose(f2);
}
