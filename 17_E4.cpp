#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin("V17_S3_E4.txt");
    if (!fin)
        return 1;
    int nr;
    long long s = 0;
    int k = 0;
    while (fin >> nr)
    { 
        if (nr > 0)
        {     
            s += nr;
            k++;
        }
    }
    fin.close();
    if (k > 0)
        cout << s / k << endl;
    else
        cout << "NU EXISTA" << endl;
    return 0;
}
