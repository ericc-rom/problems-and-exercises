#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin("V18_S3_E4.txt");
    if (!fin)
          return 1;
    int nr[90];
    int k = 0;
    while (fin >> nr[k])
        k++;
    fin.close();
    if (k < 4)
    {
        cout << "NU EXISTA" << endl;
        return 0;
    }
    bool gasit = false;
    for (int i = 0; i <= k - 4; i++)
    {
        if (nr[i] < nr[i + 1] && nr[i + 1] < nr[i + 2] && nr[i + 2] < nr[i + 3])
        {
            cout << nr[i] << " " << nr[i + 1] << " " << nr[i + 2] << " " << nr[i + 3] << endl;
            gasit = true;
            break;
        }
    }
    if (!gasit)
        cout << "NU EXISTA" << endl;
    return 0;
}
