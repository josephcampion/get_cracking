

def check_permutation(str1, str2):
    if (len(str1) != len(str2)):
        return False

    str1 = ''.join(sorted(str1))
    str2 = ''.join(sorted(str2))

    print(str1)
    print(str2)

    for i in range(len(str1)):
        if str1[i] != str2[i]:
            return False

    return True


a1 = "abc"
b1 = "cba"
print(check_permutation(a1, b1))

a1 = "abcd"
b1 = "cba"
print(check_permutation(a1, b1))

a1 = "abc"
b1 = "cbb"
print(check_permutation(a1, b1))

a1 = ""
b1 = "cba"
print(check_permutation(a1, b1))


