#include <bits/stdc++.h>

using namespace std;

int *MergeArray(int *a,int n,int *b, int m)
{

    int *p = new int[n + m];
    int i = 0, j = 0, k = 0;

    while (i <= n - 1 && j <= m - 1)
    {

        if (a[i] > b[j])
        {

            p[k++] = b[j++];
        }
        else
        {
            p[k++] = a[i++];
        }
    }

    while (i <= n - 1)
    {

        p[k++] = a[i++];
    }

    while (j <= m - 1)
    {

        p[k++] = b[j++];
    }

    return p;
}

void print(int *a, int n)
{

    for (int i = 0; i < n; i++)
    {

        cout << a[i] << " ";
    }
}
int main()
{

    int a[] = {5, 10, 35, 40, 50, 55, 60};

    int b[] = {11, 12, 20, 31, 70};

    int *p = MergeArray(a, 7, b, 5);

    print(p, 12);
}
