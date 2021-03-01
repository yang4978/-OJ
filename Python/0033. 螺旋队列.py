# If you need to import additional packages or classes, please import here.

def func():
    # please define the python3 input here. 
    # For example: a,b = map(int, input().strip().split())
    # please finish the function body here.
    # please define the python3 output here. For example: print().
    while True:
        try:
            x,y = map(int,input().strip().split())
            y = -y
            res = 0
            ver_flag = y>0
            hor_flag = x>0
            
            if abs(x)<abs(y):
                base = abs(x)
                diff = abs(y)-base
                res += (7 if ver_flag else 3)*diff + 8*(base*2+diff-1)*diff//2

            else:
                base = abs(y)
                diff = abs(x)-base
                res += (1 if hor_flag else 5)*diff + 8*(base*2+diff-1)*diff//2

            delta = 0
            if hor_flag:
                delta = 8 if ver_flag else 2
            else:
                delta = 6 if ver_flag else 4
            res += 1 + delta*base + 8*(base)*(base-1)//2

            if hor_flag and base == y and diff:
                res -= 8*base
            
            print(res)
            
        
        except EOFError:
            break

    
if __name__ == "__main__":
    func()
《》
