#include <stdio.h>
#include <stdlib.h>
void simple_memory();
void dynamic_memory();

int main(void) {
  simple_memory();
  dynamic_memory();
  return 0;
}


void simple_memory()
{
printf("Simple memory\n");
puts("Enter number of Megabytes from 1 to 8 ->");
  int n;
  scanf("%d",&n);
  n *= 1000000;
  char A[n];

for (int i=0;i<10;i++)
  A[i] = i + '0' ;

printf("last char =%c; \n", A[n-1]);
  
  puts("Array successfully created.");
  puts("****************************");
  system("pause");
}


void dynamic_memory()
{
printf("\n Dynamic memory\n");
puts("Enter number of Megabytes from 10 to 1027 ->");
  int n;
  scanf("%d",&n);
  n *= 1000000;
  
  char *A = malloc(n);
  
if (NULL == A)
{
   puts("OS didn't give memory...");
   exit(1);
}
  
for (int i=0;i<10;i++)
  {
    A[i]= i+'0';
printf("The char =%c; \n", A[i]);
    }
      free(A);
  
  puts("Array successfully created.");
  puts("****************************");
  system("pause");
}
