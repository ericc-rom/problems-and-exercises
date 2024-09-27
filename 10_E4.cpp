#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin("V10_S3_E4.txt");
    if (!fin)
    {
        cout << "Nu s-a putut deschide fișierul BAC.TXT" << endl;
        return 1;
    }
    int n;
    fin >> n;
    for (int i = 0; i < n; i++)
    {
        int numar;
        fin >> numar;
        int p = 1;
        while (p < numar)
        {
            p *= 2;
        }

        cout << p << " ";
    }
    return 0;
}
