#include <iostream>
#include <fstream>
using namespace std;

void sterge(int &n, int v[])
{
    if (n == 0)
        return;
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == 0 || v[i] != v[i - 1])
            v[j++] = v[i];
    }
    n = j;
}

int main()
{
    ifstream fin("V26_E4_S3.txt");
    int n;
    fin >> n;
    int v[100];
    for (int i = 0; i < n; i++)
        fin >> v[i];
    fin.close();
    sterge(n, v);
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
    return 0;
}
