#include <stdio.h>
#define max 100
int st[max];
int top = -1;
void push()
{
    int n;
    scanf("%d", &n);
    if (top == max - 1)
    {
        printf("stack overflow\n");
        return;
    }
    top++;
    st[top] = n;
}
void pop()
{
    if (top == -1)
    {
        printf("stack underflow! as it is empty\n");
        return;
    }
    printf("%d is deleted element\n", st[top]);
    top--;
}
void peek()
{
    if (top == -1)
    {
        printf("no element in stack\n");
        return;
    }
    printf("\ntop element of stack is: %d\n", st[top]);
}
void display()
{
    int i;
    if (top == -1)
    {
        printf("no element in stack");
        return;
    }
    printf("elements in stack are!\n");
    for (i = top; i >= 0; i--)
    {
        printf("%d ", st[i]);
    }
}
int main()
{
    int n;
    int i;
    printf("enter num of elements to insert in stack:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        push();
    }
    display();
    peek();
    pop();
    display();
    peek();
    pop();
    display();
    return 0;
}