/*
#2 Remove Character
Given two strings string1 and string2, remove those characters from first string(string1) 
which are present in second string(string2).
Topic: Array
Level: Easy
*/

#include <iostream>
#include <string>
using namespace std;

string removeCommonCharacters(string str1, string str2)
{
    for (int i = 0; i < str1.length(); i++)
    {
        for (int j = 0; j < str2.length(); j++)
        {
            if (str1[i] == str2[j])
            {
                str1.erase(i, 1);
            }
        }
    }
    return str1;
}

int main()
{
    cout << "Enter your first string: ";
    string str1;
    getline(cin, str1);

    cout << "Enter your second string: ";
    string str2;
    getline(cin, str2);

    
    cout << "After removing common characters: " << removeCommonCharacters(str1, str2);
}
