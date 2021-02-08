# If you need to import additional packages or classes, please import here.

def func():
    # please define the python3 input here. 
    # For example: a,b = map(int, input().strip().split())
    # please finish the function body here.
    # please define the python3 output here. For example: print().
    while True:
        try:
            m,n = map(float,input().strip().split())
            if m == 0 and n == 0:
                return

            dig = 10
            num = 0
            power = 0.1

            while dig:
                num += power*int(m*n)
                m = m*n - int(m*n)
                dig -= 1
                power *= 0.1

            print("%.10f" %(num))
            
        except EOFError:
            break

    
if __name__ == "__main__":
    func()
