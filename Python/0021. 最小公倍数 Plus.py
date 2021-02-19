# If you need to import additional packages or classes, please import here.
def func():
    # please define the python3 input here. 
    # For example: a,b = map(int, input().strip().split())
    # please finish the function body here.
    # please define the python3 output here. For example: print().
    
    while True:
        try:
            n = int(input())
            num = [1]
            for i in range(2,n+1):
                for x in num:
                    if i%x == 0:
                        i //= x
                num.append(i)
            res = 1
            for x in num:
                res *= x
            print(res)
        
        except EOFError:
            break

    
if __name__ == "__main__":
    func()
