'''
#2 Remove Character
Given two strings string1 and string2, remove those characters from first string(string1) 
which are present in second string(string2).
Topic: Array
Level: Easy
'''


# Python3 program to remove common characters from two strings
def remove_common_characters(str1, str2):
    result = ""

    for char in str1:
        if char not in str2:
            result += char
    return result 

# def remove_common_characters(string1, string2):
#     return "".join([char for char in string1 if char not in string2])

str1 = input("Enter the first string: ")
str2 = input("Enter the second string: ")
print("String after removing characters:", remove_common_characters(str1, str2))
