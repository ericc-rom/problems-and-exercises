#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin("V24_E3_S3.txt"); 
    int n, a, b;
    fin >> n;      
    fin >> a >> b; 
    int numar, min = 10000;
    bool gasit = false;     
    for (int i = 0; i < n; i++)
    {
        fin >> numar;
        if (numar >= a && numar <= b && numar >= 0)
        {
            if (numar < min)
            {                     
                min = numar;
                gasit = true;
            }
        }
    }
    fin.close();
    if (gasit)
        cout << min << endl;
    else
        cout << "NU" << endl;
    return 0;
}
