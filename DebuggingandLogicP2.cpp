#include <iostream>

int main()
{
    float n1, n2, n3;

    std::cout << "Enter three numbers: ";
    if (!(std::cin >> n1 >> n2 >> n3))
    {
        std::cout << "Invalid input.\n";
        return 1;
    }

    if (n1 >= n2)
    {
        if (n1 >= n3)
        {
            std::cout << "Largest number: " << n1 << '\n';
        }
        else
        {
            std::cout << "Largest number: " << n3 << '\n';
        }
    }
    else // n2 > n1
    {
        if (n2 >= n3)
        {
            std::cout << "Largest number: " << n2 << '\n';
        }
        else
        {
            std::cout << "Largest number: " << n3 << '\n';
        }
    }

    return 0;
}

