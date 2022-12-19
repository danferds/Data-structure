#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
    char s[100];
    cin.getline(s, 100);
    cout << s[0];

    for (int i = 1; s[i]; i++)
    {
        while (s[i] == ' ' && s[i - 1] == s[i + 1] &&
               (s[i - 1] == 'a' || s[i - 1] == 'e' || s[i - 1] == 'i' || s[i - 1] == 'o' || s[i - 1] == 'u'))
        {
            i += 2;
        }
        cout << s[i];
    }

    return 0;
}