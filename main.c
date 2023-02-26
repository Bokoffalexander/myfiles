// Сортировка целых чисел
#include <stdio.h>  // для printf
#include <stdlib.h> // atoi преобразуют символьную строку в целое значение
#define BIG_N 36000
// функция 1 считать количество
void
read_N_file (int N[]);

// функция 2 считать все элементы
void
read_ALL_file (int n1, int n2, int old_m1[], int old_m2[]);

// 3 Functions to Print Elements of Array
void
printArray (int A[], int size);

// 4 Перемножение массивов
void
multiply(int n1, int n2, int old_m1[], int old_m2[], int old_m[]);

// 5 Сортировка подсчетом
void count_sort(int M[],int C[], int n);

// 6 Запись в массив того, что отсортировалось
void sorted_to_massive(int new_m[], int neww[], int old_m[], int old);

// 7 Кладем сумму в S
void
summa(int old_m[], int n, long long int S[]);

// 8 запись в файл ОТСОРТИРОВАННОГО масива
void
writePrintArray (long long int A[], int size);

// 9 Insertion sort
void insertSort(int A[],int n);

// Main Method
int
main ()
{
    // # ЗДЕСЬ ИСПОЛНЕНИЕ ПРОГРАММЫ
//    puts("***START***");

    // Main 1 считали количество N
    int N[2] ={0}; 
    read_N_file (N);
  //  printf ("\n Kolichestvo: N_first = %d\n", N[0]);
   // printf ("\n Kolichestvo: N_second = %d\n", N[1]);

    // Main 2 считали все элементы в массив old_m
    int old_m1[6000]={0};
    int old_m2[6000]={0};
    read_ALL_file (N[0],N[1], old_m1, old_m2);

   // printf ("\n First given array is \n");
   // printArray (old_m1, N[0]);

   // printf ("\n Second given array is \n");
   // printArray (old_m2, N[1]);

    // Main 3 Перемножение массивов
    int *old_m = malloc(N[0]*N[1]*4);
    multiply(N[0],N[1], old_m1, old_m2, old_m);
   
   // printf ("\n Multiplied array is \n");
   // printArray (old_m, N[0]*N[1]);

int n=N[0]*N[1];

    // Main 4 Сортировка массива

int p=0;
int lemon = 100000000;

int last[16]={0};
int a0[36000]={0};
for (int k = 0;k<n;k++)
	{
		if (old_m[k] <= lemon) 
		{
		  a0[p]=old_m[k];
		  p++;
		}
	}
last[0]=p;


p=0;
int a1[36000]={0};
for (int k = 0;k<n;k++)
	{
		if ( (lemon*1 < old_m[k]) && (old_m[k] <= 2*lemon) ) 
		{
		  a1[p]=old_m[k];
		  p++;
		}
	}
last[1]=p;


p=0;
int a2[36000]={0};
for (int k = 0;k<n;k++)
	{
		if ( (lemon*2 < old_m[k]) && (old_m[k] <= 3*lemon) )
		{
		  a2[p]=old_m[k];
		  p++;
		}
	}
last[2]=p;


p=0;
int a3[36000]={0};
for (int k = 0;k<n;k++)
	{
		if ( (lemon*3 < old_m[k]) && (old_m[k] <= 4*lemon) )
		{
		  a3[p]=old_m[k];
		  p++;
		}
	}
last[3]=p;


p=0;
int a4[36000]={0};
for (int k = 0;k<n;k++)
	{
		if ( (lemon*4 < old_m[k]) && (old_m[k] <= 5*lemon) )
		{
		  a4[p]=old_m[k];
		  p++;
		}
	}
last[4]=p;


p=0;
int a5[36000]={0};
for (int k = 0;k<n;k++)
	{
		if ( (lemon*5 < old_m[k]) && (old_m[k] <= 6*lemon) )
		{
		  a5[p]=old_m[k];
		  p++;
		}
	}
last[5]=p;



p=0;
int a6[36000]={0};
for (int k = 0;k<n;k++)
	{
		if ( (lemon*6 < old_m[k]) && (old_m[k] <= 7*lemon) )
		{
		  a6[p]=old_m[k];
		  p++;
		}
	}
last[6]=p;



p=0;
int a7[36000]={0};
for (int k = 0;k<n;k++)
	{
		if ( (lemon*7 < old_m[k]) && (old_m[k] <= 8*lemon) )
		{
		  a7[p]=old_m[k];
		  p++;
		}
	}
last[7]=p;



p=0;
int a8[36000]={0};
for (int k = 0;k<n;k++)
	{
		if ( (lemon*8 < old_m[k]) && (old_m[k] <= 9*lemon) )
		{
		  a8[p]=old_m[k];
		  p++;
		}
	}
last[8]=p;



p=0;
int a9[36000]={0};
for (int k = 0;k<n;k++)
	{
		if ( (lemon*9 < old_m[k]) && (old_m[k] <= 10*lemon) )
		{
		  a9[p]=old_m[k];
		  p++;
		}
	}
last[9]=p;



p=0;
int a10[36000]={0};
for (int k = 0;k<n;k++)
	{
		if ( (lemon*10 < old_m[k]) && (old_m[k] <= 11*lemon) )
		{
		  a10[p]=old_m[k];
		  p++;
		}
	}
last[10]=p;


p=0;
int a11[36000]={0};
for (int k = 0;k<n;k++)
	{
		if ( (lemon*11 < old_m[k]) && (old_m[k] <= 12*lemon) )
		{
		  a11[p]=old_m[k];
		  p++;
		}
	}
last[11]=p;



p=0;
int a12[36000]={0};
for (int k = 0;k<n;k++)
	{
		if ( (lemon*12 < old_m[k]) && (old_m[k] <= 13*lemon) )
		{
		  a12[p]=old_m[k];
		  p++;
		}
	}
last[12]=p;


p=0;
int a13[36000]={0};
for (int k = 0;k<n;k++)
	{
		if ( (lemon*13 < old_m[k]) && (old_m[k] <= 14*lemon) )
		{
		  a13[p]=old_m[k];
		  p++;
		}
	}
last[13]=p;


p=0;
int a14[36000]={0};
for (int k = 0;k<n;k++)
	{
		if ( (lemon*14 < old_m[k]) && (old_m[k] <= 15*lemon) )
		{
		  a14[p]=old_m[k];
		  p++;
		}
	}
last[14]=p;



p=0;
int a15[36000]={0};
for (int k = 0;k<n;k++)
	{
		if ( (lemon*15 < old_m[k]) && (old_m[k] <= 16*lemon) )
		{
		  a15[p]=old_m[k];
		  p++;
		}
	}
last[15]=p;



/*
    int *C = malloc(BIG_N*4); // Создаем счетчик С[]
    
    for(int i=0; i<BIG_N; i++) // Это обнуление счетчика C[] 
	{
		C[i] = 0;
	}

    count_sort(old_m, C, N[0]*N[1]);// Сама сортировка массива
  */

	//Main 4 Inserion sort        
	insertSort(a0, last[0]);
	//printf ("\n Sorted array is \n");
	//printArray(a0, last[0]);

	insertSort(a1, last[1]);
	//printf ("\n Sorted array is \n");
	//printArray(a1, last[1]); 

        insertSort(a2, last[2]);
	//printf ("\n Sorted array is \n");
	//printArray(a2, last[2]); 


	insertSort(a3, last[3]);
	//printf ("\n Sorted array is \n");
	//printArray(a3, last[3]);


	insertSort(a4, last[4]);
	//printf ("\n Sorted array is \n");
	//printArray(a4, last[4]);


	insertSort(a5, last[5]);
	//printf ("\n Sorted array is \n");
	//printArray(a5, last[5]);


	insertSort(a6, last[6]);
	//printf ("\n Sorted array is \n");
	//printArray(a6, last[6]);


	insertSort(a7, last[7]);
	//printf ("\n Sorted array is \n");
	//printArray(a7, last[7]);


	insertSort(a8, last[8]);
	//printf ("\n Sorted array is \n");
	//printArray(a8, last[8]);


	insertSort(a9, last[9]);
	//printf ("\n Sorted array is \n");
	//printArray(a9, last[9]);


	insertSort(a10, last[10]);
	//printf ("\n Sorted array is \n");
	//printArray(a10, last[10]);


	insertSort(a11, last[11]);
	//printf ("\n Sorted array is \n");
	//printArray(a11, last[11]);


	insertSort(a12, last[12]);
	//printf ("\n Sorted array is \n");
	//printArray(a12, last[12]);


	insertSort(a13, last[13]);
	//printf ("\n Sorted array is \n");
	//printArray(a13, last[13]);


	insertSort(a14, last[14]);
	//printf ("\n Sorted array is \n");
	//printArray(a14, last[14]);


	insertSort(a15, last[15]);
	//printf ("\n Sorted array is \n");
	//printArray(a15, last[15]);
 
    // Main 5 Запись в массив old_m[] того, что отсортировалось

       int new_m[36000]={0};
       int neww[1]={0};// Это индекс последнего элемента
      sorted_to_massive(new_m, neww, a0, last[0]);
      sorted_to_massive(new_m, neww, a1, last[1]);
      sorted_to_massive(new_m, neww, a2, last[2]);
      sorted_to_massive(new_m, neww, a3, last[3]);
      sorted_to_massive(new_m, neww, a4, last[4]);
      sorted_to_massive(new_m, neww, a5, last[5]);
      sorted_to_massive(new_m, neww, a6, last[6]);
      sorted_to_massive(new_m, neww, a7, last[7]);
      sorted_to_massive(new_m, neww, a8, last[8]);
      sorted_to_massive(new_m, neww, a9, last[9]);
      sorted_to_massive(new_m, neww, a10, last[10]);
      sorted_to_massive(new_m, neww, a11, last[11]);
      sorted_to_massive(new_m, neww, a12, last[12]);
      sorted_to_massive(new_m, neww, a13, last[13]);
      sorted_to_massive(new_m, neww, a14, last[14]);
      sorted_to_massive(new_m, neww, a15, last[15]);

        //printf ("\n ALL Sorted array is \n");
	//printArray(new_m, neww[0]);     
    // Main 6 Запись каждого десятого элемента отсортированного массива в А[]
    // Запись суммы эдементов А[] в S[0]
     long long int S[1]={0};// Массив из одного элемента СУММА
     summa(new_m, N[0]*N[1],S); 

    // Main 7 Запись в файл
     writePrintArray (S, 1);

//puts("\n\n***END***");    
return 0;
}


