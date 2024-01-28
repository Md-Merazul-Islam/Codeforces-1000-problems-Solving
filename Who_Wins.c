#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
     int tiger=0,pahtan=0;
     for (int i=0;i<n;i++)
     {
        int x1,x2;
        scanf("%d %d",&x1,&x2);
        if (x1>x2)
        {
            tiger++;
        }
         if (x1<x2)
        {
            pahtan++;
        }
        
     }
     if (tiger == pahtan)
        {
            printf("Draw");
        }
        else if (tiger>pahtan)
        {
            printf("Tiger");
        }
        else
        {
            printf("Pathan");
        }

    return 0;
}