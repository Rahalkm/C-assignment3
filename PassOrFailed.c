#include<stdio.h>
int main()
{
    int m,s,c,h,e;
    float t,p;

    printf("Enter five sub :");
    scanf("%d%d%d%d%d",&m,&s,&c,&h,&e);

    t=m+s+c+h+e;
    p=t/5;

    if(p>33)
        printf("you are pass");
    else
        printf("you are failed");

    return 0;
}
