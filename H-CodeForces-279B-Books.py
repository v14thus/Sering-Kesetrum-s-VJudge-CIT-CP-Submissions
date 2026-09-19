# Ius' Code

num1, num2 = map(int, input().split())
letters = list(map(int, input().split()))

mbooks = 0
currentt = 0
left = 0

for right in range(num1):
    currentt += letters[right]
    while currentt > num2:
        currentt -= letters[left]
        left += 1
    books_read = right - left + 1
    if books_read > mbooks:
        mbooks = books_read

print(mbooks)
