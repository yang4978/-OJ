# If you need to import additional packages or classes, please import here.

def func():
    # please define the python3 input here. 
    # For example: a,b = map(int, input().strip().split())
    # please finish the function body here.
    # please define the python3 output here. For example: print().
    while True:
        try:
            def recursive(a,b):
                if a<b:
                    a,b = b,a
                if b==0:
                    return k
                if b==1:
                    return a-1
                return recursive(a%b,b)+a//b
            
            k = int(input())
            res = k
            for i in range(1,k//2+2):
                res = min(res,recursive(k,i))
            print(res)
            
        except EOFError:
            break
    
if __name__ == "__main__":
    func()
