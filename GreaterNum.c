//Greater Number
#include<stdio.h>
int main()
{
    int a,b;

    printf("Enter two Numbers :");
    scanf("%d%d",&a,&b);

    if(a>b)
    {
        printf("%d is a greater number",a);
    }
    else if(a<b)
    {
        printf("%d is a greater number",b);
    }
    else
    {
        printf("Both Number are Equal");
    }
}
