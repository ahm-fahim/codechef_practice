#include <iostream>
#include <string>
using namespace std;

bool isVowel(char ch)
{
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

string isEasyToPronounce(string s)
{
    int cons = 0;

    for (char ch : s)
    {
        if (!isVowel(ch))
        {
            cons++;
            if (cons >= 4)
            {
                return "NO";
            }
        }
        else
        {
            cons = 0;
        }
    }

    return "YES";
}

int main()
{
    int T;
    cin >> T; // Number of test cases

    for (int t = 0; t < T; t++)
    {
        int N;
        cin >> N; // Length of string

        string S;
        cin >> S; // Input string

        string result = isEasyToPronounce(S);
        cout << result << endl;
    }

    return 0;
}
