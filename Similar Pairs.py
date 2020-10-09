# n = int(input())

# while n > 0:
#     l = int(input())
#     a = []
#     a = list(map(int, input().strip().split()))[:l]

#     res = []

#     for i in range(l):
#         for j in range(l):
#             if i == j:
#                 continue

#             if a[i] % 2 == a[j] % 2 or a[i]-a[j] == abs(1):
#                 res.append([a[i], a[j]])
#                 break
    
#     new =[]
#     for e in res:
#         if e not in new and sorted(e) not in new:
#             new.append(e)
 
#     print(res) 
#     print(new)

#     n -= 1
for i in range(int(input())):
    n=int(input())
    l=list(map(int,input().split()))
    a,c=0,0
    l.sort()
    for i in range(n):
        if i>0:
            if l[i]-l[i-1]==1:a+=1
        if l[i]%2==0:c+=1
    if c%2==0 or a>0:print("YES")
    else:print("NO")