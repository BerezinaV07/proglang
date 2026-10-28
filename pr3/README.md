# Python 3

## 1
```
n=int(input())                                                            
k=(n+24)//25
mn=n//k

print(k,mn)
```

## 2
```
t=int(input())
for j in range(t):
    n=int(input())
    p,q=map(int, input().split())
    res="0."
    for i in range(n):
        p=p*2
        if p >= q:
            res=res+"1"
            p=p-q
        else:
            res=res+"0"

    print(res)
```

## 3
```
t=int(input())
res=[]

for i in range(t):
    a,b,c,d,e,f,g,h=map(int,input().split())
    left_num=a*d+c*b
    left_den=b*d
    right_num=e*h+g*f
    right_den=f*h

    x=left_num*right_den
    y=right_num*left_den

    if x < y:
        res.append("-1")
    elif x > y:
        res.append("1")
    else:
        res.append("0")

print(" ".join(res))
```

## 4
```
n=int(input())
nums=list(map(int, input().split()))
res=""
for x in nums:
    bx=bin(x)[2:]
    y=len(bx)
    by=bin(y)[2:]
    z=len(by)
    code="0"*(z-1)+by+bx[1:]
    res+=code
print(res)
```

## 5
```
s=input()
pos=0
num=[]

while pos < len(s):
    zero=0
    while s[pos]=='0':
        zero+=1
        pos+=1

    z=zero+1  
    by=s[pos:pos+z]
    pos+=z
    y=int(by, 2)
    tail=s[pos:pos+y-1]
    pos+=y-1
    x=int('1'+tail,2)
    num.append(x)

print(len(num))
print(' '.join(map(str,num)))
```
