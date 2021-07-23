
from hash_table import HashTable

def palindrome_permutation(word):

    word = word.lower()

    ht = create_ht(word)

    # print(ht)

    odd_cnt = 0
    for c in word:
        v = ht.get_val(c)
        if v % 2 != 0:
            odd_cnt = odd_cnt + 1
        if odd_cnt > 1:
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

# def is_palindrome(s):

#     for i in range(len(s) // 2):
#         print(s[i], s[len(s) - i - 1])
#         if s[i] != s[len(s) - i - 1]:
#             return False

#     return True



# s = "abba"
# print(is_palindrome(s))
# s = "tacocat"
# print(is_palindrome(s))
# s = "tacocat "
# print(is_palindrome(s))
# s = "abbafadew"
# print(is_palindrome(s))
# s = ""
# print(is_palindrome(s))
# s = "a"
# print(is_palindrome(s))




s = "abba"
print(palindrome_permutation(s))

s = "tacocat"
print(palindrome_permutation(s))
s = "tacocta"
print(palindrome_permutation(s))
s = "caoctat"
print(palindrome_permutation(s))

s = "tacocat "
print(palindrome_permutation(s))

s = "abbafadew"
print(palindrome_permutation(s))

s = ""
print(palindrome_permutation(s))
s = "a"
print(palindrome_permutation(s))
