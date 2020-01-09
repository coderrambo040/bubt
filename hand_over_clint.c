#include<stdio.h>
int main()
{
    printf("Type the amount: ");
    int P,flag=0;
    scanf("%d",&P);
    if(P/1000!=0)
    {
        printf("Thousand tk=%d\n",P/1000);
        P%=1000;
        flag=1;
    }
    if(P/500!=0)
    {
        if(flag!=0)
        printf("Five Hundred tk=%d\n",P/500);
        P%=500;
        flag=1;
    }
    if(P/100!=0)
    {
        if(flag!=0)
        printf("One Hundred tk=%d\n",P/100);
        P%=100;
        flag=1;
    }
    if(P/50!=0)
    {
        if(flag!=0)
        printf("Fifty tk=%d\n",P/50);
        P%=50;
        flag=1;
    }
    if(P/20!=0)
    {
        if(flag!=0)
        printf("Twenty tk=%d\n",P/20);
        P%=20;
        flag=1;
    }
    if(P/10!=0)
    {
        if(flag!=0)
        printf("Ten tk=%d\n",P/10);
        P%=10;
        flag=1;
    }
    if(P/5!=0)
    {
        if(flag!=0)
        printf("Five tk=%d\n",P/5);
        P%=5;
        flag=1;
    }
    if(P/2!=0)
    {
        if(flag!=0)
        printf("Two tk:%d\n",P/2);
        P%=2;
        flag=1;
    }
    if(P/1!=0)
    {
        if(flag!=0)
        printf("On tk=%d\n",P/1);
    }
    return 0;
}
