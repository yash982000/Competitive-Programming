n = int(input())
s = str(input())
# for i in range(1,n):
#     k =0
#     k =k+1
#     for j in range(i,i+k):
#         if str[i]==str[j]:
#             b = bool(True)
#         else:
#             b = bool(False)
#     if(b==False):
#         print(str[0]+str[i])    
new = ""
a = 0
b = 0
for i in s:
    if b == 0:
        new += i
        b = a + 1
        a += 1
    else:
        b -= 1
print(new)
   
    
        
