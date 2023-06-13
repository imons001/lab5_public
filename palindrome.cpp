#include "palindrome.h"
#include <cctype>
#include <string>

using namespace std;

/**
 * Strip away all non-alphabetic characters and convert all
 * upper-case characters to lower-case.
 */
string preprocess(string phrase) {
  string result;
  for (unsigned i = 0; i < phrase.length(); ++i) {
    char c = phrase[i];
    if (isalpha(c)) {
      if (isupper(c)) {
        c = tolower(c);
      }
      result += c;
    }
  }
  return result;
}

bool isAPalindromeRecursive(string phrase) {
  if (phrase.length() <= 1) {
    return true;
  } else if (phrase.front() == phrase.back()) {
    return isAPalindromeRecursive(phrase.substr(1, phrase.length() - 2));
  } else {
    return false;
  }
}

bool isAPalindrome(string phrase) {
  string processedPhrase = preprocess(phrase);
  return isAPalindromeRecursive(processedPhrase);
}
