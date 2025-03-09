# link this kata is : https://www.codewars.com/kata/57a2013acf1fa5bfc4000921/train/python
def find_average(n):
    if not n:
        return 0
    return sum(n)/len(n)
