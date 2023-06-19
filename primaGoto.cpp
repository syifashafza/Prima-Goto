#include <iostream>
#include <conio.h>

int main()
{
    int x, a, b;
    char i;
    b = 1;

i1:
    system("cls");
    std::cout << "PROGRAM UNTUK MEMERIKSA BILANGAN PRIMA *cr-syifa" << std::endl << std::endl;
    std::cout << "Masukkan Bilangan Untuk Dicek: ";
    std::cin >> x;
    std::cout << std::endl;

    for (a = 2; a <= x - 1; a++)
    {
        if (x % a == 0)
        {
            b = 0;
            break;
        }
    }

    if (b == 1)
    {
        std::cout << x << " merupakan Bilangan Prima";
    }
    else
    {
        std::cout << x << " bukan merupakan Bilangan Prima";
    }

    if (b == 0)
        std::cout << std::endl;

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Ulangi (y/n)? ";
    std::cin >> i;

    if (i == 'y')
        goto i1;
    else
        std::cout << "Terima Kasih";

    return 0;
}

