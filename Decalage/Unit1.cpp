#include<math.h>
#include<stdio.h>
#include<conio.h>

int taille,i,A[100],temp,n;
void main ()
{
printf("entrer taille d'un tableau:");
scanf("%d",&taille);
for (i=0 ; i<taille ; i++)
{
        printf("entrer un valeur= ");
        scanf ("%d",&A[i]);


}
printf ("entrer le nombre de decalage= ");
scanf("%d",&n);
for (i = 0 ; i<taille ; i++)
{
        temp = A[i];
        A[i]=A[-n+1];
        A[-n+1] = temp;
}
for (i = 0 ; i<taille ; i++)
{
printf("%d \n" , A[i]);
}
getch();
}
