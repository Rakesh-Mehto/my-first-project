#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int stack[MAX];
int top = -1;

void Push();
void Pop();
void Display();

int main()
{
    int choice;
    do{
        printf("1.Push\n2.Pop\n3.Display\4.Exit\n");
        printf("Enter your chioce:");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1: Push(); break;
            case 2: Pop(); break;
            case 3: Display(); break;
            case 4: Exit(); break;
        }
    } while (choice != 4);
    getch();
}
void Push()
{
    int n;
    if(top == MAX-1){
    printf("\nStack is overflow !!");
    } else{
        printf("\nEnter an element:");
        scanf("%d",&n);
        top++;
        stack[top] = n;

    }
}
void Pop()
{
    int n;
    if (top == -1){
    printf("\nStack is empty !!");
    } else{
        n = stack[top];
        top--;
        printf("\nPoped element is %d",n); 
    }
}
void Display()
{
    int i;
    if(top == -1){
    printf("\n Stack is empty !!");
    } else{
        printf("\nElement of stack:");
        for(i = top; i >= 0; i--)
        printf("\n%d",stack[i]);

    }
}
