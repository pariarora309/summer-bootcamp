#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL, *tail = NULL;

void create()
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));

    scanf("%d", &ptr->data);
    ptr->next = NULL;

    if (head == NULL)
    {
        head = tail = ptr;
    }
    else
    {
        tail->next = ptr;
        tail = ptr;
    }
}

void arrange()
{
    struct node *temp = head;
    struct node *even = NULL, *odd = NULL, *next;

    while (temp != NULL)
    {
        next = temp->next;

        if (temp->data % 2 == 0)
        {
            temp->next = even;
            even = temp;
        }
        else
        {
            temp->next = odd;
            odd = temp;
        }

        temp = next;
    }

    if (even == NULL)
        head = odd;
    else
    {
        head = even;

        temp = even;
        while (temp->next != NULL)
            temp = temp->next;

        temp->next = odd;
    }
}

void display()
{
    struct node *temp = head;

    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main()
{
    int n, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        create();
    }

    arrange();

    display();

    return 0;
}