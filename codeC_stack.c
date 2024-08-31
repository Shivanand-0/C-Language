#include <stdio.h>
#include<stdlib.h>

int max=10;
int stack[10];
int top=-1;

void push();
void pop();
void peek();
void display();
void search();

int main(){
    int select;
    int again;
    do{
    system("cls");
    printf("\n**Choose Operation ** \n\n 1.Push in stack \n 2. Pop in stack \n 3. Peek element of stack \n 4.Display all element of stack\n 5. Search the given element in stack");
    printf("\n\nEnter the index of choice:");
    scanf("%d",&select);
    system("cls");
    switch(select){
        case 1:
            push();
            break;
        case 2:
            pop();
            break; 
        case 3:
            peek();
            break;
        case 4:
            display();
            break;         
        case 5:
            search();
            break;
        default:
            printf("invalid choice\n");
    } 
   
    printf("\nPress 1: to perform again\nPress any number: To exit \n\nEnter: ");
    scanf("%d",&again);
     system("cls");
    }while(again==1);
    return 0;
}

void push(){
    if(top==max-1){
        printf("Stack is full\n");
        return;
    }
    int element;
    printf("Enter Element:");
    scanf("%d",&element);
    top++;
    stack[top]=element;
    printf("\nSuccessfully element pushed\n");
}
void pop(){
    if(top==-1){
        printf("\nStack is empty\n");
        return;
    }
    int element;
    element=stack[top];
    top--;
    printf("\nPoped element is: %d \n",element);
}
void peek(){
    if(top==-1){
        printf("\nStack is empty\n");
        return;
    }
    printf("\nPeek element is: %d \n",stack[top]);
}
void display(){
    if(top==-1){
        printf("\nStack is empty");
        return;
    }
    printf("\nElement of stack:[");
    for(int i=top;i>=0;i--){
        printf("%d,",stack[i]);
    }
     printf("]\n");
}
void search(){
    int target;
    printf("\nEnter target value:");
    scanf("%d",&target);
    for(int i=top;i>=0;i--){
       if(stack[i]==target){
         printf("\nElement found at index: %d \n",i);
         return;
        }
    }
     printf("\nElement not found\n") ;
}
