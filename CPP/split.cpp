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
        // ������ ���ڴ� ��� ����
        while (blank != s.size() && isspace(blank))
        {
            blank++;
        }

        // ������ ���� �ܾ��� ���� ã��
        string_size nonBlank = blank;

        // ������ ���ڴ� ������ �ƴ�.
        while (nonBlank != s.size() && !isspace(s[nonBlank]))
        {
            nonBlank++;
        }

        // ������ �ƴ� ���ڵ��� ã���� ��
        if (blank != nonBlank)
        {
            ret.push_back(s.substr(blank, nonBlank - blank));
            blank = nonBlank;
        }
    }
    return ret;
}