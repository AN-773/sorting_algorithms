class SelectionSort
{
private:
public:
    void sort(int *array, int len);
};

void SelectionSort::sort(int *array, int len)
{
    for (int i = 0; i < len; i++)
    {
        int minIndex = i;
        for (int j = i; j < len; j++)
        {
            if (array[j] < array[minIndex])
            {
                minIndex = j;
            }
        }
        int t = array[i];
        array[i] = array[minIndex];
        array[minIndex] = t;
    }
}
