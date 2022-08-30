#include "BubbleSort.hpp"
#include "SelectionSort.hpp"
#include <iostream>

using namespace std;
int main()
{
    int len = 20;
    int *array = new int[len]{1, 9, 8, 7, 6, 5, 4, 3, 2, 10, 1, 9, 8, 7, 6, 5, 4, 3, 2, 10};
    // BubbleSort bsort;
    // bsort.sort(array, len);
    SelectionSort ssort;
    ssort.sort(array, len);
    for (int i = 0; i < len; i++)
    {
        cout << array[i] << ", ";
    }
    return 0;
}