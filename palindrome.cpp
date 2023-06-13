#include "palindrome.h"
#include <cctype>

using namespace std;

/**
 * Strip away all non-aphabetic chracters and convert all
 * upper-case characters to lower-case.
 */
string preprocess (string phrase) 
{
  string result;
  for (unsigned i = 0; i < phrase.length(); ++i)
  {
    char c = phrase[i];
    if (isalpha(c))
    {
      if (isupper(c))
      {
        c = c - 'A' + 'a';
      }
      result += c;
    }
  }
  return result;
}


bool isAPalindromeRecursive (string phrase)
{
  /** Your code here */
}


bool isAPalindrome (string phrase)
{
  string phrase2 = preprocess(phrase);
  return isAPalindromeRecursive(phrase2);
}
