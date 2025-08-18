#include <iostream>
#include <stdlib.h>

#include "Array.hpp"

#define MAX_VAL 750

template<typename T>
void printArray(const Array<T>& arr) {
    std::cout << "Array : ";
    for (unsigned int i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main(int, char**)
{
    // Custom main
    {
        std::cout << "CUSTOM TESTS :" << std::endl;
        Array<int> arr1(4);
        Array<int> arr2(4);
        
        std::cout << "Empty arrays" << std::endl;
        printArray(arr1);
        printArray(arr2);
        
        std::cout << "arr1 with values" << std::endl;
        arr1[0] = 21;
        arr1[1] = 42;
        arr1[2] = 84;
        arr1[3] = 168;
        printArray(arr1);
        printArray(arr2);
        
        std::cout << "arr2 used assignment operator, arr1 modified" << std::endl;
        arr2 = arr1;
        arr1[0] = 99;
        printArray(arr1);
        printArray(arr2);

        std::cout << "arr3 from copy constructor" << std::endl;
        const Array<int> arr3(arr1);
        arr1[0] = 0;
        printArray(arr1);
        printArray(arr2);
        printArray(arr3);
        
        // arr3[1] = 12; // read only test
        
        std::cout << "Empty array, array of strings" << std::endl;
        Array<int> arr4;
        Array<std::string> arr5(3);
        arr5[0] = "Stupid";
        arr5[1] = "Template";
        arr5[2] = "Exercise";
        printArray(arr4);
        printArray(arr5);
    }

    std::cout << std::endl << "********************" << std::endl;

    // Given main
    {
        std::cout << "GIVEN TESTS :" << std::endl;
        Array<int> numbers(MAX_VAL);
        int* mirror = new int[MAX_VAL];
        srand(time(NULL));
        for (int i = 0; i < MAX_VAL; i++)
        {
            const int value = rand();
            numbers[i] = value;
            mirror[i] = value;
        }
        //SCOPE
        {
            Array<int> tmp = numbers;
            Array<int> test(tmp);
        }

        for (int i = 0; i < MAX_VAL; i++)
        {
            if (mirror[i] != numbers[i])
            {
                std::cerr << "didn't save the same value!!" << std::endl;
                return 1;
            }
        }
        try
        {
            numbers[-2] = 0;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        try
        {
            numbers[MAX_VAL] = 0;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }

        for (int i = 0; i < MAX_VAL; i++)
        {
            numbers[i] = rand();
        }
        delete [] mirror;//
    }
    
    return 0;
}