#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin("V15_S3_E4.in");
    int nr;
    int ui = -1;
    while (fin >> nr)
    {
        if (nr % 2 != 0)
            ui = nr;
    }
    fin.close();
    if (ui != -1)
        cout << ui << endl; 
    else
        cout << "Nu exista numere impare" << endl;
    return 0;
}
