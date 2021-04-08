# If you need to import additional packages or classes, please import here.

def func():
    # please define the python3 input here. 
    # For example: a,b = map(int, input().strip().split())
    # please finish the function body here.
    # please define the python3 output here. For example: print().
    while True:
        try:
            n = int(input())
            for _ in range(n):
                s = input()
                res = ['0']
                for c in s:
                    if c == res[-1]:
                        res.pop()
                    else:
                        res += c
                print("Yes" if len(res) == 1 else "No")
        except EOFError:    
            break
    
if __name__ == "__main__":
    func()
