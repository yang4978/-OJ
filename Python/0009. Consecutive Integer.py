# If you need to import additional packages or classes, please import here.
import math
def func():
    # please define the python3 input here. 
    # For example: a,b = map(int, input().strip().split())
    # please finish the function body here.
    # please define the python3 output here. For example: print().
    while True:
        try:
            m = int(input())
            while m > 1:
                if m%2:
                    print("YES")
                    return
                else:
                    m //= 2
            print("NO")
            return
            
        except EOFError:
            break
    
if __name__ == "__main__":
    func()
