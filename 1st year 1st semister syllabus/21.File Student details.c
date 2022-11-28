#include<stdio.h>
int main()
{
    FILE *file;
    char name[20];
    int age,phonenumber,num,i;
    file = fopen("student.txt","a");

    if(file==NULL)
    {
        printf("File does not exist");
    }
    else
    {
        printf("File is opened\n");

        printf("Enter number of students : ");
        scanf("%d",&num);

        for(i=1;i<=num;i++)
        {
            printf("Enter student name : ");
            scanf("%s",&name);

            printf("Enter student Age : ");
            scanf("%d",&age);

            printf("Enter student phone number : ");
            scanf("%d",&phonenumber);

            fprintf(file,"\n%s\t\t%d\t\t%d\n",name,age,phonenumber);


        }

        fclose(file);
    }

    getch();
}
