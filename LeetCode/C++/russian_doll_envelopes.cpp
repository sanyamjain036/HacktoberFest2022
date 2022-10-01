#include <bits/stdc++.h>
using namespace std;

static bool comp(vector<int> &env1, vector<int> &env2)
{
    if (env1[0] == env2[0])
        return env1[1] > env2[1];
    return env1[0] < env2[0];
}

int maxEnvelopes(vector<vector<int>> &envelopes)
{
    sort(envelopes.begin(), envelopes.end(), comp);

    int max_len = 1;
    int n = envelopes.size();

    vector<int> dp(n, 1);

    vector<int> temp;
    temp.push_back(envelopes[0][1]);

    for (int i = 1; i < n; i++)
    {
        if (envelopes[i][1] > temp.back())
            temp.push_back(envelopes[i][1]);
        else
        {
            int ind = lower_bound(temp.begin(), temp.end(), envelopes[i][1]) - temp.begin();
            temp[ind] = envelopes[i][1];
        }
    }

    return temp.size();
}

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> envelopes;

    for (int i = 0; i < n; i++)
    {
        int w, h;
        cin >> w >> h;
        vector<int> temp;
        temp.push_back(w);
        temp.push_back(h);
        envelopes.push_back(temp);
    }

    cout << maxEnvelopes(envelopes) << endl;
    return 0;

}


// input format example
// [
//   4
// 5 4
// 6 4
// 6 7
// 2 3   ]



// output
//  ( 3 )