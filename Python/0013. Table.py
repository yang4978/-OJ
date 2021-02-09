# If you need to import additional packages or classes, please import here.

def func():
    # please define the python3 input here. 
    # For example: a,b = map(int, input().strip().split())
    # please finish the function body here.
    # please define the python3 output here. For example: print().
    while True:
        try:
            n,m = map(int,input().strip().split())
            s1 = ""
            s2 = ""
            for j in range(4*m+1):
                if j%4:
                    s1 += '-'
                    s2 += ' '
                else:
                    s1 += '+'
                    s2 += '|'
            for i in range(2*n+1):
                print(s2 if i%2 else s1)
            return
            
        except EOFError:
            break
    
if __name__ == "__main__":
    func()
