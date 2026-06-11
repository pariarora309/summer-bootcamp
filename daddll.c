#include <stdio.h>
#include <stdlib.h>
struct node *top = NULL;
struct node
{
    int data;
    struct node *next;
};
void push()
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("memory not allocated");
        exit(0);
    }
    int n;
    scanf("%d", &n);
    ptr->data = n;
    ptr->next = top;
    top = ptr;
}
void pop()
{
    struct node *ptr = top;
    if (top == NULL)
    {
        printf("no element can be deleted!");
        exit(0);
    }
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
void peek()
{
    if (top == NULL)
    {
        printf("no topmost element in stack!");
        exit(0);
    }
    printf("\ntop element in stack is:%d\n", top->data);
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
    return 0;
}