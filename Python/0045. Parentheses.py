# If you need to import additional packages or classes, please import here.

def func():
    # please define the python3 input here. 
    # For example: a,b = map(int, input().strip().split())
    # please finish the function body here.
    # please define the python3 output here. For example: print().
    while True:
        try:
            s = input()
            l = 0
            r = 0
            for c in s:
                if c == '(':
                    l += 1
                elif l > 0:
                    l -= 1
                else:
                    r += 1
            print(l+r)
            
        except EOFError:
            break

    
if __name__ == "__main__":
    func()
