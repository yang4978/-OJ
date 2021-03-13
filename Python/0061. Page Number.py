# If you need to import additional packages or classes, please import here.

def func():
    # please define the python3 input here. 
    # For example: a,b = map(int, input().strip().split())
    # please finish the function body here.
    # please define the python3 output here. For example: print().
    while True:
        try:
            n,k = map(int,input().split())
            if n<7:
                for i in range(1,n):
                    print(i," ",sep='',end='')
                print(n,end='')
            
            else:
                print(1,end=' ')
                if k<=4:
                    for i in range(2,k+2+1):
                        print(i," ",sep='',end='')
                else:
                    print("... ",end='')
                    for i in range(k-2,min(k+2,n-1)+1):
                        print(i," ",sep='',end='')

                if k<n-3:
                    print("... ",sep='',end='')
                print(n,sep='',end='')
            
        except EOFError:
            break
    
if __name__ == "__main__":
    func()
