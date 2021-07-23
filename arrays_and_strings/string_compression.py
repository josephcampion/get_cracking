
# from hash_table import HashTable

def string_compression(s):

    s2 = ""

    same_letter = False
    letter_cnt = 1

    for i in range(len(s)-1):
        # print(s[i])
        if s[i] == s[i+1]:
            # print(s[i])
            same_letter = True
            letter_cnt = letter_cnt + 1
        else:
            s2 = s2 + s[i] + str(letter_cnt)
            letter_cnt = 0
        # print(s2)
    s2 = s2 + s[i] + str(letter_cnt)

    if len(s2) > len(s1):
        return s1
    return s2
        





# def create_ht(str):
#     ht = HashTable(25)

#     for c in str:
#         val = ht.get_val(c)
#         if val == "No record found":
#             ht.set_val(c, 1)
#         else:
#             ht.set_val(c, val+1)

#     return ht

s1 = "aabcccccaaa"
print(string_compression(s1))

s1 = "abca"
print(string_compression(s1))
