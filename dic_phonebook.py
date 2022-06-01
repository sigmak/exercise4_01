# -*- coding: utf-8 -*-
"""
Created on Wed Jun  1 18:56:30 2022

@author: raven90
"""

phone_book = {'홍길동':'010-1234-1234','일지매':'010-2222-3333'}

def print_menu():   #메뉴 출력
    print("*** 구분코드 입력 ***")
    print("1: 번호등록")
    print("2: 개별번호조회")
    print("3: 전체번호조회")
    print("4: 번호삭제")
    print("5: 프로그램 종료")
    menu = input("구분코드를 입력하세요: ")
    return int(menu) #int를 해준 이유는 예를들어 "1"을 1로 변경하기 위해
    # 참고 : https://loco-motive.tistory.com/66

def add_phone(name, phone):
    chk1 = False
    if name in phone_book:
        chk1 =True
    chk2 = False
    for key, value in phone_book.items():
        if phone == value:
            #return key
            chk2 = True 
            break        
    if chk1 == False and chk2 == False :
        phone_book[name] = phone # 추가하기
        print("추가완료")
    else:
        tmpStr =""
        if chk1 == True and chk2 == True:
            tmpStr = "이름과 전화번호가 중복되어서 추가실패!! "
        else :
            if chk1 == True :
                tmpStr = "이름이 중복되어서 추가실패!! "
            if chk2 == True :
                tmpStr = "전화번호가 중복되어서 추가실패!! "
        print(tmpStr)
    print()
    

def search_phone(phone):
    chk = False
    name =""
    for key, value in phone_book.items():
         if phone == value:
             #return key
             name = key 
             chk = True 
             break
    if chk == True :
        print("조회결과 : " + name + " " + phone )
    else:
        print("조회결과 : 전화번호가 등록되지 않았습니다.")
    print()
    
def search_phones():
    print("이름        전화번호")
    for key, value in phone_book.items():
        print(key + "     " + value)
    print()

def del_telephone(phone):
    chk = False
    for key, value in phone_book.items():
         if phone == value:
             #return key
             del(phone_book[key]) #키값 받아와서 딕셔너리에서 삭제
             chk = True 
             break
    if chk == True :
        print(phone + " 삭제완료")
    else:
        print("조회결과 : 전화번호가 등록되지 않았습니다.")
    print()
    
def main():
    
    while True:
        menu = print_menu()
        if menu==1:
            a_name = input("추가 이름 입력: ")
            a_phone = input("추가 전화번호(000-0000-0000) 입력: ")
            add_phone(a_name, a_phone)
            
        elif menu==2:
            s_tel = input("조회 전화번호(000-0000-0000) 입력: ")
            search_phone(s_tel)
            
        elif menu==3:
            search_phones()
            
        elif menu ==4:
            del_tel = input("삭제 전화번호(000-0000-0000) 입력: ")
            del_telephone(del_tel)
            
        elif menu ==5:
            print("++++++++++++++++++++++++++")
            print("+    전화번호 프로그램    +")
            print("+      개발자: 홍길동     +")
            print("+      개발일: 2022.5.31  +")
            print("++++++++++++++++++++++++++")
            print("")
            print("프로그램을 이용해 주셔서 감사합니다!!")
            break
        else:
            break

#다른 모듈에 의해 import될 때 여기 있는 main이 먼저 호출되면 안 되니까.
#스스로 실행될 때만 이 main이 실행되게 하려고.    
if __name__ == "__main__":
    main()    
    

