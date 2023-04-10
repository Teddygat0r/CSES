#include <bits/stdc++.h>

using namespace std;

long long solve(long long row, long long column)
{
    long long val = 0;
    if (row >= column)
    {
        if (row % 2 == 1)
            val = (row - 1) * (row - 1) + column;
        else
            val = row * row - column + 1;
    }
    else
    {
        if (column % 2 == 1)
            val = column * column - row + 1;
        else
            val = (column - 1) * (column - 1) + row;
    }
    return val;
}

int main()
{
    int length, len = 0;
    cin >> length;

    for (int i = 0; i < length; i++)
    {
        long long row, column;
        cin >> row;
        cin >> column;
        long long val = solve(row, column);

        cout << val << "\n";
    }
    long long count = 0;
    for (int i = 1; i <= len; i++)
    {
        if (i % 2 == 1)
        {
            for (int j = 1; j < i; j++)
            {
                long long sol = solve(i, j);
                //cout << sol << " ";
                count += 1;
                if (sol != count)
                {
                    cout << "\n\n\nBAD " << i << " " << j << "\n\n\n";
                }
            }
            for (int j = i; j > 0; j--)
            {
                long long sol = solve(j, i);
                //cout << sol << " ";
                count += 1;
                if (sol != count)
                {
                    cout << "\n\n\nBAD " << j << " " << i << "\n\n\n";
                }
            }
        }
        else
        {
            for (int j = 1; j < i; j++)
            {
                long long sol = solve(j, i);
                //cout << sol << " ";
                count += 1;
                if (sol != count)
                {
                    cout << "\n\n\nBAD " << j << " " << i << "\n\n\n";
                }
            }
            for (int j = i; j > 0; j--)
            {
                long long sol = solve(i, j);
                //cout << sol << " ";
                count += 1;
                if (sol != count)
                {
                    cout << "\n\n\nBAD " << i << " " << j << "\n\n\n";
                }
            }
        }
        //cout << "\n";
    }
}
