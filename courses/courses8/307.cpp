#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    // int A[N];
    // vector<int> dp(N + 1, 0);
    int dp = 0;

    // for (int i = 0; i < N; i++)
    //     cin >> A[i];

    for (int i = 0; i < N; i++)
    {
        int A;
        cin >> A;
        dp = max(dp + A, dp);
    }

    cout << dp << endl;
    return 0;
}
