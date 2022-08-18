// Сортировка целых чисел
#include <stdio.h>  // для printf
#include <stdlib.h> // atoi преобразуют символьную строку в целое значение
#define BIG_N 1600001
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
void sorted_to_massive(int new_m[], int *neww, int old_m[], int old);

// 7 Кладем сумму в S
void
summa(int old_m[], int n, long long int S[]);

// 8 запись в файл ОТСОРТИРОВАННОГО масива
void
writePrintArray (long long int A[], int size);

// 9 Insertion sort
void insertSort(int A[],int n);

// 10  Merge Function
void
merge (int arr[], int l, int m, int r);

// Merge Sort Function in C
void
mergeSort (int arr[], int l, int r);

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
    //printf ("\n Kolichestvo: N_second = %d\n", N[1]);

    // Main 2 считали все элементы в массив old_m
    int old_m1[6000]={0};
    int old_m2[6000]={0};
    read_ALL_file (N[0],N[1], old_m1, old_m2);

//    printf ("\n First given array is \n");
//    printArray (old_m1, N[0]);

//    printf ("\n Second given array is \n");
//    printArray (old_m2, N[1]);

    // Main 3 Перемножение массивов
    int *old_m = malloc(N[0]*N[1]*4);
    multiply(N[0],N[1], old_m1, old_m2, old_m);
   
//    printf ("\n Multiplied array is \n");
//    printArray (old_m, N[0]*N[1]);

    int n=N[0]*N[1];

    // Main 4 Сортировка массива карманами "kosar"
int new_m[36000]={0}; int neww=0;//index of new_m[]

int kosar = 1000;
int a[36000]={0};
int p=0;// How many thousends
for (p=-1;p<BIG_N;p++)
   { int last=0;//new index for massive a[]
     for (int k = 0;k<n;k++)
	{if ( (kosar*p < old_m[k]) && (old_m[k] <= (p+1)*kosar) ) 
	        { a[last]=old_m[k];
	          last++;
	        }
	}
	mergeSort (a, 0, last - 1);// Сортировка merge после "for"
	//printf ("\n Sorted array is \n"); // printArray(a, last);
        // Main 5 Запись в массив old_m[] того, что отсортировал
        sorted_to_massive(new_m, &neww, a, last);  
   }

//printf ("\n ALL Sorted array is \n");
//printArray(new_m, neww);     
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
void sorted_to_massive(int new_m[], int *neww, int old_m[], int old)
{
  int i;
  for(i=0; i<old;i++)
    {
      
//printf("\n new_m[neww+i]=%d, neww=%d, old_m[i]=%d, old=%d \n", old_m[i], *neww, old_m[i], old);
      new_m[(*neww)+i] = old_m[i];
    }
*neww = (*neww) + i;
//printf("\n ***neww=%d ***\n", *neww);
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

// Merge Function
void
merge (int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
        {
            if (L[i] <= R[j])
                {
                    arr[k] = L[i];
                    i++;
                }
            else
                {
                    arr[k] = R[j];
                    j++;
                }
            k++;
        }
    while (i < n1)
        {
            arr[k] = L[i];
            i++;
            k++;
        }
    while (j < n2)
        {
            arr[k] = R[j];
            j++;
            k++;
        }
}

// Merge Sort Function in C
void
mergeSort (int arr[], int l, int r)
{
    if (l < r)
        {
            int m = l + (r - l) / 2;
            mergeSort (arr, l, m);
            mergeSort (arr, m + 1, r);
            merge (arr, l, m, r);
        }
}
