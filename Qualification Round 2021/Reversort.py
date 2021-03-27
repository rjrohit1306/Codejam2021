for i in range(int(input())):
    l = int(input())
    a = [int(i) for i in input().split()]
    cost = 0
    for j in range(l-1):
        if len(a[j:]) != 0:
            mini = min(a[j:])
            cost += a.index(mini)-j+1
            a[j:a.index(mini)+1] = a[j:a.index(mini)+1][::-1]
    print("case #"+str(i+1)+":", cost)