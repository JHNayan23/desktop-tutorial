#include <stdio.h>

void shellSort(int array[], int n)
{

    for (int gap = n / 2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < n; i += 1)
        {
            int temp = array[i];
            int j;
            for (j = i; j >= gap && array[j - gap] > temp; j -= gap)
            {
                array[j] = array[j - gap];
            }
            array[j] = temp;
        }
    }
}

void printArray(int array[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ",array[i]);
    printf("\n");
}


int main()
{
    int array[] = {23,29,15,19,31,7,9,5};
    int size = sizeof(array) / sizeof(array[0]);
    shellSort(array, size);
    printf("Sorted Array\n");
    printArray(array, size);
}
