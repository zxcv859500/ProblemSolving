n = int(input())

res = [0,1]

for x in range(2,n + 1):
	res.append(res[x-1] + res[x-2])

print(res[n])