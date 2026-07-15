#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

class Node{
public:
    int num;
    Node *next;

    Node(){
        this->num = 0;
        next = nullptr;
    }

    Node(int num){
        this->num = num;
        next = nullptr;
    }
};

class LinkedList{
    Node *start = nullptr;

public:
    void push();
    void pop();
};


int main(){
    LinkedList L1;

    int ch;
    char choice1 = 'y';

    system("cls");
    do
    {
        printf("\n LINKED LIST PROJECT \n");
        printf("\n 1. PUSH");
        printf("\n 2. POP");
        printf("\n 3. isEmpty");
        printf("\n 4. EXIT");
        printf("\n\n Enter Your Choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            L1.push();
            break;

        case 2:
            L1.pop();
            break;

        case 3:
            // L1.isEmpty();
            break;

        case 4:
            choice1 = 'n';
            break;

        default:
            printf("Invalid Choice");
        }

    } while (choice1 == 'y');

    return 0;
}


void LinkedList::push()
{
    int val;

    printf("Enter data of node: ");
    scanf("%d", &val);

    Node *ptr = new Node(val);

    if (start == nullptr)
    {
        ptr->next = ptr;
        start = ptr;
    }
    else
    {
        Node *last = start;
        while (last->next != start)
            last = last->next;

        ptr->next = start;
        last->next = ptr;
        start = ptr;
    }
}


void LinkedList::pop()
{
    if (start == nullptr)
    {
        printf("Linked List is Empty.");
        return;
    }

    if (start->next == start)
    {
        delete start;
        start = nullptr;
        printf("Node deleted from beginning.");
        return;
    }

    Node *last = start;
    while (last->next != start)
        last = last->next;

    Node *temp = start;
    start = start->next;
    last->next = start;
    delete temp;
    printf("Node deleted from beginning.");
}