#include<iostream>

void print_numbers(int* numbers, int size)
{
    for (int i = 0; i < size; ++i)
    {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;
}
int main()
{
    int arr[]{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int arr1[]{ 6, 5, 4, 8 };
    int arr2[]{ 1, 4, 3, 7, 5 };

    int sizearr = sizeof(arr) / sizeof(arr)[0]; //находим размер 1-го массива
    for (int i = 0; i < sizearr; i++);

    int sizearr1 = sizeof(arr1) / sizeof(arr1)[0]; //находим размер 2-го массива
    for (int i = 0; i < sizearr1; i++);

    int sizearr2 = sizeof(arr2) / sizeof(arr2)[0]; //находим размер 3-го массива
    for (int i = 0; i < sizearr2; i++);

    print_numbers(arr, sizearr);
    print_numbers(arr1, sizearr1);
    print_numbers(arr2, sizearr2);

    return 0;
}