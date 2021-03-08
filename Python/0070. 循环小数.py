# If you need to import additional packages or classes, please import here.
def gcd(a,b):
    while a%b:
        a = a%b
        if a<b:
            a,b = b,a
    return b
def func():
    # please define the python3 input here. 
    # For example: a,b = map(int, input().strip().split())
    # please finish the function body here.
    # please define the python3 output here. For example: print().
    while True:
        try:
            n = input()
            l = len(n)
            n = int(n)
            if n == 0:
                break
            p = pow(10,l)-1
            x = gcd(p,n)
            print(str(n//x)+'/'+str(p//x))
        
        except EOFError:
            break
    
if __name__ == "__main__":
    func()
