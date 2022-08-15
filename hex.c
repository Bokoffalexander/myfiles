#include <stdio.h>
#include <inttypes.h>

int main(void) {
  
// int is implicitly cast to unsigned int
    
signed int b = -2;
  printf ("\n signed int dec b=%d hex = %X \n", b, b);
  
  signed int a = 1;
  printf ("\n signed int dec a=%d  hex =        %X \n", a, a);

printf("###########################--------");
  
signed long long int c = a + b;
    printf("\n a + b = c = %lld      hex = %X \n", c, c);

printf("\nBecause c signed\n");
  
printf("\n***********************************\n");
  printf("***********************************\n");
  
  int signed x = -2;
  printf ("\n signed int dec x=%d hex = %X \n", x,x);
  
    unsigned int y = 1U;
  printf ("\n unsignd int dec y=%d hex =        %X \n", y,y);

printf("###########################--------");
  
   signed long long int z = x + y;
    printf("\nx+y = z = %lld hex = %X \n", z, z);

  printf("\nBecause z unsigned\n");
  
  return 0;
}
