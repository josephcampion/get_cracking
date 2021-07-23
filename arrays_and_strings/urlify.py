

import copy

def urlify(a, n):

    s1 = strip_ends(a)
    s2 = ""

    for i in range(len(s1)):
        if s1[i] != ' ':
            s2 = s2 + s1[i]
            print("1")
        elif i > 0 and s1[i-1] != ' ':
            s2 = s2 + "%20"
            print("2")
        print(s2)

    return s2

def strip_ends(s):

    front_space_cnt = 0
    for i in range(len(s)):
        if s[i] == ' ':
            front_space_cnt = front_space_cnt + 1
        else:
            break

    end_space_cnt = 0

    for i in range(len(s) - 1, 0, -1):
        if s[i] == ' ':
            end_space_cnt = end_space_cnt + 1
        else:
            break

    return s[front_space_cnt:len(s) - end_space_cnt]


# s = "     dummy    string    "
s = "Mr    John    Smith    "
urlify(s, len(s))

# print(strip_ends(s))


