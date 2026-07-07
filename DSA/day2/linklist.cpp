// #include <iostream>
// using namespace std;

// class node
// {
// public:
//     int num;
//     node *next;

//     node(int num)
//     {
//         this->num = num;
//         next = nullptr;
//     }

//     node()
//     {
//         this->num = 0;
//         next = nullptr;
//     }
// };

// class linklist
// {
//     node *start = nullptr;

// public:
//     void insert()
//     {
//         int ch2;
//         char choice2;
//         do
//         {
//             printf("\n 1. ATBEG ");
//             printf("\n 2. ATEND");
//             printf("\n 3. BEFORE");
//             printf("\n 4. AFTER ");
//             printf("\n 5. ATPOSI");
//             printf("\n 6. EXIT      ");
//             printf("\n\n Enter Your Choice = ");
//             scanf("%d", &ch2);
//             switch (ch2)
//             {
//             case 1:
//                 atbeg();
//                 break;
//             case 2:
//                 atend();
//                 break;
//             case 3:
//                 before();
//                 break;
//             case 4:
//                 //				after ( );
//                 break;
//             case 5:
//                 //				atpos ( );
//                 break;
//             case 6:
//                 choice2 = 'n';
//                 break;
//             default:
//                 printf("INVALID CHOICE");
//             }
//         } while (choice2 == 'y');
//     } // Last Line

//     // insert at begining

//     void atbeg()
//     {

//         // step : create a node

//         int val;
//         cout << "enter data of node : ";
//         cin >> val;
//         node *ptr = new node(val);

//         // step 2 :
//         if (start == nullptr)
//         {
//             start = ptr;
//         }
//         else
//         {
//             ptr->next = start;
//             start = ptr;
//         }
//         printf("node inserted");
//     }

//     // insert at end

//     void atend()
//     {
//         node *temp = start;
//         // step 1
//         int val;
//         cout << "enter data of node : ";
//         cin >> val;
//         node *ptr = new node(val);

//         ptr->next = nullptr;

//         // step 2

//         if (start == nullptr)
//         {
//             start = ptr;
//         }
//         else
//         {
//             // step 3
//             while (temp->next != nullptr)
//             {
//                 temp = temp->next;
//             }
//             temp->next = ptr; // step 4
//         }
//     }

//     // before node

//     void before()
//     {
//         int val, val2;
//         cout << "enter data of new node : ";
//         cin >> val;
//         cout << "Enter value before the node : ";
//         cin >> val2;

//         node *ptr = new node(val);


//         // step 2

//         if (start == nullptr)
//         {
//             start = ptr;
//         }

//         node *temp = start;
//         node *temp1 = nullptr;

//             // step 3
//             while (temp->num != val2)
//             {
//                 temp1 = temp;
//                 temp = temp->next;
//             }

//             ptr->next = temp;
//             temp->next = ptr;
        
//             }
         
        
    
//                                             // Edit node
//     void edit()
//     {
//         if (start == nullptr)
//         {
//             cout << "Linked List is Empty";
//             return;
//         }

//         int oldValue, newValue;

//         cout << "Enter value to edit : ";
//         cin >> oldValue;

//         node *temp = start;

//         while (temp != nullptr)
//         {
//             if (temp->num == oldValue)
//             {
//                 cout << "Enter new value : ";
//                 cin >> newValue;

//                 temp->num = newValue;

//                 cout << "Node Updated Successfully";
//                 return;
//             }

//             temp = temp->next;
//         }

//         cout << "Node not found";
//     }

//     // // count node

//     // void count()
//     // {
//     //     node *temp = start;
//     //     int count = 0;
//     //     // step 3
//     //     while (temp != nullptr)
//     //     {
//     //         count++;
//     //         temp = temp->next;
//     //     }
//     //     cout << count;
//     // }

//     void display()
//     {
//         if (start == nullptr)
//         {
//             cout << "Empty linklist\n";
//             return;
//         }
//         node *temp = start;
//         while (temp != nullptr)
//         {
//             printf("%d -> ", temp->num);
//             temp = temp->next;
//         }
//         printf("NULL");
//     }
// };

// int main()
// {
//     linklist l1;
//     int ch1;
//     char choice1 = 'y';
//     // node *start = nullptr;
//     system("cls"); // clrscr();
//     do
//     {
//         printf("\n LINKED LIST PROJECT \n");
//         printf("\n 1. INSERT     ");
//         printf("\n 2. DISPLAY     ");
//         printf("\n 3. DELETE      ");
//         printf("\n 4. EDIT        ");
//         printf("\n 5. COUNT NODES ");
//         printf("\n 6. SORTING      ");
//         printf("\n 7. REVERSE     ");
//         printf("\n 8. EXIT        ");
//         printf("\n\n Enter Your Choice = ");
//         scanf("%d", &ch1);
//         switch (ch1)
//         {
//         case 1:
//             l1.insert();
//             break;
//         case 2:
//             l1.display();
//             break;
//         case 3:
//             //				del ( );
//             break;
//         case 4:
//             // l1.edit();
//             break;
//         case 5:
//             // l1.count();
//             break;
//         case 6:
//             //				sort();
//             break;
//         case 7:
//             //				reverse ( );
//             break;
//         case 8:
//             choice1 = 'n';
//             break;
//         default:
//             printf("invalid choice");
//         }
//     } while (choice1 == 'y');
//     return 0;
// }

// // linklist l1;
// // *ptr = new linklist();       // ptr->atbeg();           => C++
// // ptr = new linklist();        // ptr.atbeg();            => JAVA







#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

class Node{
    public:
    int num;
    Node* next;
    Node(int num){
        this->num=num;
        next=NULL;
    }
     Node(){
        this->num=0;
        next=NULL;
    }
};

class LinkedList{
    Node* start=NULL;
    public:
  void insert ();
  void atbeg();
  void atend();
  void count();
  void display();
  void before();
  void after();

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
			//del();
			break;
		case 4:
			//edit ( );
			break;
		case 5:
			l1.count ( );
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

void del()
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
			// atbeg ( );
			break;
		case 2:
			//				atend ( );
			break;
		case 3:
			//				before ( );
			break;
		case 4:
			//				after ( );
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
void LinkedList::before(){
 int pos,val;

    cout << "Enter position: ";
    cin >> pos;
    cout<<"Enter data";
    cin>>val;

    Node *ptr = new Node(val);

    if (start == nullptr)
    {
        start = ptr;
    }
    Node *temp=start;
    Node *temp1=NULL;
    while(temp->num!=pos){
        temp1=temp;
        temp=temp->next;
    }
    ptr->next=temp;
    temp1->next=ptr;
}
void LinkedList::after(){
 int pos,val;

    cout << "Enter position: ";
    cin >> pos;
    cout<<"Enter data";
    cin>>val;

    Node *ptr = new Node(val);

    if (start == nullptr)
    {
        start = ptr;
    }
    Node *temp=start;
    Node *temp1=start;
    while(temp->num!=pos){
        temp=temp->next;
         temp1=temp->next;
    }
    ptr->next=temp1;
    temp->next=ptr;
}