# If you need to import additional packages or classes, please import here.

def func():
    # please define the python3 input here. 
    # For example: a,b = map(int, input().strip().split())
    # please finish the function body here.
    # please define the python3 output here. For example: print().
    while True:
        try:
            brick = input().strip()
            l = len(brick)
            c = brick.count('R')
            res = c
            
            for s in brick:
                c += 1 if s=='G' else -1
                res = min(res,c)
            print(res)
        
        except EOFError:
            break
    
if __name__ == "__main__":
    func()
