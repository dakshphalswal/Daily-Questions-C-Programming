
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head = NULL, *newNode, *temp;
    struct Node *fast, *slow, *prev;
    int n, value, i;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    // Create linked list
    for(i = 0; i < n; i++)
    {
        newNode = (struct Node*)malloc(sizeof(struct Node));

        printf("Enter data: ");
        scanf("%d", &value);

        newNode->data = value;
        newNode->next = NULL;

        if(head == NULL)
        {
            head = newNode;
        }
        else
        {
            temp->next = newNode;
        }

        temp = newNode;
    }

    int pos;
    printf("Enter N: ");
    scanf("%d", &pos);

    fast = head;
    slow = head;
    prev = NULL;

    // Move fast pointer N steps ahead
    for(i = 0; i < pos; i++)
    {
        if(fast == NULL)
        {
            printf("Invalid N");
            return 0;
        }
        fast = fast->next;
    }

    // If fast is NULL, remove first node
    if(fast == NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
    else
    {
        while(fast != NULL)
        {
            fast = fast->next;
            prev = slow;
            slow = slow->next;
        }

        prev->next = slow->next;
        free(slow);
    }

    // Display updated linked list
    printf("Updated linked list: ");

    temp = head;
    while(temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL");

    return 0;
}
