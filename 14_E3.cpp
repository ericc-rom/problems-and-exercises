#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin("V14_S3_E3.txt");
    if (!fin)
    {
        cout << "Eroare la citirea fisierului" << endl;
    }
    int numar;
    int k = 0;
    while (fin >> numar)
    {
        if (k > 0 && k % 5 == 0)
        {
            cout << endl;
        }
        cout << numar << " ";
        k++;
    }
    return 0;
}
