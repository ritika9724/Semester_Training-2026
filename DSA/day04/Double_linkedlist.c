#include <stdio.h>
#include <malloc.h> // #include <alloc.h>
#include <stdlib.h>

struct Node
{
    struct Node *prev;
    int num;
    struct Node *next;
};

struct Node *start = NULL;

void insert();
void display();
void del();
void edit();
void count();
void sort();
void reverse();
void exit();
void atbeg();
void atbeg1();
void atend();
void atend1();
void before();
void before1();
void after();
void after1();
void atpos();
void atpos1();

int main()
{
    int ch1;
    char choice1 = 'y';
    start = NULL;
    system("cls"); // clrscr();
    do
    {
        printf("\n LINKED LIST PROJECT \n");
        printf("\n 1. INSERT     ");
        printf("\n 2. DISPLAY     ");
        printf("\n 3. DELETE      ");
        printf("\n 4. EDIT        ");
        printf("\n 5. COUNT NODES ");
        printf("\n 6. SORTING      ");
        printf("\n 7. REVERSE     ");
        printf("\n 8. EXIT        ");
        printf("\n\n Enter Your Choice = ");
        scanf("%d", &ch1);
        switch (ch1)
        {
        case 1:
            insert();
            break;
        case 2:
            display();
            break;
        case 3:
            del();
            break;
        case 4:
            edit();
            break;
        case 5:
            count();
            break;
        case 6:
            sort();
            break;
        case 7:
            reverse();
            break;
        case 8:
            choice1 = 'n';
            break;
        default:
            printf("invalid choice");
        }
    } while (choice1 == 'y');
    return 0;
}

void insert()
{
    int ch2;
    char choice2='y';
    do
    {
        printf("\n 1. ATBEG ");
        printf("\n 2. ATEND");
        printf("\n 3. BEFORE");
        printf("\n 4. AFTER ");
        printf("\n 5. ATPOSI");
        printf("\n 6. EXIT      ");
        printf("\n\n Enter Your Choice = ");
        scanf("%d", &ch2);
        switch (ch2)
        {
        case 1:
            atbeg();
            break;
        case 2:
            atend();
            break;
        case 3:
            before();
            break;
        case 4:
            after();
            break;
        case 5:
            atpos();
            break;
        case 6:
            choice2 = 'n';
            break;
        default:
            printf("INVALID CHOICE");
        }
    } while (choice2 == 'y');
}

void del()
{
    int ch2;
    char choice2='y';
    do
    {
        printf("\n 1. ATBEG ");
        printf("\n 2. ATEND");
        printf("\n 3. BEFORE");
        printf("\n 4. AFTER ");
        printf("\n 5. ATPOSI");
        printf("\n 6. EXIT      ");
        printf("\n\n Enter Your Choice = ");
        scanf("%d", &ch2);
        switch (ch2)
        {
        case 1:
            atbeg1();
            break;
        case 2:
            atend1();
            break;
        case 3:
            before1();
            break;
        case 4:
            after1();
            break;
        case 5:
            atpos1();
            break;
        case 6:
            choice2 = 'n';
            break;
        default:
            printf("INVALID CHOICE");
        }
    } while (choice2 == 'y');
}
                        // insert at begining

void atbeg()
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    if(ptr == NULL) {
        printf("Memory Allocation Failed.");
        return;
    }

    printf("Enter data of node: ");
    scanf("%d", &ptr->num);
    ptr->next = NULL;
    ptr->prev = NULL;

    if (start == NULL)
    {
        start = ptr;
    }
    else
    {
        ptr->next = start;
        start->prev = ptr;
        start = ptr;
    }
}

void display()
{
    struct Node *temp = start;
    if (start == NULL)
    {
        printf("Empty Linked List.");
        return;
    }
    while (temp != NULL)
    {
        printf("%d <-> ", temp->num);
        temp = temp->next;
    }
    printf("NULL");
}

                            // insert at ending 

void atend()
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));

    if(ptr==NULL){
        printf("Memory Allocation Failed.");
        return;
    }

    printf("Enter data of node: ");
    scanf("%d", &ptr->num);
    ptr->next = NULL;
    ptr->prev = NULL;

    if (start == NULL)
    {
        start = ptr;
        return;
    }

    struct Node *temp = start;
    
    while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = ptr;
        ptr->prev = temp;
    }

                                // insert before

void before()
{
    int pos, val;

    // Empty list
    if (start == NULL)
    {
        printf("List is Empty.");
        return;
    }

    printf("Enter value : ");
    scanf("%d", &val);

    printf("Insert before : ");
    scanf("%d", &pos);

    struct Node *temp = start;
    while (temp != NULL && temp->num != pos)
    {
        temp = temp->next;
    }

     if (temp == NULL)
    {
        printf("Value not found.\n");
        return;
    }

    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));

    if(ptr ==NULL){
        printf("Memory Allocation Failed.");
    }
    ptr->num = val;
    ptr->prev = temp->prev;
    ptr->next = temp;

    if(temp->prev!=NULL){
        temp->prev->next=ptr;
    }
    else{
        start = ptr;
    }
    temp->prev = ptr;

    printf("Node inserted successfully.\n");
}
                                    // insert after

void after()
{
    int pos, val;

    if(start == NULL){
        printf("List is empty.");
        return;
    }

    printf("Enter value : ");
    scanf("%d", &val);

    printf("Insert after : ");
    scanf("%d", &pos);

    struct Node *temp = start;

    while(temp!=NULL && temp->num!=pos){
        temp = temp->next;
    }

    if(temp == NULL){
        printf("Value Not FOund");
        return;
    }

    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    
   if(ptr ==NULL){
     printf("Memory Allocation Failed.");
     return;
   } 
   ptr->num = val;
   ptr->next = temp->next;
   ptr->prev = temp;

   if(temp->next!=NULL){
    temp->next->prev=ptr;
   }
   temp->next=ptr;
}
                            // insert at position

