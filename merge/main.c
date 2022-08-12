// BIBLE SORT
#include <stdio.h>  // для printf

// Main Method
void
main ()
{
    // ЗДЕСЬ ИСПОЛНЕНИЕ ПРОГРАММЫ

    char m_odno_str_chislo[30]; // это одно строковое число
    
    int words = 821116; // Количество слов в тексте

    printf("\n***Start***\n");

    FILE *f;
    f = fopen ("bible.txt", "r");

    FILE *fff;
    fff = fopen("b.txt", "a");

    int k = 0;

    while (k < words)
        {
            fscanf (f, "%s", m_odno_str_chislo);
            fprintf(fff, "%s\n", m_odno_str_chislo);
            k = k + 1;
        }

    fclose (f);
    fclose (fff);

    printf("\n***END***\n");
    // закончили  FILE *f *fff
}
