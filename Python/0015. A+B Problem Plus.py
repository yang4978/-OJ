# If you need to import additional packages or classes, please import here.

def func():
    # please define the python3 input here. 
    # For example: a,b = map(int, input().strip().split())
    # please finish the function body here.
    # please define the python3 output here. For example: print().
    while True:
        try:
            num = int(input())
            for _ in range(num):
                m,n = map(int,input().strip().split())
                print("Case %d:" %(_+1))
                print(m,"+",n,"=",m+n,end="")
                if _ != num-1:
                    print("\n")
            
        except EOFError:
            break
    
if __name__ == "__main__":
    func()
