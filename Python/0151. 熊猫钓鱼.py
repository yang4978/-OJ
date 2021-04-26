# If you need to import additional packages or classes, please import here.

def func():
    # please define the python3 input here. 
    # For example: a,b = map(int, input().strip().split())
    # please finish the function body here.
    # please define the python3 output here. For example: print().
    n = int(input())
    arr = []
    arr.append(list(map(int, input().split())))
    arr.append(list(map(int, input().split())))
    p = 0
    desk = []
    r = 0
    while arr[0] and arr[1]:
        for p in range(2):
            m = arr[p].pop(0)
            if m in desk:          
                arr[p].append(m)
                i = desk.index(m)
                arr[p] += reversed(desk[i:])

                desk = desk[:i]
            else:
                desk.append(m)        
        p = 0
        r += 1
    for p in range(2):
        if not arr[p]:
            print(r)
            print("mm" if p == 1 else "xx")
            print(*arr[1 - p])
            return
if __name__ == "__main__":
    func()
