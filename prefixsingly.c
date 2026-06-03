#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
void createnode()
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    int n;
    scanf("%d", &n);
    ptr->data = n;
    ptr->next = NULL;
    if (head == NULL)
    {
        head = temp = ptr;
    }
    else
    {
        ptr->next = head;
        head = ptr;
    }
}

void display()
{
    struct node *temp = head;
    int n;
    while (temp != NULL)
    {
        n = temp->data;
        if (n / 10 == 100)
        {
            temp = temp->next;
        }
        else
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int i;
    for (i = 0; i < n; i++)
    {
        createnode();
    }
    display();
    return 0;
}