# Python 2

## 1
```
n = int(input())
uehali = (n // 15) * 15
ostalis = n % 15
print(uehali, ostalis)
```

## 2
```
n = input()
cr = len(n) // 2
first = int(n[:cr])
second = int(n[cr:])
print(first + second)
```

## 3
```
n = int(input())
res = n / 3
print(f"{res:.3f}")
```

## 4
```
n = float(input())
rub = int(n)
kop = round((n - rub) * 100)
print(rub, "rub", kop, "kop")
```

## 5
```
n, m, c, k = map(int, input().split())
total=n*m
need=total-k
if need <= 0:
    print(0)
else:
    pack=(need+199)//200
    print(pack*c)
```

## 6
```
n, m, k = map(int, input().split())
total=n*m
box=(total+k-1)//k
print(box)
```

## 7
```
import math
n, t=input().split()
n=int(n)
t=float(t)
res=math.ceil(n/t*60)
print(res)
```

## 8
```
import math
x, y=map(float, input().split())
first=math.ceil(x)
last=math.floor(y)
cnt=max(0,last-first+1)
print(cnt)
```

## 9
```
s=input()
summa=0
for ch in s:
    if ch.isdigit():
        summa+=int(ch)
print(summa)
```

## 10
```
s=input()
s1=s[::-1]
res = ""
for ch in s1:
    if ch=='(':
        res+=')'
    else:
        res+='('
print(res)
```

## 11
```
s=input()
words=s.split()
res=[word[::-1] for word in words]
print(" ".join(res))
```

## 12
```
def min_del(n):
    d=2
    while d*d<=n:
        if n%d==0:
            return d
        d+=1
    return n

nums=list(map(int, input().split()))
print(*[min_del(x) for x in nums])
```

## 13
```
n=int(input())
res=0
d=1
while d*d<=n:
    if n%d==0:
        res+=d
        ost=n//d
        if ost!=d and ost!=n:
            res+=ost
    d+=1
print(res)
```

## 14
```
n=int(input())
masha=0
dasha=0
for i in range(n):
    num=int(input())
    if num%3==0:
        masha+=2
    else:
        dasha+=1
print(f"{masha}:{dasha}")
```

## 15
```
n=int(input())
res=0
for i in range(n):
    cost, trat = map(int, input().split())
    prt=cost-trat
    if prt>0:
        res+=pr
print(res)
```

