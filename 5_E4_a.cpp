#include <iostream>
using namespace std;
int f(int a)
{
    int i = 2;
    while (a % i != 0)
        i++;
    return i;
}
int main()
{
    int a;
    cin >> a;
    cout << f(a);
    return 0;
}