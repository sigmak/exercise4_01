# -- coding: utf-8 --
"""

Created on Fri May 28 11:34:27 2021

@author: raven90

"""

#4. 다음과 같이 콤마(,)로 구분된 정수를 입력받아 최대값과 최소값, 총합을 구하는
# 프로그램을 작성하시오.
def listMin(tmpList):
    return min(tmpList)

def listMax(tmpList):
    return max(tmpList)

def listSum(tmpList):
    return sum(tmpList)

#s = "국어,수학,정보,영어,체육"

#new_lst = s.split(",")

if __name__ == '__main__':
    inStrs = input("콤바(,)로 구분된 숫자들을 입력하세요: ")
    numList = [int(x) for x in inStrs.split(',')]
    print("최댓값 = " + str(listMax(numList)) )
    print("최솟값 = " + str(listMin(numList)) )
    print("총합 = " + str(listSum(numList)) )