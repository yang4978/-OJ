# If you need to import additional packages or classes, please import here.

def gcd(a,b):
    if b == 0:
        return float('inf')
    if b > a:
        a,b = b,a
    while(a%b != 0):
        a = a%b
        if b > a:
            a,b = b,a
    return b

def func():
    # please define the python3 input here. 
    # For example: a,b = map(int, input().strip().split())
    # please finish the function body here.
    # please define the python3 output here. For example: print().

    while True:
        try:
            a,b,n = map(int,input().strip().split())
            
            while 1:
                delta = gcd(a,n)
                if delta > n:
                    print(1)
                    break
                n -= delta
                delta = gcd(b,n)
                if delta > n:
                    print(0)
                    break
                n -= delta
            
        except EOFError:
            break
            
if __name__ == "__main__":
    func()
