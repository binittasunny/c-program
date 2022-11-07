#include<stdio.h>

int top=-1;
int ar[5];

void add();
void delete();

void main()
{
    int choice;
    
    while(1)
    {
        printf("\nEnter the choice:");
        printf("\n1.Add\n2.Delete\n3.Exit\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1: add();
            break;
        case 2: delete();
            break;
        case 3: exit(0);
            break;
        
        default:
            printf("Please select correct choice");
            break;
        }
    }
}

void add(){
    if(top == 5){
        printf("Array is full\n");
    }
    else{
        top++;
        printf("Enter the value: ");
        scanf("%d",&ar[top]);
    }
}

void delete(){
    if(top==-1){
        printf("Array is empty");
    }
    else{
        top--;
        printf("One element is removed");
    }
}