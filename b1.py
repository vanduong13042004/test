a = int(input())
b = int(input())
c = int(input())
list = [a,b,c]
sapxep = sorted(list)
inra = None
for list in sapxep:
    if list != inra:
        print(list)
        inra = list