// функция 1 считать количество
void
read_N_file (int N[])
{
    FILE *f;
    f = fopen ("input.txt", "r");

    // ниже считываем количество
    char str_N[10]; // переменная максимум для 10 символов
    fscanf (f, "%s", str_N); // Из-за спецификатора %s считывается часть строки
                             // (до первого разделителя-пробела)

    N[0] = atoi (str_N);

    fscanf (f, "%s", str_N);
    N[1] = atoi (str_N);

    fclose (f);
    // закончили  FILE *f
}

// функция 2 считать все элементы
void
read_ALL_file (int n1, int n2, int old_m1[], int old_m2[])
{
    char m_odno_str_chislo[1000000]; // это одно строковое число

    FILE *f;
    f = fopen ("input.txt", "r");

    fscanf (f, "%s",
            m_odno_str_chislo); // это пропустим число количество элементов

    fscanf (f, "%s",
            m_odno_str_chislo); // это пропустим число количество элементов

    int k = 0;
    while (k < n1)
        {
            fscanf (f, "%s", m_odno_str_chislo);
            old_m1[k] = atoi (m_odno_str_chislo);
            k = k + 1;
        }

       k = 0;
    while (k < n2)
        {
            fscanf (f, "%s", m_odno_str_chislo);
            old_m2[k] = atoi (m_odno_str_chislo);
            k = k + 1;
        }

    fclose (f);
    // закончили  FILE *f
}



