#include<stdio.h>
void main()
{
        int n1,j;
        for (n1=2;n1<50;n1++)
        {
                for (j=2;j<=n1;j++)
                        if (n1%j==0)
                                break;
                if (j==n1)
                        printf("%d ",j);
        }
}
