
from hash_table import HashTable

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

def check_permutation_ht(str1, str2):
    print(str1, str2)

    ht1 = create_ht(str1)
    ht2 = create_ht(str2)
    
    for c in str1:
        v1 = ht1.get_val(c)
        v2 = ht2.get_val(c)
        if v1 != v2:
            return False

    for c in str2:
        v1 = ht1.get_val(c)
        v2 = ht2.get_val(c)
        if v1 != v2:
            return False

    return True
    
def create_ht(str):
    ht = HashTable(25)

    for c in str:
        val = ht.get_val(c)
        if val == "No record found":
            ht.set_val(c, 1)
        else:
            ht.set_val(c, val+1)

    return ht


a1 = "abc"
b1 = "cba"
print(check_permutation_ht(a1, b1))

a1 = "abcd"
b1 = "cba"
print(check_permutation_ht(a1, b1))

a1 = "abc"
b1 = "cbb"
print(check_permutation_ht(a1, b1))

a1 = ""
b1 = "cba"
print(check_permutation_ht(a1, b1))

