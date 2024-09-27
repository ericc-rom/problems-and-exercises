int suma(int v[], int n, int i, int j)
{
    int s = 0;
    for (int k = i; k <= j; k++)
        s += v[k - 1];
    return s;
}
