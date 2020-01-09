#include<stdio.h>
int main()
{
    int n;

    scanf("%d", &n);

    if(n%4==1){
       printf("Green\n");
    }
    else if(n%4==2){
        printf("Blue\n");
    }
    else if(n%4==3){
        printf("Red\n");
    }
    else if(n%4==0){
        printf("Yellow\n");
    }
    return 0;
}
