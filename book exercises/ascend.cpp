// program to allocate memory for n fractional numbers using new operator.store n number in allocating memory by reading from user and display the nuber ins ascending order.
#include <iostream>

int main()
{
    // Prompt the user to enter the number of integers to allocate memory for
    int n;
    std::cout << "Enter the number of integers to allocate memory for: ";
    std::cin >> n;

    // Allocate memory for n integers
    int *numbers = new int[n];

    // Prompt the user to enter each number and add it to the array
    for (int i = 0; i < n; i++)
    {
        std::cout << "Enter number " << i + 1 << ": ";
        std::cin >> numbers[i];
    }

    // Sort the array of numbers in ascending order using bubble sort
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    // Print the sorted array of numbers
    std::cout << "Sorted numbers: ";
    for (int i = 0; i < n; i++)
    {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    // Free the allocated memory
    delete[] numbers;

    return 0;
}
