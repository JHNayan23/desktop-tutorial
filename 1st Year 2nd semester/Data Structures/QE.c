#include<stdio.h>
int qe[100],choice,n,x,i,top=-1;

void push()
{
    if(top>=n-1)
    {
        printf("The Queue is overflow\n");
    }
    else
    {
        printf("Enter the value to be push\n");
        scanf("%d",&x);
        top++;
        qe[top]=x;
    }
}

void pop()
{
    if(top<=-1)
    {
        printf("The Queue is underflow\n");
    }
    else
    {
        top--;
    }
}

void display()
{
    if(top>=0)
    {
        printf("The element in Queue\n");
        for(i=0; i<=top; i++)
            printf("%d", qe[i]);
        printf("Press the next choice\n");
    }
    else
    {
        printf("The queue is empty\n");
    }
}

int main()
{
    printf("Enter the size of Queue\n");
    scanf("%d",&n);
    printf("Queue operations using array\n");
    printf("------------------------------");
    printf("1.Push\n 2.Pop\n 3.Display\n 4.Exit\n");
    while(choice !=4)
    {
        printf("Enter the choice\n");
        scanf("%d",choice);
        switch(choice)

    case 1:
        {
            push();
            break;
        }

        case 2:
    {
        pop();
        break;
        }
    case 3:
        {
            display();
            break;
        }
    case 4:
        {
            printf("Exit point\n");
            break;
        }
    default:
        {
            printf("Enter the valid choice:\n");
        }
    }
    return 0;
}

