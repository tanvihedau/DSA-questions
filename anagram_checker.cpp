#include <iostream>
#include <string>
#include <vector>
#include <cctype>

bool areAnagrams(const std::string& str1, const std::string& str2) {
    // If the lengths of the strings are not equal, they cannot be anagrams
    if (str1.length() != str2.length()) {
        return false;
    }

    // Create a frequency vector for characters
    std::vector<int> charCount(256, 0);

    // Increment the count for characters in str1
    for (char c : str1) {
        if (!isspace(c)) {
            charCount[std::tolower(c)]++;
        }
    }

    // Decrement the count for characters in str2
    for (char c : str2) {
        if (!isspace(c)) {
            charCount[std::tolower(c)]--;
        }
    }

    // If all values in the frequency vector are 0, the strings are anagrams
    for (int count : charCount) {
        if (count != 0) {
            return false;
        }
    }

    return true;
}

int main() {
    std::string string1 = "Listen";
    std::string string2 = "Silent";
    
    if (areAnagrams(string1, string2)) {
        std::cout << "'" << string1 << "' and '" << string2 << "' are anagrams." << std::endl;
    } else {
        std::cout << "'" << string1 << "' and '" << string2 << "' are not anagrams." << std::endl;
    }

    std::string string3 = "Hello";
    std::string string4 = "World";

    if (areAnagrams(string3, string4)) {
        std::cout << "'" << string3 << "' and '" << string4 << "' are anagrams." << std::endl;
    } else {
        std::cout << "'" << string3 << "' and '" << string4 << "' are not anagrams." << std::endl;
    }

    return 0;
}