import math
n = int(input())

if n % 3 == 0 and n % 2 == 0:
    ans = n*(n-4)/2 + n/3
    print(int(ans))
elif n % 3 == 0 and n % 2 != 0:
    ans = n*(n-3)/2 + n/3
    print(int(ans))
elif n % 3 != 0 and n % 2 != 0:
    ans = n*(n-1)/2
    print(int(ans))
elif n % 3 != 0 and n % 2 == 0:
    ans = n*(n-1)/2
    print(int(ans))


# # Function to find the number of triangles
# def findTriangles(n):
#     num = n

#     # print the number of triangles
#     # having two side common
#     print(num, end=" ")

#     # print the number of triangles
#     # having no side common
#     print(num * (num - 4) * (num - 5) // 6)

# # Driver code


# # initialize the number
# # of sides of a polygon
# n = 5

# findTriangles(n)

# # This code is contributed by Mohit Kumar
