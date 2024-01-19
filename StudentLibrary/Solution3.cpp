#include "Solution3.h"
#include <vector>
#include <algorithm>
#include <stdexcept>
#include <cctype> 
// Don't fortget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_3

void Solution3::SetWords(const std::vector<std::string>& _words)
{
	words = _words;
}

void Solution3::SortWords() {
    if (words.empty()) {
        throw std::logic_error("The vector is null or empty.");
    }

    // Convert each word to lowercase before sorting
    std::transform(words.begin(), words.end(), words.begin(),
        [](std::string& word) {
            std::transform(word.begin(), word.end(), word.begin(), [](unsigned char c) {
                return std::tolower(c);
                });
            return word;
        });

    // Sort the words
    std::sort(words.begin(), words.end());
}
 
std::vector<std::string> Solution3::GetSortedWords() const
{
	return words;
}

#endif
