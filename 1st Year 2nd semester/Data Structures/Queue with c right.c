#include<stdio.h>
int q[100], i, n, x, f = - 1, r = - 1;
void Insert()
{
    if(r==n-1)
    {
        printf("Underflow\n");
    }
    else
    {
        if(f==-1)
        {
            f=0;
        }
        printf("Enter Element:\n");
        scanf("%d",&x);
        r++;
        q[r]=x;
    }
}
void Delete()
{
    if(f==-1 || f>r)
    {
        printf("Underflow\n");
    }
    else
    {
        printf("Deleted Element\n");
        printf("%d\n",q[f]);
        f++;
    }
}
void Display()
{
    if(f==-1)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        printf("Elements:\n");
        for(i=f; i<=r; i++)
        {
            printf("%d\n",q[i]);
        }
    }
}
int main()
{
    printf("Enter the size of the array [max 100]\n");
    scanf("%d",&n);
    int ch;
    printf("1) Insert element to queue\n");
    printf("2) Delete element from queue\n");
    printf("3) Display all the elements of queue\n");
    printf("4) Exit\n");
    while(ch!=4)
    {
        printf("Enter the choice:\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            Insert();
            break;
        case 2:
            Delete();
            break;
        case 3:
            Display();
            break;
        case 4:
            printf("Exit\n");

            break;
        default:
            printf("Invalid choice\n");
        }
    }
    return 0;
}

