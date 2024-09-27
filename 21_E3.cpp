#include <iostream>
#include <cmath>

int estePrim(int x)
{
    if (x < 2)
        return 0;
    if (x == 2 || x == 3)
        return 1;
    if (x % 2 == 0 || x % 3 == 0)
        return 0;
    for (int i = 5; i * i <= x; i += 6)
    {
        if (x % i == 0 || x % (i + 2) == 0)
            return 0;
    }
    return 1;
}

int i_prim(int n)
{
    int p1, p2;
    p1 = n;
    while (p1 > 1 && !estePrim(p1))
        p1--;
    p2 = n;
    while (!estePrim(p2))
        p2++;
    return p2 - p1;
}

int main()
{
    int n;
    std::cin >> n;
    int diferenta = i_prim(n);
    std::cout << "Diferenta minima p2 - p1 este: " << diferenta << std::endl;
    return 0;
}
