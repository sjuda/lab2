#include <iostream>
#include <stdio.h>
#include <string.h>

int main()
{
    int x = 0;
    int y = 0;
    std::cout << "Enter x,y: ";
    std::cin >> x, y;
    if (((x % 2) && (y % 2)))
    {
        std::cout << "/nValues is even";
    }
    else
    {
        std::cout << "/nValue(s)is not even/n";
    }

    if (((x < 20) || (y <20)) && (!(x < 20) && (y  < 20)))
    {
        std::cout << "X or Y less than 20/n";
    }
    else
    {
        std::cout << "X and Y does not satisfy condition/n";
    }

    if ((x == 0) || (y == 0))
    {
        std::cout << "X or Y less than 20/n";
    }
    else
    {
        std::cout << "X and Y does not satisfy condition/n";
    }
    int z = 0;
    std::cout << "Enter z: /n";
    std::cin >> z;
    if ((z < 0) && (x < 0) && (y <0))
    {
        std::cout << "All values satisfy condition/n";
    }

    else
    {
        std::cout << "All values does not satisfy condition/n";
    }

if((((!(z % 5))&&(x % 5))&&(y % 5))||((z % 5)&&(!(x % 5) && (y % 5))||((z % 5)&&(x % 5)&&(!(y % 5)))))
    {
        std::cout << "One of values multiples of 5/n";
    }
    else
    {
        std::cout << "All values does not stasfy condirions/n";
    }
    if ((z > 100) || (x > 100) || (y > 100))
    {
        std::cout << "One of values satisfy condition/n";
    }
    else
    {
        std::cout << "All values does not satisfy condition/n";
    }
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    std::cout << "Enter coordinates: " << std::endl;
    std::cin >> a, b, c, d;
    if (((a == c) || (b == d)) && (!((a == c) && (b == d))))
    {
        std::cout << "Ladya:RUN" << std::endl;
    }
    else
    {
        std::cout << "Ladya:You still have a chance" << std::endl;
    }

    if (((a - 2 == c) && ((b - 1 == d) || (b + 1 == d))) || ((a + 2 == c) && ((b - 1 == d) || (b + 1 == d))) || ((b - 2 == d) && ((a - 1 == c) || (a + 1 == c))) || ((b + 2 == d) && ((a - 1 == c) || (a + 1 == c))))
    {
        std::cout << "Slon:RUN" << std::endl;
    }
    else
    {
        std::cout << "Slon:You still have a chance" << std::endl;
    }
    if ((a - 1 == c) || (a + 1 == c))
        return 0;
}
