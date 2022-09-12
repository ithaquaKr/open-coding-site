n = int(input())
stack = []
most = []

for i in range(n):
    data = input().split(' ')
    x = int(data[0])
    v = 0
    if len(data) > 1: v = int(data[1])
    if x == 1:
        stack.append(v)
        if not most or most[-1] <= v: most.append(v)
    elif x == 2:
        v = stack.pop()
        if most[-1] == v: most.pop()
    else:
        print(most[-1])