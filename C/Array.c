// WAP a program to perfoem mathematicl using array
#include<stdio.h>
    void main()
    {
        int A[100][100],B[100][100],C[100][100],D[100][100],i,j,k,r,c;
        printf("\n\t Enter thr Rows :-  ");
        scanf("%d",&r);
        printf("\n\t Enter thr Columns :-  ");
        scanf("%d",&c);
        printf("\n\t Enter the First Matrix :-  \n");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                printf(" A[%d][%d] :-  ",i+1,j+1);
                scanf("%d",&A[i][j]);
            }
        }
        printf("\n\t Enter the Second Matrix :-  \n");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                printf(" B[%d][%d] :-  ",i+1,j+1);
                scanf("%d",&B[i][j]);
            }
        }
        printf("\n\t The First Matrix is :-  \n\t\t");
        for(i=0;i<r;i++)
        {
            printf("\n\t");
            for(j=0;j<c;j++)
            {
                printf("\t %d",A[i][j]);
            }
        }
        printf("\n\t The Second Matrix is :-  \n\t\t");
        for(i=0;i<r;i++)
        {
            printf("\n\t");
            for(j=0;j<c;j++)
            {
                printf("\t %d",B[i][j]);
            }
        }
        printf("\n\t The Mathematical Operation   \n\t\t");
        do
        {
            printf("\n\n\n\t\t 1. Addition \n\t\t 2. Subtraction \n\t\t 3. Multiplication \n\t\t 4. Division \n\t\t 5. Exit \n\t\t");
            printf("\n\t Enter your choice :-  ");
            scanf("%d",&i);
            switch (i)
            {
            case 1:
                printf("\n\t The Addition of Matrix is :-  \n\t\t");
                for(i=0;i<r;i++)
                {
                    printf("\n\t");
                    for(j=0;j<c;j++)
                    {
                        C[i][j]=A[i][j]+B[i][j];
                        printf("\t %d",C[i][j]);
                    }
                }
                break;
            case 2:
                printf("\n\t The Subtraction of Matrix is :-  \n\t\t");
                for(i=0;i<r;i++)
                {
                    printf("\n\t");
                    for(j=0;j<c;j++)
                    {
                        C[i][j]=A[i][j]-B[i][j];
                        printf("\t %d",C[i][j]);
                    }
                }
                break;
            case 3:
                printf("\n\t The Multiplication of Matrix is :-  \n\t\t");
                for(i=0; i<r; i++)
                {
                    printf("\n\t");
                    for(j=0; j<c; j++)
                    {
                        C[i][j] = 0;
                        for(int k=0; k<r; k++)
                        {
                            C[i][j] += A[i][k] * B[k][j];
                        }
                        printf("\t %d", C[i][j]);
                    }
                }
                break;
            case 4: 
                printf("\n\t The Division of Matrix is :-  \n\t\t");
                for(i=0;i<r;i++)
                {
                    printf("\n\t");
                    for(j=0;j<c;j++)
                    {
                        C[i][j]=A[i][j]/B[i][j];
                        printf("\t %d",C[i][j]);
                    }
                }
                break;
            case 5:
                printf("\n\t Thank You for using this program \n\t\t");
                break;
            }
        } while (i!=5);
    }