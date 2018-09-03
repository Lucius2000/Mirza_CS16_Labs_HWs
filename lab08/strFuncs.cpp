#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <cctype>
#include "strFuncs.h"
using namespace std;
bool isPalindromeHelper(const char *s1, int len);


/* Precondition: Two valid strings s1 and s2, each containing a mix of alphabets, spaces and punctuations
 * Post condition: Return true if one string is an anagram of the other string. White spaces, punctuations and
 * the case for the letters (upper or lower) should not
 * affect your result
 */
bool isAnagram(string s1, string s2){
    transform(s1.begin(), s1.end(), s1.begin(),::tolower);
    transform(s2.begin(), s2.end(), s2.begin(),::tolower);
    string v1, v2;
    for (auto ch1:s1){
        if (isalpha(ch1))
            v1+=ch1;
    }
    s1 = v1;
    for (auto ch2 : s2){
        if (isalpha(ch2))
            v2 += ch2;
    }
    s2 = v2;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    return (s1 == s2);
}

/* Precondition: s1 is a valid string that may contain upper or lower case alphabets, no spaces or special characters
 * Postcondition: Returns true if s1 is a palindrome, false otherwise
 *You may provide a recursive OR non-recursive solution*/
bool isPalindrome(const string s1){
    string s2;
    for (auto ch:s1){
        s2 += tolower(ch);
    }
    char c_string[];
    strcpy(c_string, s2.c_str());
    int length = s1.length();
    return isPalindromeHelper(c_string,length);
}

bool isPalindromeHelper(const char *s1, int len){
    if (len<=1)
        return true;
    if (arr[0] == arr[len-1])
        return isPalindromeHelper(arr+1, len-2);
    else
        return false;
}

/* Precondition: s1 is a valid C-string that may contain upper or lower case alphabets, no spaces or special characters
 * Postcondition: Returns true if s1 is a palindrome, false otherwise
 *You MUST provide a recursive implementation and are recommended to write a helper function where the recursion actually takes place*/



bool isPalindrome(const char *s1){
    // Initialize the length of the c-string variable;
    int length = strlen(s1);
    char *s2;
    //make all chars to lowercase;
    for (int i=0; i<length; i++){
        s2[i] = tolower(s1[i]);
    }
    /*uncomment if need to remove the puncts
     string s2;
     for (int i=0; i<length; i++)
     if (isalpha(s1[i]))
     s2 += s1[i];*/
    
    return isPalindromeHelper(s2, length);
}

/* Precondition: s1 is a valid C-string that may contain upper or lower case alphabets, no spaces or special characters
 * Postcondition: Returns true if s1 is a palindrome, false otherwise
 *You MUST provide an iterative implementation */
bool isPalindromeIterative(const char *s1){
    // Initialize the length of the c-string variable;
    int length = strlen(s1);
    //make all chars to lowercase;
    char *s2;
    for (int i=0; i<length; i++)
        s2[i]= tolower(s1[i]);
    
    int first = 0;
    int last = length -1;
    while (first<last){
        if (s2[first++] != s2[last--]){
            return false;
        }
    }
    return true;
}



