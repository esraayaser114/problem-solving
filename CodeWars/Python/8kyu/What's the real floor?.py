#link this kata is : https://www.codewars.com/kata/574b3b1599d8f897470018f6/train/python
def get_real_floor(n):
    if n<=0: return n
    if n<13: return n-1
    if n>13: return n-2
