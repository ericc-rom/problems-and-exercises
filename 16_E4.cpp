#include <iostream>
#include <fstream>
using namespace std;
int cifrak(int n, int k)
{
    int j = 0;
    while (n > 0)
    {
        if (n % 10 == k)
        {
            j++;
        }
        n /= 10;
    }
    return j;
}

int main()
{
    ifstream fin("V16_S3_E4.txt");
    int numar;
    if (!fin)
        return 1;
    while (fin >> numar)
    {
        if (cifrak(numar, 0) == 3)
            cout << numar << " ";
    }
    return 0;
}
