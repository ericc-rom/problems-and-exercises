#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin("V39_E3_S3.txt");
    int n;
    fin >> n;
    int nr;
    int ultimul_par = -1;
    int ok = 1;
    for (int i = 0; i < n; i++)
    {
        fin >> nr;
        if (nr % 2 == 0)
        {
            if (ultimul_par != -1 && nr < ultimul_par)
            {
                ok = 0;
                break;
            }
            ultimul_par = nr;
        }
    }

    fin.close();
    if (ok)
        cout << "DA" << endl;
    else
        cout << "NU" << endl;
    return 0;
}
