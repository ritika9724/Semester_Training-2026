#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

class Node
{
public:
    int num;
    Node *next;
    Node(int num)
    {
        this->num = num;
        next = NULL;
    }
    Node()
    {
        this->num = 0;
        next = NULL;
    }
};

class LinkedList
{
    Node *start = NULL;

public:
    void insert();
    void atbeg();
    void atend();
    void count();
    void display();
    void before();
    void after();

    void del();
    void delatbeg();
    void delatend();
    void delbefore();
    void delafter();
};

int main()
{
    LinkedList l1;

    int ch1;
    char choice1 = 'y';

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
            l1.insert();
            break;
        case 2:
            l1.display();
            break;
        case 3:
            l1.del();
            break;
        case 4:
            // edit ( );
            break;
        case 5:
            l1.count();
            break;
        case 6:
            //				sort();
            break;
        case 7:
            //				reverse ( );
            break;
        case 8:
            choice1 = 'n';
            break;
        default:
            printf("invalid choice");
        }
    } while (choice1 == 'y');
    return 0;
} // end of main //

void LinkedList::insert()
{
    int ch2;
    char choice2 = 'y';

    do
    {
        printf("\n1. ATBEG");
        printf("\n2. ATEND");
        printf("\n3. BEFORE");
        printf("\n4. AFTER");
        printf("\n5. ATPOSI");
        printf("\n6. EXIT");
        printf("\n\nEnter Your Choice = ");
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
            // atpos();
            break;

        case 6:
            choice2 = 'n';
            break;

        default:
            printf("INVALID CHOICE");
        }

    } while (choice2 == 'y');
} // Last Line

void LinkedList::atbeg()
{
    int val;

    cout << "Enter data: ";
    cin >> val;

    Node *ptr = new Node(val);

    if (start == nullptr)
    {
        start = ptr;
    }
    else
    {
        ptr->next = start;
        start = ptr;
    }

    cout << "Node inserted successfully.\n";
}

void LinkedList::count()
{
    Node *temp = start;
    int cnt = 0;

    while (temp != nullptr)
    {
        cnt++;
        temp = temp->next;
    }

    cout << "Total number of nodes = " << cnt << endl;
}

void LinkedList::atend()
{
    int val;

    cout << "Enter data: ";
    cin >> val;

    Node *ptr = new Node(val);

    if (start == nullptr)
    {
        start = ptr;
    }
    else
    {
        Node *temp = start;

        while (temp->next != nullptr)
        {
            temp = temp->next;
        }

        temp->next = ptr;
    }

    cout << "Node inserted successfully.\n";
}

void LinkedList::display()
{
    Node *temp = start;
    if (start == NULL)
    {
        printf("Empty Linked List");
        return;
    }
    while (temp != NULL)
    {
        printf("%d -> ", temp->num);
        temp = temp->next;
    }
    printf("NULL");
}
void LinkedList::before()
{
    int pos, val;

    cout << "Enter position: ";
    cin >> pos;
    cout << "Enter data";
    cin >> val;

    Node *ptr = new Node(val);

    if (start == nullptr)
    {
        start = ptr;
        return;
    }

    if(start->num == pos)
    {
        ptr->next = start;
        start = ptr;
        return;
    }

    Node *temp = start;
    Node *temp1 = nullptr;

    while (temp!=nullptr && temp->num != pos)
    {
        temp1 = temp;
        temp = temp->next;
    }

    if(temp==nullptr)
        {
        cout << "Node not found";
        delete ptr;
        return;
    }

    ptr->next = temp;
    temp1->next = ptr;

    cout<<"Node inserted successfully";
}
void LinkedList::after()
{
    int pos, val;

    cout << "Enter position: ";
    cin >> pos;
    cout << "Enter data";
    cin >> val;

    Node *ptr = new Node(val);

    if (start == nullptr)
    {
        start = ptr;
        return;
    }
    Node *temp = start;
    
    while (temp!=nullptr && temp->num != pos)
    {
        temp = temp->next;
    }

    if(temp==nullptr){
        cout << "Node not found";
        delete ptr;
        return;
    }
    ptr->next = temp->next;
    temp->next = ptr;

    cout<<"Node inserted successfully";
}

void LinkedList::del()
{
    int ch2;
    char choice2 = 'y';
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
            delatbeg();
            break;
        case 2:
            delatend();
            break;
        case 3:
            delbefore();
            break;
        case 4:
            delafter();
            break;
        case 5:
            //				atpos ( );
            break;
        case 6:
            choice2 = 'n';
            break;
        default:
            printf("INVALID CHOICE");
        }
    } while (choice2 == 'y');
} // Last Line

void LinkedList::delatbeg()
{
    Node *temp = start;

    if (start == nullptr)
    {
        cout << "Linklist is Empty!!";
    }
    else
    {
        start = start->next;
        temp->next = nullptr;
        delete temp;
    }

    cout << "Node deleted successfully.\n";
}

void LinkedList::delatend()
{
    Node *temp = start;
    Node *ptr = start;
    if (start == nullptr)
    {
        printf("List is empty");
    }
    else
    {
        while (temp->next != nullptr)
        {
            ptr = temp;
            temp = temp->next;
        }
        ptr->next = nullptr;
        delete temp;
    }
    cout << "Node deleted successfully.\n";
}


void LinkedList::delbefore()
{
    int val;

    cout << "Enter value: ";
    cin >> val;

    if(start == nullptr)
    {
        cout << "List is empty";
        return;
    }

    if(start->next == nullptr)
    {
        cout << "No node exists before it.";
        return;
    }

    Node *temp = start;
    Node *temp1 = nullptr;
    Node *temp2 = nullptr;

    while(temp != nullptr && temp->next->num != val)
    {
        temp2 = temp1;
        temp1 = temp;
        temp = temp->next;
    }

    if(temp == nullptr)
    {
        cout << "Node not found";
        return;
    }

    if(temp == start)
    {
        cout << "No node before first node.";
        return;
    }

    if(temp1 == start)
    {
        start = temp;
        delete temp1;
    }
    else
    {
        temp2->next = temp;
        delete temp1;
    }

    cout << "Node deleted successfully.";
}

void LinkedList::delafter(){
    int val;

    cout << "Enter value: ";
    cin >> val;

    if(start == nullptr)
    {
        cout << "List is empty";
        return;
    }

    Node *temp = start;

    while(temp!=nullptr && temp->num!=val){
        temp=temp->next;
    }

    if(temp==nullptr){
        cout<<"No found";
        return;
    }

    if(temp->next==nullptr){
        cout << "No node exists after it.";
        return;
    }

    Node *temp1 = temp->next;
    temp->next=temp1->next;
    delete temp1;

    cout<<"Node delete successfully";
}
    
