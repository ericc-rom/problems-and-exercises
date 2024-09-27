#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("V4_E3_S3.txt");
int main()
{
    int n;
    fin >> n;
    while (n)
    {
        cout << n << " ";
        n /= 10;
    }
    return 0;
}