#include <stdio.h>

void po_millionu(int M[],int C[], int n)
{
  for(int k=0;k<n;k++)
 {
  for(int i=1; i<=1000000;i++)
    {
      if (M[k]==i) ++C[i];
    }
  }
}


void print_po_millionu(int C[])
{
  for(int i=1; i<=1000000;i++)
    {
      if (C[i]!=0) 
      {
        for (int k=0;k<C[i];k++) 
          printf("%d ",i);
      }
    }
}


int main(void) {
  printf("Po millionu\n");

  int n = 4;
  int C[1000001]={0};

  int M[4] = {1,100000,1,1000000};
  po_millionu(M,C,n);

  print_po_millionu(C);
  
  return 0;
}
