# -*- coding: utf-8 -*-
"""
Created on Mon May 31 14:10:46 2021

@author: raven90
"""
from tkinter import *


def set_test():
    pass
 
# def set_test():
#     win2 = Toplevel(root)
#     win2.geometry('200x150')
#     labelA = Label(win2, text = win2.e1.get())
  
# def createNewWindow(root):
#     newWindow = Tk()
#     newWindow.wm_attributes('-topmost',1) #최상위 창 설정
#     labelA1 = Label(newWindow, text='최저시급')
#     labelA1.grid(sticky=W, row=0, column=0) # sticky=W 왼쪽
    
#     labelB1 = Label(newWindow, text=root.e.get())
#     labelB1.grid(sticky=W, row=0, column=1) # sticky=W 왼쪽

    
root = Tk()
root.title('알바비 산출 프로그램')
root.geometry('640x480+300+100') # 가로 * 세로 + X좌표 + Y좌표
root.resizable(False, False) # x(너비), y(높이) 값 변경 불가(창 크기 변경 불가)

#popup =Toplevel(root)
# root위에 다른 창을 띄우고 싶을 때는 Tk()를 한번 더 쓰면 안되고 Toplevel()을 쓴다.
#출처: https://man-about-town.tistory.com/30 [YongWook's Notes]

label1 = Label(root, text='최저시급')
label1.grid(sticky=W, row=0, column=0) # sticky=W 왼쪽

label2 = Label(root, text='근무날짜')
label2.grid(sticky=W, row=1, column=0)


label3 = Label(root, text='근무시간')
label3.grid(sticky=W, row=2, column=0)


button4 = Button(root, text="야간수당", command=set_test)
button4.grid(sticky=W, row=3, column=0)


button5 = Button(root, text="추가수당")
button5.grid(sticky=W, row=4, column=0)

button6 = Button(root, text="세금")
button6.grid(sticky=W, row=5, column=0)

global e1
e1 = Entry(root, width=20) # 한줄에 입력값 받을때 사용
e1.grid(row=0, column=1)

e2 = Entry(root, width=20) # 한줄에 입력값 받을때 사용
e2.grid(row=1, column=1)

e3 = Entry(root, width=20) # 한줄에 입력값 받을때 사용
e3.grid(row=2, column=1)

label14 = Label(root, text='0') # 한줄에 입력값 받을때 사용
label14.grid(sticky=E,row=3, column=1)

label15 = Label(root, text='0') # 한줄에 입력값 받을때 사용
label15.grid(sticky=E,row=4, column=1)

label16 = Label(root, text='0') # 한줄에 입력값 받을때 사용
label16.grid(sticky=E,row=5, column=1)


label21 = Label(root, text='원')
label21.grid(sticky=W, row=0, column=2) # sticky=W 왼쪽

label22 = Label(root, text='일')
label22.grid(sticky=W, row=1, column=2) # sticky=W 왼쪽

label23 = Label(root, text='시간')
label23.grid(sticky=W, row=2, column=2) # sticky=W 왼쪽

# def change():
#     label1.config(text='또 만나요')
    
# btn = Button(root, text='클릭', command=change)
# btn.pack()


# e = Entry(root, width=30) # 한줄에 입력값 받을때 사용
# e.pack()

# def btncmd():
#     print(txt.get('1.0',END))
#     print(e.get())
#     txt.delete('1.0',END))
#     e.delete(0,END))


# btn1 = Button(root, text='버튼1')
# btn1.pack() # 이게 있어야 보임.

# btn2 = Button(root, padx=5, pady=10, text='버튼2') # 여백
# btn2.pack() # 이게 있어야 보임.

# btn3 = Button(root, padx=10, pady=5, text='버튼3') # 여백
# btn3.pack() # 이게 있어야 보임.

# btn4 = Button(root, width=10, height=3, text='버튼4') #고정된 크기
# btn4.pack() # 이게 있어야 보임.

# btn5 = Button(root, fg='red', bg='yellow', text='버튼5') #고정된 크기
# btn5.pack() # 이게 있어야 보임.

# def btncmd():
#     print('버튼이 클릭되었어요.')

# btn7 = Button(root, text='동작하는 버튼', command=btncmd)
# btn7.pack()


root.mainloop()



