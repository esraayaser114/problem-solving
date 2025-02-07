# lin; this kata is : https://www.codewars.com/kata/57a77726bb9944d000000b06/train/python
def mango(qu, pr):
    if qu==pr:
        return qu+pr
    else:
        return (qu-(qu//3))*pr
    
