#include<stdio.h>
    void main()
    {
        int pass, amt;
        printf("\n\n\t\t\t****INSERT THE CARD HERE****\n\n");
        printf("\t\tENTER PIN =   ");
        scanf("%d",&pass);
        if (pass==1234)
        {    
            printf("\n\t WITHDRWAL AMOUNT :-   ");
            scanf("%d",&amt);
            if (amt<=50000)
            {
                printf("\n\t\t WITHDRWAL TRANSACTION ~~  ''%d''",amt);
            }
            else
                printf("\n\t\tGAREEBOOOO\n\t\t\t YOUR LIMIT HAS BEEN EXCEED\n");
        }
        else
            printf("\n\n\t\tWrong Password");
    }