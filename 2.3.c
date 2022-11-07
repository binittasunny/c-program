#include <stdio.h>
 
#define MAX 5
 
void insert();
void dele();
void display();
int array[MAX];
int last = - 1;
int front = - 1;
main()
{
    int choice;
    while(1)
    {
        printf("1.Insert element\n");
        printf("2.Delete element\n");
        printf("3.Display all elements\n");
        printf("4.Quit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            insert();
            break;
            case 2:
            delet();
            break;
            case 3:
            display();
            break;
            case 4:
            default:
            printf("Wrong choice \n");
        }
    }
}

void insert()
{
    int value;
    if (last == MAX - 1)
    printf("Array is full \n");
    else
    {
        if (front == - 1)
        front = 0;
        printf("Insert the element  : ");
        scanf("%d", &value);
        last = last + 1;
        array[last] = value;
    }
}
 
void dele()
{
        printf("Element deleted  is : %d\n",array[front]);
        front = front + 1;
    }
 
void display()
{
    int i;
        printf("Elements are : \n");
        for (i = front; i <= last; i++)
            printf("%d ",array[i]);
        printf("\n");
    }