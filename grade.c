#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    float per;
    printf("Enter marks of five subject");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    per=(a+b+c+d+e)/5;
    if(per>=90){
        printf("Grade A");
    }
    else if(per>=80&&per<90){
        printf("Grade B");
    }
    else if(per>=60&&per<80){
        printf("Grade C");
    }
    else{
        printf("Grade D");
    }
    return(0);
}