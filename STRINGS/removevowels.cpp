#include <iostream>
#include <string>

// Function to check if a character is a vowel
bool isVowel(char c)
{
    // Convert character to lowercase
    c = tolower(c);
    // Check if the character is a vowel
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

// Function to remove vowels from a given string
std::string removeVowels(const std::string &str)
{
    std::string result;
    for (char c : str)
    {
        // Append the character if it's not a vowel
        if (!isVowel(c))
        {
            result += c;
        }
    }
    return result;
}

int main()
{
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    std::string output = removeVowels(input);
    std::cout << "String after removing vowels: " << output << std::endl;

    return 0;
}
