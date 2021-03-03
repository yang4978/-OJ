# If you need to import additional packages or classes, please import here.

def func():
    # please define the python3 input here. 
    # For example: a,b = map(int, input().strip().split())
    # please finish the function body here.
    # please define the python3 output here. For example: print().
    while True:
        try:
            s = input().strip()
            res = 0
            flag = 1
            for c in s:
                if c == '(':
                    res += 1
                elif c == ')':
                    if res == 0:
                        flag = 0
                        break
                    res -= 1
            print("NO" if res!=0 or flag == 0 else "YES")
            
        except EOFError:
            break
    
if __name__ == "__main__":
    func()
