#include <bits/stdc++.h>

using namespace std;

int sum_n(int n)
{

    if (n == 1)
    {
        return 1;
    }

    return n + sum_n(n - 1);
}

int main()
{

    cout << sum_n(100);
    return 0;
}