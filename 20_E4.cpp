#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin("V20_S3_E4.txt");
    if (!fin)
        return 1;
    int nr[90];
    int n = 0;
    while (fin >> nr[n])
        n++;

    fin.close();
    for (int i = 0; i <= n - 4; i++)
    {
        if (nr[i] > nr[i + 1] && nr[i + 1] > nr[i + 2] && nr[i + 2] > nr[i + 3])
        {
            cout << nr[i] << " " << nr[i + 1] << " " << nr[i + 2] << " " << nr[i + 3] << endl;
            return 0;
        }
    }
    cout << "NU EXISTA" << endl;

    return 0;
}
