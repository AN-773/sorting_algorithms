class BubbleSort
{
private:
public:
    void sort(int *array, int len);
};

void BubbleSort::sort(int *array, int len) 
{
    bool swaped = true;
    while (swaped)
    {
        swaped = false;
        for (int i = 0; i < len - 1; i++) {
            if (array[i] > array[i+1]) {
                int t = array[i];
                array[i] = array[i + 1];
                array[i + 1] = t;
                swaped = true;
            }
        }
    }
    
}
