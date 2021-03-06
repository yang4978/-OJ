# If you need to import additional packages or classes, please import here.

def func():
    # please define the python3 input here. 
    # For example: a,b = map(int, input().strip().split())
    # please finish the function body here.
    # please define the python3 output here. For example: print().
    
    while True:
        try:
            n = int(input())
            
            for i in range(1,n+1):
                print(' '*(n-i)+('').join(list(str(i) for i in range(1,i+1)))+('').join(list(str(i) for i in range(i-1,0,-1))))
            
        except EOFError:
            break

    
if __name__ == "__main__":
    func()
