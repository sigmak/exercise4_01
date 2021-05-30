# -- coding: utf-8 --
"""

Created on Fri May 28 11:34:27 2021

@author: raven90

"""

#3. 다음 프로그램은 로또 번호를 자동으로 생성하기 위하여
# random모듈의 sample 함수를 사용한 예이다.
# >>> import random
# >>> lotto = random.sample(range(1,46),6)
# >>> lotto.sort()
# >>> print(lotto)
# [18, 25, 30, 33, 37, 39]
# sample() 함수를 사용하지 않고 randint() 함수를 사용해서
# 로또 번호를 자동으로 만들어주는 프로그램을 작성하시오.
# 참고 : https://appia.tistory.com/93

import random

def randomLottoCreate():
    lotto =[]
    while len(lotto) < 6 :
        V = random.randint(1,45)
        if V not in lotto:
            lotto.append(V)
    lotto.sort()
    #print(lotto)
    return lotto

if __name__ == '__main__':
    lotto = randomLottoCreate()
    print(lotto)
