# -- coding: utf-8 --
"""

Created on Fri May 28 11:34:27 2021

@author: raven90

"""

#5. 다음과 같이 알파벳 대분자의 유니코드 값을 출력하는 프로그램을 작성하시오.
#chr(65) -> "A"
#ord("A") -> 65

def AlphaToAscii(tmpAlpha):
    return tmpAlpha + " : " + str(ord(tmpAlpha))


if __name__ == '__main__':
    numMin=65
    numMax=90
    count=0
    tmpStr=""
    
    for i in range(numMin, numMax + 1):
        count += 1
        if count >1 :
            tmpStr += " " # 여백 두기
        tmpStr += AlphaToAscii(chr(i))
        if count == 5 or i==numMax :
            print(tmpStr)
            tmpStr="" #초기화
            count=0 #초기화
            
