#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin("V33_E4_S3.txt");
    int n, m;
    fin >> n >> m;
    int numere[10000];
    for (int i = 0; i < n; i++)
        fin >> numere[i];
    fin.close();
    int smax = 0;
    for (int i = n - m; i < n; i++)
        smax += numere[i];
    cout << smax << endl;
    return 0;
}
