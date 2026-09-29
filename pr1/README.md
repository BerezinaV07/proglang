### Отчет по практической работе 1
# Задание 1
	name1=input()
	name2=input()
	print(name1, "and", name2, "was here")

# Задание 2
	line1=input()
	line2=input()
	names1=line1.split()
	names2=line2.split()
	print(names1[0], names2[0], names1[1], names2[1], names1[2], sep=',')

# Задание 3
	line1=input().split()
	word1=line1[0]
	cnt1=int(line1[1])

	line2=input().split()
	word2=line2[0]
	cnt2=int(line2[1])

	line3=input().split()
	word3=line3[0]
	cnt3=int(line3[1])

	res=len(word1)*cnt1 + len(word2)*cnt2 + len(word3)*cnt3
	print(res)

# Задание 4
	text=input()
	lenght=len(text)
	print('*'*(lenght+4))
	print('* ' + text + ' *')
	print('*'*(lenght+4))

# Задание 5
	line1=input().split()
	h1=int(line1[0])
	m1=int(line1[1])
	s1=int(line1[2])

	line2=input().split()
	h2=int(line2[0])
	m2=int(line2[1])
	s2=int(line2[2])

	time1=h1*3600 + m1*60 + s1
	time2=h2*3600 + m2*60 + s2
	res=time2-time1
	print(res)

# Задание 6
	n=int(input())
	if (n==1):
    		print('pusk')
	else:
    		print(n-1)

# Задание 7
	num=input().split()
	a=int(num[0])
	b=int(num[1])
	c=int(num[2])
	if (a==b==c==3):
    		print('hole')
	else:
   		print(a+b+c)

# Задание 8
	num=input().split()
	a=num[0]
	b=num[1]
	c=num[2]

	lenA=len(a)
	lenB=len(b)
	lenC=len(c)

	if(lenA>lenB and lenA>lenC):
   		print(a)
	elif(lenB>lenA and lenB>lenC):
    		print(b)
	else:
    		print(c)

# Задание 9
	num=input().split()
	x=int(num[0])
	y=int(num[1])

	if(x<y):
    		print('<')
	elif (x>y):
    		print('>')
	else:
    		print('=')

# Задание 10
	num=input().split()
	A=int(num[0])
	B=int(num[1])
	C=int(num[2])

	if (A<B):
    		left=A
    		right=B
	else:
    		left=B
   		right=A

	if (C<left):
    		print(left-C)
	elif (C>right):
    		print(C-right)
	else:
    		print(0)

# Задание 11
	n=int(input())
	while (n!=1):
    		print(n, end=' ')
   	if (n%2!=0):
       		n=3*n+1
    	else:
        	n=n//2
	print(1)

# Задание 12
	n=int(input())
	power=1
	while power*2<=n:
    		power*=2
	print(power)
    
# Задание 13
	cnt=0
	while True:
    	name=input()
    	cnt+=1
    	if (name=='Petr'):
        	break
	print(cnt)

# Задание 14
	line=input().split()
	n=int(line[0])
	a=int(line[1])
	cnt=0
	while (cnt<n):
    	if (a%2!=0 and a%3!=0 and a%5!=0 and a%7!=0):
        	print(a, end=' ')
        	cnt+=1
    	a+=1

# Задание 15
	line=input().split()
	x=int(line[0])
	y=int(line[1])

	while (y!=0):
    		t=y
    		y=x%y
    		x=t
	print(x)
