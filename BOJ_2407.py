n, r = [int(x) for x in input().split()]

tmp = [int(x) for x in range(1, 100)]

for x in range(2,100):
	for y in range(2,100):
		try:
			tmp[x*y - 1] = 0
		except:
			break

del tmp[0]

prime = []
for x in tmp:
	if x is not 0:
		prime.append(x)
factorN = [0 for i in range(0, 100)]
factorM = [0 for i in range(0, 100)]
factorNM = [0 for i in range(0, 100)]

def factorization(n, factor):
	for x in prime:
		while(n % x == 0):
			factor[x] += 1
			n = n / x

for x in range(n,1,-1):
	factorization(x,factorN)
for x in range(r,1,-1):
	factorization(x,factorM)
for x in range(n-r,1,-1):
	factorization(x,factorNM)
result = 1

for x in prime:
	factor = factorN[x] - factorM[x] - factorNM[x]
	result *= x ** factor
print (result)