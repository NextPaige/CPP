#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using std::vector;
using std::string;

vector<string> split(const string& s)
{
    vector<string> ret;
    typedef string::size_type string_size;
    string_size blank = 0;

    while (blank != s.size())
    {
        // 범위의 문자는 모두 공백
        while (blank != s.size() && isspace(blank))
        {
            blank++;
        }

        // 순서상 다음 단어의 끝을 찾음
        string_size nonBlank = blank;

        // 범위의 문자는 공백이 아님.
        while (nonBlank != s.size() && !isspace(s[nonBlank]))
        {
            nonBlank++;
        }

        // 공백이 아닌 문자들을 찾았을 때
        if (blank != nonBlank)
        {
            ret.push_back(s.substr(blank, nonBlank - blank));
            blank = nonBlank;
        }
    }
    return ret;
}