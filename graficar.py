
import matplotlib.pyplot as plt
import numpy as np

os.system("g++ NathaliaCalderon:Ejercicio26.cpp -o 26.x")
os.system("./26.x > 26.dat")

data1 = np.loadtxt("euler.dat")
data2 = np.loadtxt("rk4.dat")
data3 = np.loadtxt("leapfrog.dat")

te = data1[:,0]
xe = data1[:,1]
ve = data1[:,2]

tr = data2[:,0]
xr = data2[:,1]
vr = data2[:,2]

tl = data3[:,0]
xl = data3[:,1]
vl = data3[:,2]

#EULER

plt.figure(figsize=(4,4))
plt.plot(te, xe)
plt.title("Euler")
plt.ylabel("x")
plt.xlabel("t")


plt.figure(figsize=(4,4))
plt.title("Euler")
plt.plot(te, ve)
plt.ylabel("x")
plt.xlabel("v")


plt.figure(figsize=(4,4))
plt.title("Euler")
plt.plot(te, xe)
plt.ylabel("v")
plt.xlabel("x")



plt.plot(tl, xl)
plt.title("Leap frog")
plt.ylabel("x")
plt.xlabel("t")



plt.title("Leap frog")
plt.plot(tl, vl)
plt.ylabel("x")
plt.xlabel("v")


plt.title("Leap frog")
plt.plot(tl, xl)
plt.ylabel("v")
plt.xlabel("x")


plt.plot(tr, xr)
plt.title("Leap frog")
plt.ylabel("x")
plt.xlabel("t")
plt.savefig("figura.png")