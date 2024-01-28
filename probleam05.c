// 1000<tk panjabi
// 500<tk shose
#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int tk=N-1000;
    if (1000<N){
        printf("I will buy Punjabi\n");
        if(500<=tk)
        {
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes\n");
        }
    }
    else{
        printf("Bad luck!\n");
    }

    return 0;
}