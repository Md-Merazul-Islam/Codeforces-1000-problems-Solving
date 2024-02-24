#include <iostream>
#include <string>

int findDifferentCharacterIndex(const std::string &S)
{
    char firstChar = S[0];

    if (S[0] != S[1] && S[1] == S[2])
    {
        return 1;
    }

    for (int i = 1; i < S.length(); ++i)
    {
        if (S[i] != firstChar)
        {
            return i + 1;
        }
    }
    return -1;
}

int main()
{
    std::string S;
    std::cin >> S;

    int result = findDifferentCharacterIndex(S);
    std::cout << result << std::endl;

    return 0;
}
