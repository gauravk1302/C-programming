//simple code to enter the data in structure 
#include<stdio.h>
int main()
{
    struct student
    {
        int n ;
        float h;
        char section;
    }s;
    printf("/n enter the data for structure ");
    scanf("%d %f %c",&s.n,&s.h,&s.section);
    printf("%d %f %c",s.n,s.h,s.section );
    
}