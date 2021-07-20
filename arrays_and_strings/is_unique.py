

def is_unique(s):
    for i in range(len(s) - 1):
        for j in range(len(s) - i - 1):
            # print("i,j:", i, j+i+1)
            if (s[i] == s[j+i+1]):
                return False
    return True



print(is_unique("abcd"))
print(is_unique("abba"))
print(is_unique("abcdefa"))
print(is_unique("a"))
print(is_unique(""))
print()

def is_unique_nlogn(s):
    s = ''.join(sorted(s))
    print(s)

    for i in range(len(s)-1):
        if s[i] == s[i+1]:
            return False
    return True

print(is_unique_nlogn("abcd"))
print(is_unique_nlogn("abba"))
print(is_unique_nlogn("abcdefa"))
print(is_unique_nlogn("a"))
print(is_unique_nlogn(""))
        
