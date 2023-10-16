#include<stdio.h>
    int stack[100],choice,n,top,x,i;
    void push(void);
    void pop(void);
    void display(void);
    int main()
    {
        top = -1;
        printf("\nEnter the size of the Stack :--    ");
        scanf("%d",&n);
        printf("\nSTACK OPERATION USING ARRAY\n\t");
        printf("\n\t 1) PUSH \n\t 2) POP \n\t 3) DISPLAY \n\t 4) EXIT");
        do
        {
            printf("\nEnter the choice :--\t");
            scanf("%d", &choice);
            switch (choice)
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
            case 4:
                {
                    printf("\n\t Exit Point");
                    break;
                    }
            default:
                {
                    printf("\n\t Please enter a valid choice");
                    break;
                    }
            }
        } while (choice != 4);
        return 0;
    }
        
        void push()
        {
            if (top>n-1)
            {
                printf("\n Stack is over flow");
            }
            else 
            {
                printf("\nEnter a value to be pushed\n");
                scanf("%d", &x);
                top++;
                stack[top] = x;
            }
        }
        void pop()
        {
            if (top<=1)
            {
                printf("\n Stack is under flow");
            }
            else 
            {
                printf("The poppped is %d ", stack[top]);
                top--;
            }
        }
        void display()
        {
            if (top>=0)
            {
                printf("\n The elements in stack\n");
                for ( i = top; i >= 0; i--)
                printf("%d      ", stack[i]);
                printf("~ Press the next choice");
            }
            else 
            {
                printf("The stack is empty");
            }
        }