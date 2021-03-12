# If you need to import additional packages or classes, please import here.

def func():
    # please define the python3 input here. 
    # For example: a,b = map(int, input().strip().split())
    # please finish the function body here.
    # please define the python3 output here. For example: print().
    while True:
        try:
            n = int(input())
            if n == 0:
                break
            arr = []
            flag = 0
            l = float('inf')
            for _ in range(n):
                s = input()
                arr.append(s)
                l = min(l,len(s))
            number = set()
            for s in arr:
                ss = s[:l]
                if ss in number:
                    flag = 1
                    break
                else:
                    number.add(ss)
            print("NO" if flag else "YES")
            
        except EOFError:
            break
    
if __name__ == "__main__":
    func()
