#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, W;
    cin >> N >> W;

    int w[N], v[N];

    vector<vector<int>> dp(N + 1, vector<int>(W + 1, 0));

    for (int i = 0; i < N; i++)
    {
        cin >> w[i] >> v[i];
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < W + 1; j++)
        {
            if (j >= w[i])
            {
                dp[i + 1][j] = max(dp[i][j - w[i]] + v[i], dp[i][j]);
            }
            else
            {
                dp[i + 1][j] = dp[i][j];
            }
        }
    }

    cout << dp[N][W] << endl;
    return 0;
}
