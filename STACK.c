#include <stdio.h>
#define max 10
int top=-1;
int Stack[max];
void push(int *Stack[]);
void pop(int *Stack[]);
void display(int *Stack[]);
int main()
{
    while (1)
    {

        int choices;
        printf("*** ENTER YOUR CHOICE *** \n ___1 for PUSH___\n ___2 for POP___\n ___3 for DISPLAY___\n ___4 for EXIT___\n");

        scanf("%d", &choices);

        switch (choices)
        {
        case 1:
            push(&Stack);
            break;
        case 2:
            pop(&Stack);
            break;
        case 3:
            display(&Stack);
            break;
        case 4:
            printf("Stack exit\n");
            return (0);
            break;
        default:
            printf("Wrong input entered\n");
            return (0);
            break;
        }
    }
}
void push(int *Stack[])
{
    int a;
    if (top == max-1)
    {
        printf("Stack is full\n");
    }
    else
    {
        printf("Enter element to push in Stack\n");
        scanf("%d",&a);
        top = top+1;
        Stack[top]=a;
    }
    
}
void pop(int *Stack[])
{
    if (top == -1)
    {
        printf("Stack is empty!!!\n");
    }
    else
    {
        printf("Deleted element is %d\n",Stack[top]);
        top = top - 1;

    }
    
    
}
void display(int *Stack[])
{
    int i;
        if(top==-1)
        {
        printf("Stack Is Empty!!\n");
        }
        else
        {
            printf("\nStack Is...\n");
            for(i=top;i>=0;--i)
            printf("%d\n",Stack[i]);
        }
}