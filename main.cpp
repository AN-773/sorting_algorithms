#include "BubbleSort.hpp"
#include <iostream>

using namespace std;
int main()
{
    int *array = new int[10]{1, 9, 8, 7, 6, 5, 4, 3, 2, 10};
    BubbleSort bsort;
    bsort.sort(array, 10);
    for (int i = 0; i < 10; i++)
    {
        cout << array[i] << ", ";
    }
    return 0;
}