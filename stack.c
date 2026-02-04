#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int stack[MAX];
int top= -1;
int main()
{
    int choice;
    do{
        printf("1.Push\n2.Pop\n3.Display\4.Exit\n");
        printf("Enter your chioce:");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1: push(); break;
            case 2: Display(); break;
            case 3: Pop(); break;
            case 4: Exit(); break;
        }
    } while (choice!=4);
    getch();
}
push()
{
    int n;
    if(top == MAX-1)
    printf("\nStack is overflow !!");
    else{
        printf("\n Enter an element:");
        scanf("%d",&n);
        top++;
        stack[top]=n;

    }
}
pop()
{
    int n;
    if (top == -1)
    printf("\nStack is empty !!");
    else{
        n=stack[top];
        top--;
        printf("\nPoped element is %d",n); 
    }
}
display()
{
    int i;
    if(top == -1)
    printf("\n Stack is empty !!");
    else{
        printf("\nElement of stack:");
        for(i=top; i>=0; i--)
        printf("\n%d",stack[i]);

    }
}
tem()
{
    int i;
    for(i=0; i<=5; i++)
    {
        printf("\n%d",stack[i]);
    }
}
}