//
//  main.cpp
//  Palindrome
//
//  Created by David Brookwell-Reuber on 11-10-27.
//  Copyright 2011 Grant MacEwan University. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;

bool isPalindrome(char * str, int first, int last){
    if ((last-first) <= 1) return true;
    return (str[first]==str[last] && isPalindrome(str,first+1,last-1);
}

int main (int argc, const char * argv[])
{   char word[100];

cout << "Please enter a word; ';' to stop \n";
    cin >> word;
    while (word[0] != ';'){
        if (isPalindrome(word, 0, strlen)
    }


}

