#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin("V40_E3_S3.txt");
    int n;
    fin >> n;
    int v[1000];
    for (int i = 0; i < n; i++)
        fin >> v[i];
    fin.close();

    int ultimulPar = -1;      
    int ultimulImpar = 10001; 

    int ok = 1;
    for (int i = 0; i < n && ok == 1; i++)
    {
        if (v[i] % 2 == 0)
        {
            if (ultimulPar != -1 && v[i] < ultimulPar)
                ok = 0;
            ultimulPar = v[i];
        }
        else
        {
            if (ultimulImpar != 10001 && v[i] > ultimulImpar)
                ok = 0;
            ultimulImpar = v[i];
        }
    }
    if (ok == 1)
        cout << "DA" << endl;
    else
        cout << "NU" << endl;
    return 0;
}
