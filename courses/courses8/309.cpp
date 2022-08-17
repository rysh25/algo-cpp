#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    int A[N];

    vector<vector<bool>> dp(N + 1, vector<bool>(M + 1, false));

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    dp[0][0] = true;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M + 1; j++)
        {
            if (j >= A[i])
            {
                dp[i + 1][j] = dp[i][j - A[i]] | dp[i][j];
            }
            else
            {
                dp[i + 1][j] = dp[i][j];
            }
        }
    }

    cout << (dp[N][M] ? "Yes" : "No") << endl;
    return 0;
}
