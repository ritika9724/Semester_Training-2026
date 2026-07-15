#include <stdio.h>

struct Stack
{
    int size;
    int *arr;
    int top;
};

void initStack(struct Stack *s, int capacity)
{
    s->size = capacity;
    s->arr = (int *)malloc(capacity * sizeof(int));
    s->top = -1;
}

void push(struct Stack *s, int x)
{
    if (s->top == s->size - 1)
    {
        printf("Stack Overflow\n");
        return;
    }

    s->arr[++s->top] = x;
    printf("%d pushed into stack.\n", x);
}

void pop(struct Stack *s)
{
    if (s->top == -1)
    {
        printf("Stack Underflow\n");
        return;
    }

    printf("%d popped from stack.\n", s->arr[s->top--]);
}

void peek(struct Stack *s)
{
    if (s->top == -1)
    {
        printf("Stack is Empty\n");
        return;
    }

    printf("Top Element: %d\n", s->arr[s->top]);
}

void isEmpty(struct Stack *s)
{
    if (s->top == -1)
        printf("Stack is Empty\n");
    else
        printf("Stack is Not Empty\n");
}

void isFull(struct Stack *s)
{
    if (s->top == s->size - 1)
        printf("Stack is Full\n");
    else
        printf("Stack is Not Full\n");
}

void freeStack(struct Stack *s)
{
    free(s->arr);
    s->arr = NULL;
    s->size = 0;
    s->top = -1;
}

int main()
{
    int n;
    printf("Enter Stack Size: ");
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("Invalid stack size.\n");
        return 1;
    }

    struct Stack s;
    initStack(&s, n);

    int choice = 0;
    int value = 0;

    do
    {
        printf("\n===== STACK MENU =====\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. isEmpty\n");
        printf("5. isFull\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input.\n");
            while (getchar() != '\n');
            choice = 0;
            continue;
        }

        switch (choice)
        {
            case 1:
                printf("Enter value: ");
                if (scanf("%d", &value) == 1)
                    push(&s, value);
                else
                {
                    printf("Invalid value.\n");
                    while (getchar() != '\n');
                }
                break;

            case 2:
                pop(&s);
                break;

            case 3:
                peek(&s);
                break;

            case 4:
                isEmpty(&s);
                break;

            case 5:
                isFull(&s);
                break;

            case 6:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
                break;
        }
    } while (choice != 6);

    freeStack(&s);
    return 0;
}