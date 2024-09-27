#include <iostream>
#include <fstream>
using namespace std;

bool estePrim(int numar)
{
    if (numar < 2)
        return false;
    for (int i = 2; i <= numar / 2; i++)
    {
        if (numar % i == 0)
            return false;
    }
    return true;
}

int main()
{
    ifstream fin("V11_S3_E4.txt");
    int n;
    fin >> n;
    int numar, k = 0;
    for (int i = 0; i < n; i++)
    {
        fin >> numar;
        if (estePrim(numar))
            k++;
    }
    cout << k << endl;
    return 0;
}
