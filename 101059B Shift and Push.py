p1 = int(input())
p2 = int(input())
p3 = int(input())
w = int(input())

a = [p1,p2,p3]

a.sort()
a.reverse()
if w <a[0]+a[1]:
    print("YES")
elif w==a[0]+a[1]:
    print("YES")
else:
    print("NO")