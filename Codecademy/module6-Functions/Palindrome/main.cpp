#include <iostream>

// Define is_palindrome() here:
bool is_palindrome(std::string text);

int main()
{

    std::cout << is_palindrome("madam") << "\n";
    std::cout << is_palindrome("ada") << "\n";
    std::cout << is_palindrome("lovelace") << "\n";
}

bool is_palindrome(std::string text)
{
    for (int i = 0; i < (int)text.length(); i++)
    {
        if (text[i] == text[(int)text.length() - i])
        {
            return false;
        }
    }
    return true;
}