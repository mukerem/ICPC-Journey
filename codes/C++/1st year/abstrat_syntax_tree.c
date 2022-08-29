#include<stdio.h>
#include<string.h>

void main()
{
char exp[50];
char tree[50];
gets(exp);
//printf("%s", exp);
int d=1;

int l = strlen(exp);
int c = 0, k, i;
for(i=0;i<l;i++){
   if(exp[i] == '+' || exp[i] == '-' || exp[i] == '*'|| exp[i] == '/'||exp[i] == '='|| exp[i] == '<'||exp[i] == '>')
    {
        if (tree[c-1] != ')'){
            tree[c] = tree[c-1];
            tree[c-1] = exp[i];
        }
        else{
            k = c+1;
            while (1){
                if(tree[k-1] == '('){
                    tree[k] = tree[k-1];
                    tree[k-1] = exp[i];
                    break;
                }
                tree[k] = tree[k-1];
                k--;
            }
        }

    }
    else
        tree[c] = exp[i];
    c++;

}
int number_of_operator = 1;
 printf("( ");
for(i=0;i<c;i++){
    if((tree[i] == '+' || tree[i] == '-' || tree[i] == '*'|| tree[i] == '/'||tree[i] == '=' ||tree[i] == '='|| tree[i] == '<'||tree[i] == '>') && (tree[i+1] != '(')){
                printf("%c ( ", tree[i]);
                number_of_operator++;

    }
    else
                printf("%c ", tree[i]);

}

for(i=0;i<number_of_operator;i++){
                printf(")");
}
printf("\n");
for(i = 0; i < c ; i++){
    printf("%c", tree[i]);
}
}
