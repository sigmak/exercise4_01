# -*- coding: utf-8 -*-
"""
Created on Sat Jun 11 11:22:49 2022

@author: raven90
"""

import tkinter as tk
from tkinter import simpledialog

voca_book = {'report':'1.과제물 2.보고서','night':'밤'}

ROOT = tk.Tk()

ROOT.title("과제2 : 기초교양")
ROOT.geometry("400x500+100+100")


print_Result = tk.StringVar() #결과 출력 갱신용 전역 변수
print_Result.set("\n")

########################################################################
#https://wonpaper.tistory.com/357
def keyEvent(event):
    print(event.keysym)
    # 윈도우창 에서 버튼 클릭이나 엔터키 입력시 팝업창 호출하기
    if event.keysym == 'Return': 
        popup()
    
########################################################################
def popup():
    response = simpledialog.askinteger(title="구분코드입력",
                                      prompt="숫자를 입력하세요 :                           ", parent=ROOT) # 타이틀바 캡션이 안짤리게 하려면
    
    if response==0:
        # 프로그램 종료
        ROOT.destroy()  
    elif response==1:
        # 단어등록
        sWord = simpledialog.askstring(title="등록할 단어 입력",
                                        prompt="문자를 입력하세요 :                           ", parent=ROOT)
        print_Result.set(add_word(sWord))
        #print("--1-- ", response)
        #print_Result.set("Second click")
    elif response==2:     
        # 개별단어조회
        sWord = simpledialog.askstring(title="검색할 단어 입력",
                                        prompt="문자를 입력하세요 :                           ", parent=ROOT)
        print_Result.set(search_word(sWord))
        
        #print("--2-- ", response)
        #print("")
    elif response==3: 
        # 전체단어조회
        print_Result.set(search_words())
        
        #print("--3-- ", response)
    elif response==4:     
        # 단어삭제
        sWord = simpledialog.askstring(title="삭제할 단어 입력",
                                        prompt="문자를 입력하세요 :                           ", parent=ROOT)
        print_Result.set(del_word(sWord))
        #print("--4-- ", response)
    else:
        print("--그외-- ", response)

########################################################################
def add_word(word):
    result=""
    sValue = simpledialog.askstring(title="뜻 입력",
                                    prompt="문자를 입력하세요 :                           ", parent=ROOT)
    chk1 = False
    if word in voca_book:
        chk1 =True
    chk2 = False
    for key, value in voca_book.items():
        if sValue == value:
            #return key
            chk2 = True 
            break        
    if chk1 == False and chk2 == False :
        voca_book[word] = sValue # 추가하기
        result +="\n등록완료 : " + word + " => " + sValue + "     "
    else:
        result +="\n등록실패!!!"
        if chk1 == True and chk2 == True:
            result +="\n단어와 뜻 모두 중복되어서 추가실패!! "
        else :
            if chk1 == True :
                result +="\n단어가 중복되어서 추가실패!! "
            if chk2 == True :
                result +="\n뜻이 중복되어서 추가실패!! "

    return result
    
########################################################################    
def search_word(word):
    result =""
    chk = False
    code1 = word
    code2 =""
    for key, value in voca_book.items():
         if word == key:
             #return key
             code2 = value 
             chk = True 
             break
    if chk == True :
        result = "\n조회결과 : " + code1 + " => " + code2 
    else:
        result = "\n조회결과 : " + code1 + " => 은 등록된 단어가 아닙니다!!" 
    return result

########################################################################
def search_words():
    result =""
    result += "\n**** 조회결과 총 " + str(len(voca_book )) + "건 ****"
    if len(voca_book)<1 :
        return result
    
    result += "\n단어            뜻      "
    for key, value in voca_book.items():
        result += "\n"+ key + "     " + value + "     "  + "     "
        
    return result

########################################################################
def del_word(word):
    result =""
    chk = False
    for key, value in voca_book.items():
         if word == key:
             #return key
             del(voca_book[key]) #키값 받아와서 딕셔너리에서 삭제
             chk = True 
             break
    if chk == True :
        result += "\n"+ word + " 삭제완료"
    else:
        result += "\n삭제실패 : "+ word + "는 등록된 단어가 아닙니다!"        
    return result
        
########################################################################
strHeader = '                                              \n'
strHeader += '++++++++++++++++++++++++++\n'
strHeader += '+       나만의 단어장 프로그램         +\n'
strHeader +=  '+            개발자: 홍길동                +\n'
strHeader +=  '+            개발일: 2022.5.31           +\n'
strHeader +=  '++++++++++++++++++++++++++'
          
lblHeader = tk.Label(ROOT, text=strHeader)
lblHeader.pack()

########################################################################
strMenu = '                                     \n'
strMenu += '*** 구분코드 입력 ***\n'
strMenu += '1: 단어등록          \n'
strMenu += '2: 개별단어조회    \n'
strMenu += '3: 전체단어조회    \n'
strMenu += '4: 단어삭제          \n'
strMenu += '0: 프로그램 종료   '

lblMenu = tk.Label(ROOT, text=strMenu)
lblMenu.pack()

lblGubun = tk.Label(ROOT, text='==========결과 표시==============')
lblGubun.pack()


lblResult = tk.Label(ROOT,textvariable=print_Result,font=('Gulim', 12, 'bold'))
lblResult.pack()

#tk.Button(ROOT, text='PopUp창 호출 or 엔터키', command=popup).pack()

#https://www.delftstack.com/ko/tutorial/tkinter-tutorial/tkinter-status-bar/
statusbar = tk.Label(ROOT, text="Enter 키 누르면 구분코드 팝업창이 나타납니다.", bd=1, relief=tk.SUNKEN, anchor=tk.W)
statusbar.pack(side=tk.BOTTOM, fill=tk.X)

ROOT.bind("<Key>",keyEvent) # (이벤트 값, 함수)

ROOT.mainloop()

# check it out
#print("Hello", USER_INP)