void atpos()
{
    int val, pos;

    printf("Enter value: ");
    scanf("%d", &val);

    printf("Enter position: ");
    scanf("%d", &pos);

    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));

if (ptr == NULL)
{
    printf("Memory Allocation Failed.");
    return;
}
    ptr->num = val;

    if (pos == 1)
    {
        ptr->prev = NULL;
        ptr->next = start;

        if (start != NULL)
            start->prev = ptr;

        start = ptr;
        return;
    }

    struct Node *temp = start;

    for (int i = 1; i < pos - 1 && temp != NULL; i++)
        temp = temp->next;

    if (temp == NULL)
    {
        printf("Invalid Position.");
        free(ptr);
        return;
    }

    ptr->next = temp->next;
    ptr->prev = temp;

    if (temp->next != NULL)
        temp->next->prev = ptr;

    temp->next = ptr;
}

                                // delete at begining


void atbeg1()
{
    if (start == NULL)
    {
        printf("List is Empty\n");
        return;
    }

    struct Node *temp = start;

    start = start->next;

    if (start != NULL)
    {
        start->prev = NULL;
    }

    free(temp);

    printf("Node deleted successfully\n");
}
                                // delete at ending

void atend1()
{
    if (start == NULL)
    {
        printf("List is Empty\n");
        return;
    }

    if (start->next == NULL)
    {
        free(start);
        start = NULL;
        printf("Node deleted successfully");
        return;
    }
        struct Node *temp = start;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->prev->next = NULL;
    free(temp);

    printf("Node deleted successfully\n");
}

                            // delete before


void before1()
{
    int pos;
    if(start==NULL || start->next == NULL){
        printf("Not enough nodes.");
        return;
    }

    printf("Delete before : ");
    scanf("%d", &pos);

    struct Node *temp = start;
     while (temp != NULL && temp->num != pos)
    {
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Value not found.");
        return;
    }

    // delete first node

    if (temp->prev == NULL)
    {
        printf("No node exists");
        return;
    }

struct Node *ptr = temp->prev;

    if(ptr->prev == NULL)
    {
        start = temp;
        temp->prev = NULL;
    }
    else{
        ptr->prev->next = temp;
        temp->prev = ptr->prev;
     }
     free(ptr);
     printf("Node deleted successfully.\n");
}

                        // delete after

void after1()
{
    int pos;

    if(start == NULL){
        printf("List is empty.");
        return;
    }

    printf("Delete after : ");
    scanf("%d", &pos);

    struct Node *temp = start;

    while (temp != NULL && temp->num != pos)
    {
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Value not found.\n");
        return;
    }

    if(temp->next == NULL){
        printf("No node exist.");
        return;
    }

    struct Node *ptr = temp->next;
    temp->next = ptr->next;

    if(ptr->next != NULL)
    {
      ptr->next->prev = temp;
    }
    free(ptr);
     printf("Node deleted successfully.\n");
}

                                    // delete at pos

void atpos1()
{
    int pos;

    printf("Enter position: ");
    scanf("%d", &pos);

    if (pos < 1)
    {
        printf("Invalid Position.");
        return;
    }

    if (start == NULL)
    {
        printf("Linked List is Empty.");
        return;
    }

    if (pos == 1)
    {
        atbeg1();
        return;
    }

    struct Node *temp = start;

    for (int i = 1; i < pos && temp != NULL; i++)
    {
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Invalid Position.");
        return;
    }

    temp->prev->next = temp->next;

    if (temp->next != NULL)
        temp->next->prev = temp->prev;

    free(temp);

    printf("Node deleted from the specified position.");
}

                            // count node 

void count()
{
    int count = 0;
    struct Node *temp = start;
    if (start == NULL)
    {
        printf("Empty Linked List.");
        return;
    }
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    printf("Count: %d", count);
}
                                // edit node

void edit()
{
    int current_value, new_value;

    if (start == NULL)
    {
        printf("Linked List is Empty.");
        return;
    }

    printf("Enter the value to edit: ");
    scanf("%d", &current_value);

    printf("Enter the new value: ");
    scanf("%d", &new_value);

    struct Node *temp = start;

    while (temp != NULL)
    {
        if (temp->num == current_value)
        {
            temp->num = new_value;
            printf("Node updated successfully.");
            return;
        }

        temp = temp->next;
    }

    printf("Value not found in the linked list.");
}
                                    // sorting

void sort()
{
    if (start == NULL || start->next == NULL)
    {
        printf("Nothing to Sort.");
        return;
    }

    struct Node *i, *j;

    for (i = start; i->next != NULL; i = i->next)
    {
        for (j = i->next; j != NULL; j = j->next)
        {
            if (i->num > j->num)
            {
                int temp = i->num;
                i->num = j->num;
                j->num = temp;
            }
        }
    }

    printf("Linked List Sorted Successfully.");
}
                                // reverse

void reverse()
{
    if (start == NULL)
    {
        printf("Linked List is Empty.");
        return;
    }

    struct Node *current = start;
    struct Node *temp = NULL;

    while (current != NULL)
    {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;

        current = current->prev;
    }

    if (temp != NULL)
        start = temp->prev;

    printf("Linked List Reversed Successfully.");
}
