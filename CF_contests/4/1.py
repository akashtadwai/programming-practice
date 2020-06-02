T=int(input())
while(T>0):
    n = int(input())
    Rec(n)
    T=T-1
def Rec(n):
    if n==1:
        print(-1)
        return
    elif(isDivisible(n) == 'NO'):
        print(n)
        return
    else:
        Rec(n-1)
def isDivisible(n):
	temp = n
	while(n):
		k = n % 10
		if(temp % k == 0):
			return "YES"
		n /= 10
	return "NO"

