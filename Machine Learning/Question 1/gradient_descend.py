# -*- coding: utf-8 -*-
"""
Created on Sat May  2 16:07:40 2020

@author: VATSAL SHAH

"""


import numpy as np
import matplotlib.pyplot as plt
X = np.array([2, 3, 5, 13, 8, 16,  11, 1, 9])
Y = np.array([15, 28, 42, 64, 50, 90, 58, 8, 54])
plt.scatter(X, Y)
plt.show()
m = 0
c = 0
L = 0.0001  
epochs = 1000  
n = float(len(X)) 
for i in range(epochs):
    Y_pred = m*X + c  
    D_m = (-2/n) * sum(X * (Y - Y_pred))  
    D_c = (-2/n) * sum(Y - Y_pred)
    m = m - L * D_m  
    c = c - L * D_c  
print (m, c)
Y_pred = m*X + c

plt.scatter(X, Y) 
plt.plot([min(X), max(X)], [min(Y_pred), max(Y_pred)], color='green')
plt.show()