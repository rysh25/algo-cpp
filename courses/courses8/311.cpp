#include <bits/stdc++.h>

using namespace std;

const int INF = 1 << 20;

int main()
{
    int N, M;
    cin >> N >> M;

    int A[N];

    vector<vector<int>> dp(N + 1, vector<int>(M + 1, INF));

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    dp[0][0] = 0;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M + 1; j++)
        {
            if (j >= A[i])
            {
                dp[i + 1][j] = min(dp[i][j - A[i]] + 1, dp[i][j]);
            }
            else
            {
                dp[i + 1][j] = dp[i][j];
            }
        }
    }

    cout << (dp[N][M] >= INF ? -1 : dp[N][M]) << endl;
    return 0;
}
