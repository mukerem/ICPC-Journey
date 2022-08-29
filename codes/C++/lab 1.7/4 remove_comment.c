#include<stdio.h>
void main()	{
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
    f2=fopen("code","w");
    while((c=getc(f1))!=EOF)	{
        if(c=='/'){
            c=getc(f1);
            if(c=='/'){
                while(1){
                    c=getc(f1);
                    if(c=='\n')break;
                }
            }
            else if(c=='*')	{
                while(1){
                    c=getc(f1);
                    if(c=='*'){
                        c=getc(f1);
                        if(c=='/'){
                            break;
                        }
                    }
                }
            }
            else
                putc(c, f2);
        }
        else putc(c, f2);
    }
    fclose(f1);
    fclose(f2);
    f2=fopen("code","r");
    printf("\n\nThe program with out comment:\n\n ");
    while((c=getc(f2))!=EOF)
        printf("%c",c);
}

