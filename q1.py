# -- coding: utf-8 --
"""

Created on Fri May 28 11:34:27 2021

@author: raven90

"""
#1. 1부터 50까지 3, 6, 9 게임의 결과를 출력하는 프로그램을 함수를 이용하여 작성하시오.
# (3, 6, 9 숫자가 한번 들어갈 경우에는 ""을 출력하며, 3, 6, 9 숫자가 두번 들어갈 경우에는 "*" 을 출력한다.
# 그리고 3, 6, 9 숫자가 들어가지 않을 경우에는 숫자를 표시한다.)
# 3 6 9 게임
# 1 = 1 2 = 2 3 = * 4 = 4 5 = 5
# 6 = 7 = 7 8 = 8 9 = 10 = 10
#11 = 11 12 = 12 13 = * 14 = 14 15 = 15
#16 = 17 = 17 18 = 18 19 = 20 = 20
#21 = 21 22 = 22 23 = * 24 = 24 25 = 25
#26 = 27 = 27 28 = 28 29 = 30 = *
#31 = 32 = 33 = * 34 = 35 = *
#36 = * 37 = 38 = 39 = * 40 = 40
#41 = 41 42 = 42 43 = * 44 = 44 45 = 45
#46 = 47 = 47 48 = 48 49 = 50 = 50

def game369(num1, num2):
    counter=0
    tmpStr=""
    for i in range(num1, num2+1):
        chk = False # 초기화
        counter +=1
        tmpStr2 ="" # 초기화
        if counter >1 :
            tmpStr += "\t"
        # 몫 구하기
        mok = i // 10
        if(mok == 3 or mok == 6 or mok ==9):
            chk = True
        if chk == True :
            tmpStr2 = "*"
            chk = False # 초기화
            
        # 나머지 구하기
        na = i % 10
        if(na == 3 or na == 6 or na ==9):
            chk = True
        if chk == True :
            tmpStr2 += "*"
            chk = False
            
        tmpStr += ('%2d' % i) + " = "
        if tmpStr2 != "":
            tmpStr += tmpStr2
        else :
            tmpStr += ('%2d' % i)
        if counter == 5 or i==num2 :
            print(tmpStr)
            tmpStr=""
            counter = 0


if __name__ == '__main__':
    game369(1, 50)
    
