# -*- coding: utf-8 -*-
"""
Created on Sat May  2 16:11:31 2020

@author: VATSAL SHAH
"""


import numpy as np
import matplotlib.pyplot as plt

#Input
X = np.array([2, 3, 5, 13, 8, 16,  11, 1, 9])
Y = np.array([15, 28, 42, 64, 50, 90, 58, 8, 54])
plt.scatter(X, Y)
plt.show()


# Building the model
X_mean = np.mean(X)
Y_mean = np.mean(Y)

num = 0
den = 0
for i in range(len(X)):
    num += (X[i] - X_mean)*(Y[i] - Y_mean)
    den += (X[i] - X_mean)**2

m = num / den
c = Y_mean - m*X_mean

print (m, c)


# Making predictions
Y_pred = m*X + c

plt.scatter(X, Y) # actual plt.scatter(X, Y_pred, color='red')
plt.plot([min(X), max(X)], [min(Y_pred), max(Y_pred)], color='green') # predicted
plt.show()