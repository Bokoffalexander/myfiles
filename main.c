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

// 6 Запись в массив того, что отсортировалось через СЧЕТЧИК
void sorted_to_massive(int C[], int old_m[]);

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
    puts("***START***");

    // Main 1 считали количество N
    int N[2] ={0}; 
    read_N_file (N);
    printf ("\n Kolichestvo: N_first = %d\n", N[0]);
    printf ("\n Kolichestvo: N_second = %d\n", N[1]);

    // Main 2 считали все элементы в массив old_m
    int old_m1[6000]={0};
    int old_m2[6000]={0};
    read_ALL_file (N[0],N[1], old_m1, old_m2);

    printf ("\n First given array is \n");
    printArray (old_m1, N[0]);

    printf ("\n Second given array is \n");
    printArray (old_m2, N[1]);

    // Main 3 Перемножение массивов
    int *old_m = malloc(N[0]*N[1]*4);
    multiply(N[0],N[1], old_m1, old_m2, old_m);
   
    printf ("\n Multiplied array is \n");
    printArray (old_m, N[0]*N[1]);

    // Main 4 Сортировка массива
/*
    int *C = malloc(BIG_N*4); // Создаем счетчик С[]
    
    for(int i=0; i<BIG_N; i++) // Это обнуление счетчика C[] 
	{
		C[i] = 0;
	}

    count_sort(old_m, C, N[0]*N[1]);// Сама сортировка массива
  */

	//Main 4 Inserion sort        
	insertSort(old_m, N[0]*N[1]);
	printf ("\n Sorted array is \n");
	printArray(old_m, N[0]*N[1]);  
    // Main 5 Запись в массив old_m[] того, что отсортировалось
   // printf ("\n Sorted array is \n");
   // sorted_to_massive(C, old_m);
    
    // Main 6 Запись каждого десятого элемента отсортированного массива в А[]
    // Запись суммы эдементов А[] в S[0]
     long long int S[1]={0};// Массив из одного элемента СУММА
     summa(old_m, N[0]*N[1],S); 

    // Main 7 Запись в файл
     writePrintArray (S, 1);

puts("\n\n***END***");    
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


// 6 Запись в массив того, что отсортировалось через СЧЕТЧИК
void sorted_to_massive(int C[], int old_m[])
{
  int g=0;
  for(int i=0; i<=BIG_N;i++)
    {
      if (C[i]!=0) 
      {
        for (int k=0;k<C[i];k++)
	  {
            old_m[g]=i;
	    g++; 
            printf("%d ",i);
	  }
      }
    }
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
