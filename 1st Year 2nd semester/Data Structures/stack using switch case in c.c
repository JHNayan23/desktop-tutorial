#include<stdio.h>
int stk[100],choice,n,x,i,top=-1;

void push()
{
    if(top>=n-1)
    {
        printf("STACK is over flow\n");
    }
    else
    {
        printf("Enter a value to be pushed:\n");
        scanf("%d",&x);
        top++;
        stk[top]=x;
    }
}

void pop()
{
    if(top<=-1)
    {
        printf("Stack is under flow\n");
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
        printf("The elements in STACK\n");
        for(i=top; i>=0; i--)
            printf("%d\n",stk[i]);
        printf("Press Next Choice\n");
    }
    else
    {
        printf("The STACK is empty\n");
    }

}

int main()
{
    printf("Enter the size of STACK[MAX=100]\n");
    scanf("%d",&n);
    printf("STACK OPERATIONS USING ARRAY\n");
    printf("-------------------------------\n");
    printf(" 1.PUSH\n 2.POP\n 3.DISPLAY\n 4.EXIT\n");
    while(choice!=4)
    {
        printf("Enter the choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
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
            printf("EXIT POINT\n");
            break;
        }
        default:
        {
            printf("please Enter a valid Choice(1/2/3/4)\n");
        }

        }
    }

    return 0;
}



