# -*- coding: utf-8 -*-
"""
Created on Mon Jun  7 11:09:33 2021

@author: raven90
"""

import pandas as pd


Animal = pd.read_csv("Animal.csv") #"C:\\Users\\samsung\\Desktop\\Animal.csv"

food = pd.read_csv("food.csv") #"C:\\Users\\samsung\\Desktop\\food.csv"

######################################################
a = Animal["animal"].value_counts()
print("1.동물들의 수: ")
print(a)
######################################################
print("2.동물 종류별 평균사육비: ")
b = Animal.groupby('animal')['food_need'].mean()
print(b)
#출처 : https://programmerpsy.tistory.com/23
######################################################
print("3.전체 사육비: ")
c = Animal["food_need"].sum()
print(c)
######################################################
print("4.가장 사육비가 낮은동물: ")
d = b.idxmin()
print(d)
######################################################
print("5.가장 사육비가 높은동물: ")
e = b.idxmax()
print(e)
######################################################
print("6.평균사육비: ")
f = Animal['food_need'].mean()
print(f)
######################################################
print("7.테이블 merge: ")
g = pd.merge(Animal, food)
print(g.head())
