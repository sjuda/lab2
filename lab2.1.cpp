#include <iostream>
#include <stdio.h>
#include <string.h>

int main()
{
    int x = 0;
    int y = 0;
    std::cout << "Enter x,y: ";
    std::cin >> x >> y;
    if (((x % 2) && (y % 2)))
    {
        std::cout << "Values is not even" << std::endl;
    }
    else
    {
        std::cout << "Value(s)is even" << std::endl;
    }
    if (((x < 20) || (y <20)) && (!(x < 20) && (y  < 20)))
    {
        std::cout << "X or Y less than 20" << std::endl;
    }
    else
    {
        std::cout << "X and Y does not satisfy condition" << std::endl;
    }
    if ((x == 0) || (y == 0))
    {
        std::cout << "X or Y less than 20" << std::endl;
    }
    else
    {
        std::cout << "X and Y does not satisfy condition" << std::endl;
    }
    int z = 0;
    std::cout << "Enter z: " << std::endl;
    std::cin >> z;
    if ((z < 0) && (x < 0) && (y <0))
    {
        std::cout << "All values satisfy condition" << std::endl;
    }
    else
    {
        std::cout << "Not all values does not satisfy condition" << std::endl;
    }
    if ((((!(z % 5)) && (x % 5)) && (y % 5))
		|| ((z % 5) && (!(x % 5) && (y % 5)) 
			|| ((z % 5) && (x % 5) && (!(y % 5)))))
    {
        std::cout << "One of values multiples of 5" << std::endl;
    }
    else
    {
        std::cout << "All values does not stasfy condirions" << std::endl;
    }
    if ((z > 100) || (x > 100) || (y > 100))
    {
        std::cout << "One of values satisfy condition" << std::endl;
    }
    else
    {
        std::cout << "All values does not satisfy condition" << std::endl;
    }
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    std::cout << "Enter coordinates: " << std::endl;
    std::cin >> a >> b >> c >> d;
    if (((a > 8) || (b > 8) || (c > 8) || (d > 8)) 
		|| ((a < 0) || (b < 0) || (c < 0) || (d < 0) && (a == c) && (b == d)))
    {
        std::cout << "Bad values! Try again!" << std::endl;
    }
    if ((a == c) && (b == d))
    {
        std::cout << "Bad values! Try again!" << std::endl;
    }
    else
    {
        if (((a == c) || (b == d)) && (!((a == c) && (b == d))))
        {
            std::cout << "Ladya: You can go to (C,D)" << std::endl;
        }
        else
        {
            std::cout << "Ladya: You can not go to (C,D)" << std::endl;
        }
        if (((a - 2 == c) && ((b - 1 == d) || (b + 1 == d)))
			|| ((a + 2 == c) && ((b - 1 == d) || (b + 1 == d))) 
			|| ((b - 2 == d) && ((a - 1 == c) || (a + 1 == c))) 
			|| ((b + 2 == d) && ((a - 1 == c) || (a + 1 == c))))
        {
            std::cout << "Slon: you can go" << std::endl;
        }
        else
        {
            std::cout << "Slon: You can not go" << std::endl;
        }
        if (((a - 1 == c) || (a + 1 == c)) && ((b - 1 == d) || (b + 1 == d)))
        {
            std::cout << "Korol': You can go to place (C,D)" << std::endl;
        }
        else
        {
            std::cout << "Korol': Place (C,D) is long away" << std::endl;
        }
        if (a - c == b - d)
        {
            std::cout << "Ferz': You  can go to (C,D)" << std::endl;
        }
        else
        {
            std::cout << "Ferz': You can not go" << std::endl;
        }
        if ((d - b != -2) && (d - b != -1))
        {
            std::cout << "Peshka(i): You can go" << std::endl;
        }
        else
        {
            std::cout << "Peshka(i): You can not go" << std::endl;
        }
        if (((c - a == 1) || (c - a == 1)) && ((d - b == 1)))
        {
            std::cout << "Peshka(ii): You can eat" << std::endl;
        }
        else
        {
            std::cout << "Peshka(ii): You can not eat" << std::endl;
        }
    }
    int i = 1;
    while (i < 10)
    {
        std::cout << "7 * " << i << " = " << i * 7 << std::endl;
        i++;
    }
    int h = 1;
    for (int n = 8; n <= 15; n++)
    {
        h = h * n;
        std::cout << h << std::endl;
    }
    {
        int a = 1;
        unsigned int res = 1;
        std::cin >> a;
        if ((a > 1) && (a < 20))
        {
            for (int i = a; i < 20; i++)
            {
                res = res * i;
                std::cout << "Result is: " << res << std::endl;
            }
        }
        else
        {
            std::cout << "Bad value!" << std::endl;
        }
    }
    {
        int b = 0;
        unsigned int res = 1;
        std::cin >> b;
        if ((b > 1) && (b < 20))
        {
            for (int i = 1; i < b; i++)
            {
                res = res * i;
                std::cout << "Result is: " << res << std::endl;
            }
        }
        else
        {
            std::cout << "Bad value!" << std::endl;
        }
        {
            int a = 0;
            int b = 0;
            unsigned int res = 1;
            std::cin >> a >> b;
            if (b >= a)
            {
                for (int i = a; (i >= a) && (i <= b); i++)
                {
                    res = a * b;
                }
                std::cout << "Result is: " << res << std::endl;
            }
            else
            {
                std::cout << "Bad value!" << std::endl;
            }
        }
    }
    return 0;
}
