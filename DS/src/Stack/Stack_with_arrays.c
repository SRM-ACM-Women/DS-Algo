#include <stdio.h>   
int stack[100],i,j,choice=0,n,top=-1;  
void push();  
void pop();  
void display();  

//driver code
int main ()  
{  
      
    printf("Enter the number of elements in the stack ");   
    scanf("%d",&n);  
    while(choice != 3)  
    {  
        printf("Input a number to perform operation\n");  
        printf("\n1.Push into stack \n2.Pop from stack \n3.Display stack");  
        printf("\n Enter your choice \n");        
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            {   
                push();  
                break;  
            }  
            case 2:  
            {  
                pop();  
                break;  
            }  
            case 3:  
            {  
                display();  
                break;  
            }  
            default:  
            {  
                printf("Please Enter valid choice ");  
            }   
        }  
    }
    return 0;
}   
  
  //function definition to push into stack
void push ()  
{  
    int val;      
    if (top == n )   
    printf("\n Stack Overflow");   
    else   
    {  
        printf("Enter the value?");  
        scanf("%d",&val);         
        top = top +1;   
        stack[top] = val;   
    }   
}   
  
  //function definition to pop from stack
void pop ()   
{   
    if(top == -1)   
    printf("Stack Underflow");  
    else  
    top = top -1;   
}   

//function definition to display stack
void display()  
{  
    for (i=top;i>=0;i--)  
    {  
        printf("%d\n",stack[i]);  
    }  
    if(top == -1)   
    {  
        printf("Stack is empty");  
    }  
}  
