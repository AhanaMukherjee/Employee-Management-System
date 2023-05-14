#include <stdio.h>
struct employee
{
    char name[50];
    char job[50];
    int id;
    int salary;

};
int main()
{
    struct employee emp[10];
    int i;
    printf("Enter the Details\n");
    for (i=0;i<10;i++)
    {
        printf("\nName: ");
        scanf("%s",&emp[i].name);
        printf("\nJob Title: ");
        scanf("%s",&emp[i].job);
        printf("\nId: ");
        scanf("%d",&emp[i].id);
        printf("\nSalary: ");
        scanf("%d",&emp[i].salary);

    }
    printf("\n");
    printf("<--Show All the details-->\n");
    
    for (i=0;i<10;i++)
    {
        printf("%s\t\t%s\t\t%d\t\t%d", emp[i].name,emp[i].job,emp[i].id,emp[i].salary);
        printf("\n");
    }
    return 0;

}