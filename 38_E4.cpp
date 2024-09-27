#include <iostream>
#include <fstream>
using namespace std;

void inter(int &x, int &y)
{
    int k = x;
    x = y;
    y = k;
}

int main()
{
    ifstream fin("V38_E4_S3.txt");
    int n;
    fin >> n;
    int v[1000];
    for (int i = 0; i < n; i++)
        fin >> v[i];
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
            if (v[j] > v[j + 1])
                inter(v[j], v[j + 1]);
    }
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
    cout << endl;
    fin.close();
    return 0;
}
