
#include <stdio.h>
main()
{
int c,x=0;
while ((c = getchar()) != EOF){
putchar(c);
printf("%d",x++);
}
}
