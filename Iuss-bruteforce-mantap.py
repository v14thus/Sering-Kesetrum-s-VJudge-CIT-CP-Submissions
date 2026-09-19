# Rispek Ius

letters = list(map(int, input().split('+')))
one = letters.count(1)
two = letters.count(2)
three = letters.count(3)
if three != 0:
  while one >= 1:
    one -= 1
    print('1',end='+')
  while two >= 1:
    two -= 1
    print('2',end='+')
  while three >= 1:
    three -= 1
    if three >= 1:
      print('3', end='+')
    else:
      print('3')
elif two != 0:
  while one >= 1:
    one -= 1
    print('1',end='+')
  while two >= 1:
    two -= 1
    if two >= 1:
      print('2', end='+')
    else:
      print('2')
elif one != 0:
  while one >= 1:
    one -= 1
    if one >= 1:
      print('1', end='+')
    else:
      print('1')
