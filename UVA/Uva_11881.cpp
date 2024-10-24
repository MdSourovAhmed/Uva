#include <bits/stdc++.h>
using namespace std;
const double ep = 1e-7;
int n;
vector<double> cf(10000);
double chk(double v)
{
    double ans = cf[0];
    for (int i = 1; i <= n; ++i)
    {
        // ans += cf[i] / (double)v;
        ans += (cf[i] / (double)pow(v, i));
    }
    return ans;
}

int main()
{
    while (~scanf("%d", &n) && n)
    {
        for (int i = 0; i <= n; ++i)
            cin >> cf[i];
        double l = 0.000001, r = 1000000.0, mid, ans = -1.0;
        while (r > l)
        {
            mid = (l + r) / 2.0;
            double a = chk(mid);
            if (a > ep)
                l = mid;
            else if (a < -ep)
                r = mid;
            else
            {
                ans = mid - 1;
                break;
            }
        }
        (ans == -1.0) ? puts("No") : printf("%0.2lf\n", ans);
    }
}

// 8
// -13 7 3 10 9 2 4 5 7
// 5
// -1 6 8 1 1 10
// 5
// -5 9 9 4 4 1
// 8
// -14 6 4 1 3 4 8 10 2
// 10
// -2 10 1 5 7 9 1 4 7 10 5
// 7
// -14 1 6 9 10 1 4 2
// 1
// -5 7
// 4
// -5 1 9 2 2
// 1
// -8 3
// 2
// -10 9 8
// 6
// -5 2 2 1 8 8 2
// 8
// -15 10 9 5 6 10 5 10 8
// 10
// -4 8 9 7 10 9 1 2 10 5 3
// 10
// -10 4 3 1 4 10 10 5 9 4 7
// 10
// -6 2 9 7 3 7 7 6 6 5 2
// 5
// -10 4 9 6 8 1
// 5
// -10 4 9 2 9 10
// 4
// -14 9 9 2 8
// 9
// -3 8 6 5 6 2 2 2 8 5
// 8
// -7 8 8 7 7 8 4 8 3
// 2
// -5 2 2
// 5
// -2 2 3 8 1 4
// 2
// -3 9 8
// 6
// -12 9 9 1 3 6 2
// 2
// -4 10 8
// 0

// 0.45
// 6.15
// 1.64
// 0.27
// 4.22
// 0.28
// 0.40
// 0.59
// -0.63
// 0.45
// 0.53
// 0.54
// 2.05
// 0.42
// 0.82
// 0.51
// 0.52
// 0.39
// 2.44
// 1.11
// -0.14
// 1.41
// 2.72
// 0.49
// 2.14
