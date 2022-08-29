#include<stdio.h>

char str[50],opstr[75];

int f[2][9]={2,3,4,4,4,0,6,6,0,1,1,3,3,5,5,0,5,0};

int col,col1,col2;

char c;

swt()

{

switch(c)

{

case'+':col=0;break;

case'-':col=1;break;

case'*':col=2;break;

case'/':col=3;break;

case'^':col=4;break;

case'(':col=5;break;

case')':col=6;break;

case'd':col=7;break;

case'$':col=8;break;

default:printf("\nTERMINAL MISSMATCH\n");

exit(1);


break;

}


}

main()

{

int i=0,j=0,col1,cn,k=0;

int t1=0,foundg=0;

char temp[20];

clrscr();

printf("\nEnter arithmetic expression:");

scanf("%s",&str);

while(str[i]!='\0')

i++;

str[i]='$';

str[++i]='\0';

printf("%s\n",str);

come:

i=0;

opstr[0]='$';

j=1;

c='$';

swt();

col1=col;

c=str[i];

swt();

col2=col;

if(f[1][col1]>f[2][col2])

{

opstr[j]='>';

j++;

}

else if(f[1][col1]<f[2][col2])

{

opstr[j]='<';

j++;

}



else

{

opstr[j]='=';j++;

}


while(str[i]!='$')

{

c=str[i];

swt();

col1=col;

c=str[++i];

swt();

col2=col;

opstr[j]=str[--i];

j++;

if(f[0][col1]>f[1][col2])

{

opstr[j]='>';

j++;

}

else if(f[0][col1]<f[1][col2])

{

opstr[j]='<';

j++;

}

else

{

opstr[j]='=';j++;

}

i++;

}

opstr[j]='$';

opstr[++j]='\0';

printf("\nPrecedence Input:%s\n",opstr);

i=0;

j=0;

while(opstr[i]!='\0')



{

foundg=0;

while(foundg!=1)

{

if(opstr[i]=='\0')goto redone;

if(opstr[i]=='>')foundg=1;

t1=i;

i++;

}

if(foundg==1)

for(i=t1;i>0;i--)

if(opstr[i]=='<')break;

if(i==0){printf("\nERROR\n");exit(1);}

cn=i;

j=0;

i=t1+1;

while(opstr[i]!='\0')

{

temp[j]=opstr[i];

j++;i++;

}

temp[j]='\0';

opstr[cn]='E';

opstr[++cn]='\0';

strcat(opstr,temp);

printf("\n%s",opstr);

i=1;

}

redone:k=0;

while(opstr[k]!='\0')

{

k++;

if(opstr[k]=='<')

{

Printf("\nError");

exit(1);

}


}

if((opstr[0]=='$')&&(opstr[2]=='$'))goto sue;

i=1

while(opstr[i]!='\0')

{

c=opstr[i];

if(c=='+'||c=='*'||c=='/'||c=='$')

{

temp[j]=c;j++;}

i++;

}

temp[j]='\0';

strcpy(str,temp);

goto come;

sue:

printf("\n success");

return 0;

}
