#include <bits/stdc++.h>
using namespace std;

int binarySearch(int A[], int low, int high, int x)
{
    if (low > high)
    {
        return -1;
    }

    int mid = low + (high - low) / 2;

    if (x == A[mid])
    {
        return mid;
    }
    else if (x < A[mid])
    {
        return binarySearch(A, low, mid -1, x);
    }
    else
    {
        return binarySearch(A, mid + 1, high, x);
    }
}

int main()
{
    int a[] = {2, 4, 6, 8, 30, 40, 50, 55, 65};

    int x = binarySearch(a, 0, 8, 30);

    cout << "Found Index Number :"<<x;
}

