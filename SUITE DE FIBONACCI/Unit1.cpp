#include<math.h>
#include<stdio.h>
#include<conio.h>

int n, nbr1 = 0, nbr2 = 1, s, i;
void main()
{

  printf("Entrez le nombre de termes\n");
  scanf("%d", &n);
  printf("Les %d premiers termes de la suite de Fibonacci sont:\n", n);

  for (i = 0; i < n; i=i+1)
  {
    if (i <= 1)
      s = i;
    else
    {
      s = nbr1 + nbr2;
      nbr1 = nbr2;
      nbr2 = s;
    }
    printf("%d\n", s);
  }
getch();
}