// 3 Functions to Print Elements of Array
void
printArray (int A[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf ("%d ", A[i]);
    printf ("\n");
}


// 4 Перемножение массивов
void
multiply(int n1, int n2, int old_m1[], int old_m2[], int old_m[])
{
	int g=0;

	for (int k=0; k<n2; k++)
	{
		for (int i=0; i<n1; i++)
			{
				old_m[g] = old_m1[i] * old_m2[k];
				//printf("old_m[%d] = %d, when old_m1[%d]=%d and old_m2[%d]=%d \n", g, old_m[g],i,old_m1[i],k,old_m2[k]); 
				g++;
			}
	}
}


// 5 Сортировка подсчетом
void count_sort(int M[],int C[], int n)
{
  for(int k=0;k<n;k++)// Перебираем элементы данного массива old_m[]
    {
  	for(int i=0; i<=BIG_N;i++) // Это счетчик C[]
    	 {
      		if (M[k]==i) ++C[i];
    	 }
    }
}


// 6 Запись в массив того, что отсортировалось
void sorted_to_massive(int new_m[], int neww[], int old_m[], int old)
{
  int i;
  for(i=0; i<old;i++)
    {
      
printf("\n new_m[neww+i]=%d, neww=%d, old_m[i]=%d, old=%d \n", old_m[i], neww[0] ,old_m[i], old);
      new_m[neww[0]+i] = old_m[i];
    }
neww[0] = neww[0] + i;
printf("\n ***neww=%d ***\n",neww[0]);
}

// 7 Кладем сумму в S
void
summa(int old_m[], int n, long long int S[])
{
	int k=0;
	while(k<n)
		{
		  S[0] += old_m[k];
		  //printf("Summa = %d \n", S[0]);
		  k += 10;
		}

}


// 8 запись в файл ОТСОРТИРОВАННОГО масива
void
writePrintArray (long long int A[], int size)
{
    FILE *f;
    f = fopen("output.txt", "w");
    int i;
    for (i = 0; i < size; i++)
        fprintf (f, "%lld ", A[i]);
    fclose(f);
}

// 9 Insertion sort
void insertSort(int A[],int n)
{
  putchar('\n');
  for (int k=1;k<n;k++)
    {
        int h=k;
        while 
        (h>0 && A[h-1]>A[h])
        {
            int tmp=A[h-1];
            A[h-1] = A[h];
            A[h] = tmp;
            h--;
        }
    }
}
