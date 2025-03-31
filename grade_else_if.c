#include<stdio.h>
int main()
{
    int marks[5],i,t=0;
    float p;
    char g;
    printf ("\n enter the marks");
    for(i=0;i<5;i++)
    {
        scanf("%d",&marks[i]);
    }
    for (i=0;i<5;i++)
    {
        t=t+marks[i];
    }
    p=t/5.0;
    if (p>=90 && p<=100)
    g='A';
    else if(p>=80 && p<90)
    g='B';
    else if(p>=60 && p<80)
    g='c';
    else
    g='d';
    printf("%d %f %c",t,p,g);
    
}