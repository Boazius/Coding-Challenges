#include <stack>
#include <algorithm>

void reverseInParentheses(std::string &s)
{
    std::stack<int> stk;

    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == '(')
        {
            stk.push(i);
        }
        else if (s[i] == ')')
        {
            if (!stk.empty())
            {
                int start = stk.top() + 1;
                int end = i - 1;
                stk.pop();

                while (start < end)
                {
                    std::swap(s[start++], s[end--]);
                }
            }
        }
    }
}

std::string solution(std::string inputString)
{
    // Reverse content within parentheses in the input string
    reverseInParentheses(inputString);

    // Remove parentheses from the string
    inputString.erase(std::remove(inputString.begin(), inputString.end(), '('), inputString.end());
    inputString.erase(std::remove(inputString.begin(), inputString.end(), ')'), inputString.end());

    return inputString;
}
