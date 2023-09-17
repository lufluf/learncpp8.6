#include <iostream>
#include <string>

int calculate(int x, int y, char op)
{
    switch (op) {

    case '+':
        return x + y;
    case '-':
        return x - y;
    case '*':
        return x * y;
    case '/':
        return x / y;
    case '%':
        return x % y;
    default:
        std::cout << "You did not enter a proper symbol.";
        return 0;
        }
}



int main()
{
    std::cout << "Enter an integer:";
    int x;
    std::cin >> x;
    std::cout << "You entered: " << x << '\n';

    std::cout << "(+ - / * %):";
    char op{};
    std::cin >> op;
    std::cout << "You entered: " << op << '\n';

    std::cout << "Enter an integer:";
    int y;
    std::cin >> y;
    std::cout << "You entered: " << y << '\n';
        
    std::cout << x << ' ' << op << ' ' << y << " is " << calculate(x, y, op) << '\n';

}

