#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *tail;
struct node *head = NULL;
void createll()
{
    struct node *newnode;

    newnode = (struct node *)malloc(sizeof(struct node));
    int n;
    scanf("%d", &n);
    newnode->data = n;
    newnode->next = NULL;
    // cll
    if (head == NULL)
    {
        head = tail = newnode;
        newnode->next = head;
    }
    else
    {
        tail->next = newnode;
        tail = newnode;
        newnode->next = head;
    }
}
void display()
{

    struct node *temp = head;
    do
    {
        int b, sum = 0;
        int n = temp->data;
        while (n > 0)
        {
            b = n % 10;
            sum = sum + b;
            n = n / 10;
        }
        if (sum % 2 == 0)
        {
            temp = temp->next;
        }
        else
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }

    } while (temp != head);
}
int main()
{
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        createll();
    }
    display();
    return 0;
}