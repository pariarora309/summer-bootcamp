#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
void createnode(int d)
{
    struct node *ptr;
    struct node *temp;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("Memory not allocated");
        exit(0);
    }
    int num = d;
    ptr->data = num;
    ptr->next = NULL;
    if (head == NULL)
    {
        head = temp = ptr;
    }
    else
    {
        temp->next = ptr;
        temp = ptr;
    }
}
void display()
{
    struct node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    printf("%d", count);
}
int main()
{
    int data;
    int i;
    for (i = 0; i < 50; i++)
    {
        scanf("%d", &data);
        if (data == -1)
        {
            break;
        }
        else
        {
            createnode(data);
        }
    }
    display();
    return 0;
}