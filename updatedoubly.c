#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head = NULL;
struct node *tail = NULL;
void createnode()
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("memory not allocated");
        exit(0);
    }
    int num;
    scanf("%d", &num);
    ptr->data = num;
    ptr->next = NULL;
    ptr->prev = NULL;
    if (head == NULL)
    {
        head = tail = ptr;
    }
    else
    {
        tail->next = ptr;
        ptr->prev = tail;
        tail = ptr;
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
void update(int i, int r)
{
    struct node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        if (count == i)
        {
            temp->data = r;
            return;
        }
        temp = temp->next;
        count++;
    }
}
int main()
{
    int n;
    int i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        createnode();
    }
    int v, r;
    scanf("%d%d", &v, &r);
    update(v, r);
    display();
    return 0;
}