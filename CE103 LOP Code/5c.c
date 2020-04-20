#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n,line,i,sp;
    printf("\n enter the value of line= ");
    scanf("%d",&n);
    for(line=1;line<=n;line++)
    {
            for(sp=1;sp<=n-line;sp++)
            {
                printf(" ");
            }


            for(i=1;i<=2*line-1;i++)
            {
                printf("*");
            }

    printf("\n");
    }
}
