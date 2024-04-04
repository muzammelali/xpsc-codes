#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int mat[n][m];

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cin >> mat[i][j];
            }
        }

        int max_sum = 0;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                int cur_sum = 0;
                int cr = i, cc = j;
                while (cr >= 0 && cr < n && cc >= 0 && cc < m)
                {
                    cur_sum += mat[cr][cc];
                    cr--;
                    cc--;
                }
                
                cr = i, cc = j;
                while (cr >= 0 && cr < n && cc >= 0 && cc < m)
                {
                    cur_sum += mat[cr][cc];
                    cr++;
                    cc--;
                }

                cr = i, cc = j;
                while (cr >= 0 && cr < n && cc >= 0 && cc < m)
                {
                    cur_sum += mat[cr][cc];
                    cr--;
                    cc++;
                }

                cr = i, cc = j;
                while (cr >= 0 && cr < n && cc >= 0 && cc < m)
                {
                    cur_sum += mat[cr][cc];
                    cr++;
                    cc++;
                }

                cur_sum -= mat[i][j] * 3;
                max_sum = max(max_sum, cur_sum);
            }
        }
        cout << max_sum << endl;
    }
    return 0;
}
