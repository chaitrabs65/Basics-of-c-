#include <iostream>
int main()
{
    char op;
    int a, b;
    std::cout << "Enter the operator" << std::endl;
    std::cin >> op;
    std::cout << "Enter the values for a and b=" << std::endl;
    std::cin >> a >> b;
    switch (op)
    {
    case '+':
        std::cout << "sum=" << (a + b) << std::endl;
        break;
    case '-':
        std::cout << "differcenc=" << (a - b) << std::endl;
        break;
    case '*':
        std::cout << "multiplication=" << (a * b) << std::endl;
        break;
    case '/':
        if (b != 0)
        {
            std::cout << "division=" << (a / b) << std::endl;
        }
        else
        {
            std::cout << "Dvision with zero is not valid" << std::endl;
            break;
        }
    default:
        std::cout << "Invalid operator" << std::endl;
        break;
    }
    return 0;
}