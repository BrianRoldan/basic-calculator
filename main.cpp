//Calculator By Brian Roldan
#include<iostream>

int main()
{


    while(true)
{
    int num1;
    int num2;
    char op;
    char e;

    if (num1 == e)
        break;

    std::cout << "Enter the first operand\n";
    std::cin >> num1;
    std::cout <<"Enter the second operand\n";
    std::cin >> num2;
    std::cout << "Enter the operator(+,-,*,/)\n";
    std::cin >> op;
    switch(op){
    case '+': std::cout << num1 + num2 <<"\n";
    break;
    case '-': std::cout << num1 - num2<<"\n";
    break;
    case '*': std::cout << num1 * num2<<"\n";
    break;
    case '/': std::cout << num1 / num2<<"\n";
    break;

    }

 }
    std::cout << "Done!";
}
