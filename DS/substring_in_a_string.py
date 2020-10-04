#python implementation to check if a given substring is a part of a string.

# this function checks if the smaller string is present in the bigger string 
def check(s, sub_s): 
    if (s.find(sub_s) == -1): 
        print("No") 
    else: 
        print("Yes")
# Sample string list to check algorithm
s = "SRM_ACM_Women"
sub_s ="Women"
check(s, sub_s) 
