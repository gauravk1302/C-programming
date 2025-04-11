/* if the marks obrtained by the student in different subject are input through the keyboard.find out the segregated marks and
 % obtained by the student,assume that the maximum marks obtained by  the student in each subject is 100 ,solve the question using
 loop */
#include <stdio.h>
int main()
{
    int i, marks[5], total = 0;
    float p;
    printf("\n enter the marks");
    for (i = 0; i < 5; i++)
    {
        printf("\n enter the marks %d of the each subject ", i);
        scanf("%d", &marks[i]);
    }
    for (i = 0; i < 5; i++)
    {
        total = total + marks[i];
    }
    p = (total / 5.0);
    printf(" %d \n %f", total, p);
}