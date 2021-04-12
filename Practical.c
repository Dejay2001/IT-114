#include<stdio.h>

int main()
{
    int x[3][2];
    int id, pin;
    x[0][0]=2001;
    x[0][1]=1234;
    x[1][0]=2002;
    x[1][1]=5678;
    x[2][0]=2003;
    x[2][1]=7890;

    printf("Enter ID Number: ");
    scanf("%d", &id);
    printf("Enter PIN : ");
    scanf("%d", &pin);

    if(id==x[0][0], pin==x[0][1])
    {
    printf("You have successfully logged in");
    printf("\nID# : 2001");
    }else if(id==x[1][0], pin==x[1][1])
    {
    printf("You have successfully logged in ");
    printf("\nID# : 2002");
    }else if(id==x[2][0], pin==x[2][1])
    {
    printf("You have successfully logged in");
    printf("\nID# : 2003");
    }else
    {
    printf("Invalid Pin/User!");
    }

    return 0;
}
