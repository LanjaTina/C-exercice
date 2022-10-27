#include<math.h>
#include<stdio.h>
#include<conio.h>

int A[100] , S , B[100];
int i,j,n;
void main()
{
        printf("Entrer nbr elmt= ");
        scanf("%d",&n);
        for (i=0;i<n;i=i+1)
        {
                printf("Elmt %d= ",i);
                scanf("%d",&A[i]);
        }
        printf("pour l'autre element\n");
        for (j=0;j<n;j=j+1)
        {
                printf("Elmt %d= ",j);
                scanf("%d",&B[j]);
        }
        S=0;
        i=0;
        j=0;
        for (i=0;i<n;i++)
        {
                for (j=0;j<n;j++)
                {
                        if(A[i]==B[j])
                        {
                        printf("\n%d",A[i]);
                        }

                }

        }

getch ();
} 
