#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *top = NULL;
void push()
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    int n;
    scanf("%d", &n);
    if (ptr == NULL)
    {
        printf("memory not allocated!");
        exit(0);
    }
    ptr->data = n;
    ptr->next = top;
    top = ptr;
}
void peek()
{
    if (top == NULL)
    {
        printf("no topmost element in stack!");
        exit(0);
    }
    printf("\ntop most element in stack is:%d\n", top->data);
}
void pop()
{
    if (top == NULL)
    {
        printf("stack underflow");
        exit(0);
    }
    struct node *ptr = top;
    printf("deleted element is:%d\n", top->data);
    top = top->next;
    free(ptr);
}
void display()
{
    struct node *temp = top;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int i;
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
    peek();
    return 0;
}