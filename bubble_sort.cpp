#include <iostream>
using namespace std;
void show_data(int data[], int len)
{
    for (int i = 0; i < len - 1; i++)
        cout << data[i] << " ";
    cout << data[len - 1] << endl;
}
/*
    冒泡排序，正序，大数向上冒出
*/
void bubble_sort1(int data[], int len)
{
    cout << len << endl;
    for (int i = 0; i < len - 1; ++i)
    {
        for (int j = 1; j < len - i; ++j)
        {
            if (data[j - 1] > data[j])
            {
                int t = data[j - 1];
                data[j - 1] = data[j];
                data[j] = t;
            }
        }
    }
    show_data(data, len);
}
/*
    冒泡排序，正序，小数向下冒出
*/
void bubble_sort2(int data[], int len)
{
    cout << len << endl;
    for (int i = 0; i < len - 1; ++i)
    {
        for (int j = len - 1; j > i; --j)
        {
            if (data[j] < data[j - 1])
            {
                int t = data[j];
                data[j] = data[j - 1];
                data[j - 1] = t;
            }
        }
    }
    show_data(data, len);
}
int main()
{
    int data1[10] = {1, 4, 2, 5, 3, 10, 8, 7, 9, 6};
    bubble_sort1(data1, sizeof(data1) / sizeof(int));
    int data2[10] = {1, 4, 2, 5, 3, 10, 8, 7, 9, 6};
    bubble_sort2(data2, sizeof(data2) / sizeof(int));
    return 0;
}