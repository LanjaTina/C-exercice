#include<math.h>
#include<stdio.h>
#include<conio.h>
float A[100][100], B[100][100],C[100][100],somme;
int a,la,ca,cb,lb,lc,cc,k,i,j,l,c;
void main()
{
      printf("Somme et produit des MATRICE\n");
      printf("Si produit des Matrice tapez 1\n Si somme des Matrice tapez 2\n"
      "Nombre=");
      scanf("%d",&a);
   switch(a)
   {
       case 1:
       printf("nombre de ligneA= ");
       scanf("%d",&la);
       printf("nombre de colonneA= ");
       scanf("%d",&ca);

           for(i=0;i<la;i++)
             {
                 for(j=0;j<ca;j++)
                 {
                      printf("A[%d][%d]= ",i,j);
                      scanf("%f",&A[i][j]);
                 }
             }

        printf("nombre de ligneB= ");
        scanf("%d",&lb);
        printf("nombre de colonneB= ");
        scanf("%d",&cb);


           for(i=0;i<lb;i++)
             {
                 for(j=0;j<cb;j++)
                 {
                      printf("B[%d][%d]= ",i,j);
                      scanf("%f",&B[i][j]);
                 }
             }

                if(ca==lb)
                {
                     for(i=0;i<la;i=i+1)
                     {
                          for(j=0;j<ca;j=j+1)
                          {
                               C[i][j]=0;
                                   for(k=0;k<ca;k=k+1)
                                   {
                                        C[i][j]=C[i][j]+A[i][k]*B[k][j];
                                   }
                          }
                     }
                          for(i=0;i<la;i=i+1)
                          {
                                for(j=0;j<cb;j=j+1)
                                {
                                    printf("C[%d][%d]=%3.0f\n ", i,j,C[i][j]);
                                }
                          }
                     }
                else
                {
                     printf("error");
                }
   }
   switch(a)
   {
         case 2:
         printf ("Entrer nbr ligne = ");
         scanf("%d",&l);
         printf ("Entrer nbr colonne = ");
         scanf("%d",&c);
         for (i=0;i<l ; i=i+1)
         {
            for(j=0;j<c ; j=j+1)
            {
               printf ("A[%d][%d]=",j,i);
               scanf ("%f",&A[i][j]);
            }

         }
         for (i=0;i<l ; i=i+1)
         {
            for(j=0;j<c ; j=j+1)
            {
               printf ("B[%d][%d]=",j,i);
               scanf ("%f",&B[i][j]);
            }
         }

         i=0;
         while (i<l)
         {
             j=0;
             while (j<c)
             {
                  C[i][j]=A[i][j] + B[i][j];
                  printf ("C[%d][%d]=%3.2f \n" ,i,j,C[i][j]);
                  j=j+1;
             }
             i=i+1;
         }
   }
getch();
}

