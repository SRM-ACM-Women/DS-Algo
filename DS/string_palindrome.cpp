// cpp implementation to check if a string is palindrome or not
//A palindrome is a word, number, phrase, or other sequence of characters which reads the same backward as forward

#include <bits/stdc++.h>
using namespace std;

void isPalindrome(char str[]) 
{  
    int l = 0; 
    int h = strlen(str) - 1; 
  
    //comparing characters from beginning and end to check if they are the same.
    while (h > l) 
    { 
        if (str[l++] != str[h--]) 
        { 
            cout<<str<<" is not a Palindrome"<<endl; 
            return; 
        } 
    } 
    cout<<str<<" is a palindrome"<<endl; 
} 
  
// sample string to test if the algo above works 
int main() 
{ 
    isPalindrome("spoon"); 
    isPalindrome("noon"); 
    isPalindrome("moon"); 
    isPalindrome("racecar");
    return 0; 
}
