#include <stdio.h>

typedef struct{
    char name[30];
    int grades;
    long roll;
}Students;

int main()
{
    int num;
    printf("Enter the number of students: ");
    scanf("%d",&num);

    Students stu[num];

    printf("\nEnter the details of:-");
    for(int i=0;i<num;i++)
    {
        printf("\nStudent %d:\n",(i+1));
        printf("Name: ");
        scanf("%s",stu[i].name);
        printf("Roll Number: ");
        scanf("%ld",&stu[i].roll);
        printf("Grades (out of 100): ");
        scanf("%d",&stu[i].grades);
    }

    printf("\nDetails of students scoring above 60%:-\n");
    for(int i=0;i<num;i++)
    {
        if(stu[i].grades>60)
        {
            printf("\nName: %s",stu[i].name);
            printf("\nRoll Number: %ld",stu[i].roll);
            printf("\nGrades: %d",stu[i].grades);
            printf("\n");
        }
    }

    return 0;
}