# If you need to import additional packages or classes, please import here.

def func():
    # please define the python3 input here. 
    # For example: a,b = map(int, input().strip().split())
    # please finish the function body here.
    # please define the python3 output here. For example: print().
    while True:
        try:
            m,n,a = map(int,input().strip().split())
            print((m//a+min(1,m%a))*(n//a+min(1,n%a)))
            
        except EOFError:
            break
    
if __name__ == "__main__":
    func()
