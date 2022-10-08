#include <stdio.h>
int main ()
{
  int in,no,no1;
  printf ("enter amount : ");
  scanf ("%d", &in);
  printf ("no of ticket : ");
  scanf ("%d", &no);
  no1 = no * 5;
  if (in % 5 == 0)
    {
      if (in >= no1)
	{
	  printf ("ticket booked\n");
	  printf ("balance=%d", in - no1);
	}
      else
	{
	  printf ("amount is not enough");S
	}
    }
  else
    {
      printf ("invalid amount");
    }
}

