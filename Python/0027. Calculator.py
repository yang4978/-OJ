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
            temp = 0
            power = 1
            for i in range(len(s)-1,-1,-1):
                c = s[i]
                if c != ' ':
                    if c == '+':
                        res += temp
                        temp = 0
                        power = 1
                    elif c == '-':
                        res -= temp
                        temp = 0
                        power = 1
                    else:
                        temp += power*int(c)
                        power *= 10
            res += temp
            print(res)
            
        except EOFError:
            break
    
if __name__ == "__main__":
    func()
