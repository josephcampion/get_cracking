


def string_rotation(str1, str2):

    if len(str1) != len(str2):
        return False
    
    return is_substring(str1, str2 + str2)



def is_substring(str1, str2):

    if len(str1) > len(str2):
        return False

    for i in range(len(str2) - len(str1) + 1):
        # print(i)
        if str1 == str2[i:i+len(str1)]:
            return True
    
    return False

# str1 = "cde"
# str2 = "abcdef"
# print(is_substring(str1, str2))

str1 = "waterbottle"
str2 = "erbottlewat"
print(string_rotation(str1, str2))


