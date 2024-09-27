#include <iostream>
using namespace std;
#include <fstream>
using namespace std;
int main()
{
    ifstream f("V1_S3_E3.txt");
    unsigned int n, x, p = 0;
    do
    {
        cout << "Introduceti un numar natural mai mic sau egal cu 999: ";
        cin >> n;
    }while (n > 999);
    while (f >> x)
    {
        if (x % n == 0)
        {
            cout << x << " ";
            p = 1;
        }
    }
    if (p == 0)
        cout << "NU EXISTA";
    return 0;
}

