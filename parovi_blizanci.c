/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int
main ()
{
  int i, j, a, b, dg, gg;
  printf ("Unesite donju granicu: ");
  scanf ("%d", &dg);
  printf ("Unesite gornju granicu: ");
  scanf ("%d", &gg);

  for (i = dg; i <= gg; i++)
    {
      int flag = 1;
      if (i == 1)
	continue;
      for (j = 2; j <= i / 2; j++)
	{


	  if (i % j == 0 /*&(i+2)%j == 0 */ )
	    {

	      flag = 0;
	      break;

	    }
	  // printf("prvi blizanac: %d \n", a);
	  //b=i+2; printf("drugi blizanac: %d \n\n", b);}
	}
      a = i;
      int x = i + 2;
      for (j = 2; j <= x / 2; j++)
	{


	  if (x % j == 0 /*&(i+2)%j == 0 */ )
	    {
	      flag = 0;
	      break;
	    }
	  // printf("prvi blizanac: %d \n", a);
	  //b=i+2; printf("drugi blizanac: %d \n\n", b);}
	}
      b = i + 2;

      if (b - a == 2 & flag == 1)
	{
	  printf (" \n Blizanci prostih brojeva su: (%d, %d) ", a, b);
	}
    }

  return 0;
}
