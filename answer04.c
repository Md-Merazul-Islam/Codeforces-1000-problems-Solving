// Has Return + Parameter :
#include <stdio.h>
int sum(int a,int b)
{
    return a+b;
}
int main()
{
    int a,b;
    scanf("%d %d ",&a,&b);
    printf("%d\n",sum(a,b));

    return 0;
}

// Has Return + No Parameter :
#include <stdio.h>
int mins()
{
    int a, b;
    scanf("%d %d ", &a, &b);
    int result = a - b;

    return result;
}

int main()
{
    int res = mins();
    printf("%d", res);
    return 0;
}

// No Return + Parameter:
#include <stdio.h>
void min(int a, int b)
{
    if (a < b)
    {
        printf("minimun number is : a", a);
    }
    else if (a > b)
    {

        printf("minimun number is : b", b);
    }
    else
    {
        printf("value not allow ");
    }
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    min(a, b);
    return 0;
}


// No Return + No Parameter:

#include <stdio.h>
 void sum(void)
 {
    int n,sum_result=0;
    scanf("%d",&n);
    for (int i=2;i<=n;i=i+2) // print the sum of even number 
    {
        sum_result+=i;
    }
        printf("%d" ,sum_result);

 }
int main()
{
    sum();
    return 0;
}
