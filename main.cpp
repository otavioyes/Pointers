#include <iostream>

int main()
{
    uint16_t a = 10;

    uint16_t *prta = &a;

    std::cout << "Size Of Bytes: " << sizeof(a) << '\n';
    std::cout << "a: " << a << '\n';
    std::cout << "Localization of a: " << &a << "\n\n";

    std::cout << "Size Of Bytes: " << sizeof(prta) << '\n';
    std::cout << "prta: " << prta << '\n';
    std::cout << "Valor dentro do ponteiro: " << *prta << '\n';
    std::cout << "Localization of prta: " << &prta << "\n\n";

    *prta = 155;

    std::cout << "Size Of Bytes: " << sizeof(prta) << '\n';
    std::cout << "prta: " << prta << '\n';
    std::cout << "Valor dentro do ponteiro: " << *prta << '\n';
    std::cout << "Localization of prta: " << &prta << "\n\n";

    a = 333;

    std::cout << "Size Of Bytes: " << sizeof(prta) << '\n';
    std::cout << "prta: " << prta << '\n';
    std::cout << "Valor dentro do ponteiro: " << *prta << '\n';
    std::cout << "Localization of prta: " << &prta << "\n\n";


    return 0;

}
