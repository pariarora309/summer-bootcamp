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
        printf("Memory not allocated");
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
void revdisplay()
{
    struct node *temp = tail;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->prev;
    }
}
int main()
{
    int n;
    int i;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        createnode();
    }
    printf("List in original order\n");
    display();
    printf("\nList in reverse order\n");
    revdisplay();
    return 0;
}
