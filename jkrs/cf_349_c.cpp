#include <cstdio>
#include <cstring>
#include <algorithm>
#include <climits>
#include <cctype>
#include <map>
#include <list>
#include <functional>
#include <queue>
#include <cmath>
#include <set>
#include <stack>
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#define ff first
#define ss second
#define pu system("pause")
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

const double pi = acos(-1.0);
const ll inf = 0x7fffffff;
const ll mod = 1e9 + 7;

string s;

bool f[10010][5];

set <string> st;

int main()
{
    cin >> s;
    int len = s.length();
    f[len][2] = f[len][3] = 1;
    for (int i = len - 2;i > 4; -- i)
    {
        if (f[i + 2][2] && s.substr(i + 2,2) != s.substr(i,2) || f[i + 2][3])
        {
            f[i][2] = 1;
            st.insert(s.substr(i,2));
        }

        if (f[i + 3][3] && s.substr(i + 3,3) != s.substr(i,3) || f[i + 3][2])
        {
            f[i][3] = 1;
            st.insert(s.substr(i,3));
        }

    }
    printf("%d\n",st.size());
    for (set <string > :: iterator it = st.begin(); it != st.end(); ++ it)
        cout << *it << endl;
    return 0;
}
