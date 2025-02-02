#include <iostream>

int main()
{
    std::cout << R"(C:\MyFolder\My "Folder"\My 'File')" << std::endl;

    int number1 = 10;
    int number2 = 20;
    int myAge = 23;
    std::cout << "My age is" << myAge << std::endl;
    std::cout << "2 + 3 = " << 2 + 3 << std::endl;
    std::cout << "10 + 20 = " << number1 + number2 << std::endl;

    int num1 = 1;
    int num2 = { 1 };
    int num3{ 1 };
    int num4(1);
    char ch = '$';
    char chh = '\n';
    std::cout << "1" << chh << "2\n";

    const double PI = 3.1415926;
    std::cout << PI << std::endl;

    int number;
    std::cout << "Enter a number : ";
    std::cin >> number;
    std::cout << "You entered a number: " << number << std::endl;
    int numb1, numb2;
    int sum;
    std::cout << "Enter a number 1 : ";
    std::cin >> numb1;
    std::cout << "Enter a number 2 : ";
    std::cin >> numb2;
    sum = numb1 + numb2;
    std::cout << "sum = " << sum;

    int side;
    std::cin >> side;
    int perimeter = side * 4;
    std::cout << "Perimeter : " << perimeter << "\n";

    return 0;
}