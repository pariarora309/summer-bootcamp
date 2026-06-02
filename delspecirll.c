#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
struct node *tail = NULL;
void createnode()
{
    struct node *ptr;
    struct node *temp;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("memory not allocated");
        exit(0);
    }
    int num;
    scanf("%d", &num);
    ptr->data = num;
    if (head == NULL)
    {
        head = tail = ptr;
        ptr->next = head;
    }
    else
    {
        tail->next = ptr;
        ptr->next = head;
        tail = ptr;
    }
}
void display()
{
    struct node *temp = head;
    do
    {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != head);
}
void delete_at_pos(int pos)
{
    struct node *temp = head;
    struct node *ptr;
    int i;
    if (pos == 0)
    {
        ptr = head;
        head = head->next;
        tail->next = head;
        free(ptr);
        return;
    }
    for (i = 0; i < pos - 1; i++)
    {
        temp = temp->next;
    }

    ptr = temp->next;

    temp->next = ptr->next;

    if (ptr == tail)
    {
        tail = temp;
    }

    free(ptr);
}
int main()
{
    int n, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        createnode();
    }
    int pos;
    scanf("%d", &pos);
    delete_at_pos(pos);
    display();

    return 0;
}