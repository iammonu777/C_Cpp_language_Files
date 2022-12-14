#include <stdio.h>

int main()
{

       int array[10] = {4, 3, 2, 1, 5, 7, 6, 9, 8, 10};

       int temp;
       for (int i = 0; i < 10; i++)
       {
              for (int j = i + 1; j < 10; j++)
              {
                     if (array[i] > array[j])
                     {
                            temp = array[i];
                            array[i] = array[j];
                            array[j] = temp;
                     }
              }
       }
       for (int i = 0; i < 10; i++)
       {
              printf("%d", array[i]);
       }

       return 0;
}