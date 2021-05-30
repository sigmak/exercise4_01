# -*- coding: utf-8 -*-
"""
Created on Sat May 29 13:12:21 2021

@author: raven90
"""
#a. 패스워드는 최소한 8자리이상, 8자리 미만이면 False 반환
#b. 패스워드는 영문자와 숫자로 구성, 하지만 영문자로만 또는 숫자로만 구성되었으면 False
#c. 패스워드는 최소한 2개의 숫자를 가지고 있어야 함.
#d. 영문자, 숫자를 제외한 다른 문자가 있으면 False 반환.
#총 5번의 패스워드 유효성 검사를 진행, 6번 이상 시도하면 프로그램 종료
#유효한 패스워드를 입력하면 프로그램 을 종료
# 조건에 맞지 않는 경우는 그에 따라 적절한 error message를 출력, 순서는 상관없음
y = 0
def pchk(x):
#    global y # 전역변수를 지역에서 사용
    ret = True
    digit_Cnt=0
    alpha_Cnt=0
    etc_Cnt=0
    total_Cnt = 0
    for ch in x:
        if ch.encode().isdigit()==True :
            digit_Cnt += 1
        elif ch.encode().isalpha() == True:
            alpha_Cnt += 1
        else:
            etc_Cnt += 1
    
    if etc_Cnt>0 :
        print('error : 영문자 숫자 이외의 문자가 포함되어 있음')
        ret = False
    else:
        total_Cnt = digit_Cnt + alpha_Cnt
        if total_Cnt<8 :
            print('error! 8글자 이상이어야함')
            ret = False
        elif alpha_Cnt == 0:
            print('error : 패스워드가 영문자로만 구성되어 있음')
            ret = False 
        elif digit_Cnt == 0:
            print('error : 패스워드가 숫자로만 구성되어 있음')
            ret = False 
        elif digit_Cnt <2 :
            print ('error : 최소한 2개의 숫자를 포함하고 있지 않음')
            ret = False 
    return ret 

y = 0
while True:
    y += 1 # 누적 횟수
    if y>5:
         print('error : 패스워드 5회 시도를 초과해서 프로그램 종료')
         break
     
    x = input('Enter Password:')
    ret = pchk(x)
    if ret == True:
        print('Valid Password')
        break
    else :
        print('inValid Password')    

        
