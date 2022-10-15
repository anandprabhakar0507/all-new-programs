#include <bits/stdc++.h>
using namespace std;

void removeDup(char *s)
{
    if (s[0] == '\0')
        return;
    removeDup(s + 1);
    if (s[0] == s[1])
    {
        int i;
        for (i = 0; s[i] != '\0'; i++)
        {
            s[i] = s[i + 1];
        }
        s[i] = '\0';
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char s[10000];
        cin >> s;
        removeDup(s);
        cout << s << endl;
    }
    return 0;
}
