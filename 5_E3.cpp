#include <fstream>
#include <iostream>
using namespace std;
ofstream fin("nr.txt");
void main()
{
    int n, f;
    cin >> n;
    while (n)
    {
        f << n << " ";
        n = n / 10;
    }
    return n;
}