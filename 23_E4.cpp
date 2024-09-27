#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin("V23_E4_S3.txt");
    int n;
    fin >> n;
    int a, b;
    int maxLength = 0;
    int bestA = 0, bestB = 0;

    for (int i = 0; i < n; i++)
    {
        fin >> a >> b;
        int length = b - a + 1;
        if (length > maxLength || (length == maxLength && b < bestB))
        {
            maxLength = length;
            bestA = a;
            bestB = b;
        }
    }
    fin.close();
    cout << bestA << " " << bestB << endl;
    return 0;
}