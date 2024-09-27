#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin("V42_E4_S3.txt");
    if (!fin)
    {
        cout << "Eroare la deschiderea fisierului" << endl;
        return 1;
    }

    int n;
    fin >> n;

    if (n <= 0 || n >= 100000)
    {
        cout << "Numarul de elemente nu este valid" << endl;
        return 1;
    }
    int nr[100];
    for (int i = 0; i < n; ++i)
        fin >> nr[i];

    fin.close();

    cresc = 1;
    for (int i = 1; i < n; ++i)
        if (nr[i] <= nr[i - 1])
        {
            cresc = false;
            break;
        }
    if (cresc)
        cout << "DA" << endl;
    else
        cout << "NU" << endl;

    return 0;
}
