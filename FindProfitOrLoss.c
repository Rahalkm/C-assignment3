#include<stdio.h>
int main()
{
    int cost=30,sP=25,profit,loss;

    if(sP>cost)
    {
        profit=sP-cost;
        printf("profit is %d ",profit);

    }
    else
    {


       loss=cost-sP;


    printf("Loss is%d",loss);
    }


return 0;
}

