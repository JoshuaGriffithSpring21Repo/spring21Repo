#include <stdio.h>
#include <math.h>
long toBin(int dno)
{
    long bno=0,remainder,f=1;
    while(dno != 0)
    {
         remainder = dno % 2;
         bno = bno + remainder * f;
         f = f * 10;
         dno = dno / 2;
    }
    return bno;
}
int main() {
  long bno;
  int n, i, flag = 0;
  printf("Enter a positive integer: ");
  scanf("%d", &n);
 
  for (i = 2; i <= n / 2; ++i) {
    // condition for non-prime
    if (n % i == 0) {
      flag = 1;
      break;
    }
  }
 
  if (n == 1) {
    printf("1 is neither prime nor composite.");
  } 
  else {
    if (flag == 0)
      printf("%d is a prime number.", n);
    else
      printf("%d is not a prime number.", n);
  }
  bno= toBin(n);
  printf("\n The twos complament is : %ld\n\n",bno);
  
 
     
  return 0;  
}



  

 
 
 


