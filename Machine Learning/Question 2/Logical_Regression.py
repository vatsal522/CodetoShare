# -*- coding: utf-8 -*-
"""
Created on Sat May  2 16:14:42 2020

@author: VATSAL SHAH
"""
import numpy as np
from sklearn.linear_model import *
import matplotlib.pyplot as plt
import random

X = np.array([[4.85, 9.63],
              [8.62, 3.23],
              [5.43, 8.23],
              [9.21, 6.34]])
Y = np.array([1, 0, 1, 0])

clf = LogisticRegression()
clf.fit(X,Y)
x_min, x_max = X[:, 0].min() - .5, X[:, 0].max() + .5
y_min, y_max = X[:, 1].min() - .5, X[:, 1].max() + .5
h = .02  # step size in the mesh
xx, yy = np.meshgrid(np.arange(x_min, x_max, h), np.arange(y_min, y_max, h))
Z = clf.predict(np.c_[xx.ravel(), yy.ravel()])

Z = Z.reshape(xx.shape)
plt.figure(1, figsize=(4, 3))
plt.pcolormesh(xx, yy, Z, cmap=plt.cm.Paired)

# Plot also the training points
plt.scatter(X[:, 0], X[:, 1], c=Y, edgecolors='k', cmap=plt.cm.Paired)


plt.xlim(xx.min(), xx.max())
plt.ylim(yy.min(), yy.max())
plt.xticks(())
plt.yticks(())

plt.show()

