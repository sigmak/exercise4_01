# -- coding: utf-8 --
"""

Created on Fri May 28 13:23:48 2021

@author: raven90

"""

# 참고 : https://shoark7.github.io/programming/algorithm/several-ways-to-solve-factorial-in-python
def factorial(n):
    ret = 1
    for i in range(1, n+1):
        ret *= i
    return ret
