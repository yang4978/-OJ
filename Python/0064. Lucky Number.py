# If you need to import additional packages or classes, please import here.

def func():
    # please define the python3 input here. 
    # For example: a,b = map(int, input().strip().split())
    # please finish the function body here.
    # please define the python3 output here. For example: print().
    while True:
        try:
            n,x,y,z = map(int,input().strip().split())
            
            def gcd(a,b):
                while a%b:
                    a = a%b
                    if a<b:
                        a,b = b,a
                return b
            
            def lcm(a,b):
                return a*b//gcd(a,b)
            
            print(n//x+n//y+n//z-n//lcm(x,y)-n//lcm(x,z)-n//lcm(y,z)+n//lcm(x,lcm(y,z)))
            
        except EOFError:
            break
    
if __name__ == "__main__":
    func()
