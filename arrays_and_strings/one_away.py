import copy
from hash_table import HashTable

def one_away(s1, s2):

    if s1 == s2:
        return True

    len_diff = len(s1) - len(s2)

    if abs(len_diff) > 1:
        return False

    if len_diff == 0:
        for i in range(len(s1)):
            if s1[i] != s2[i]:
                sc = s1[:i] + s2[i] + s1[i+1:]
                print(sc)
                if sc == s2:
                    return True
        return False


    elif len_diff > 0:
        # remove (s1)
        return check_replace(s1, s2)

    else:
        # insert (or remove from s2)
        return check_replace(s2, s1)


    return False

def remove_char(string, index):
    return string[:index] + string[index+1:]


# def one_away_ht(s1, s2):

#     ht1 = create_ht(s1)
#     ht2 = create_ht(s2)

#     diff_cnt = 0
#     for c in s1:
#         val = ht2.get_val(c)
#         if val == "No record found":
#             diff_cnt = diff_cnt + 1
        
def check_replace(s1, s2):
    for i in range(len(s1)):
            sc = remove_char(s1, i)
            # print(sc)
            if sc == s2:
                return True
    return False
    

s1 = "abcd"
s2 = "abcde"
print(one_away(s1, s2))
print(one_away(s2, s1))


s1 = "abcdef"
s2 = "abxdef"
print(one_away(s1, s2))
print(one_away(s2, s1))

s1 = "abcdef"
s2 = "abxdey"
print(one_away(s1, s2))
print(one_away(s2, s1))





