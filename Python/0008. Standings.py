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
            m_sq = int(math.sqrt(m))
            if m_sq*m_sq != m :
                res = "" 
                n = 0
            else: 
                res = str(m_sq)
                n = 1
            for x in range(m_sq,0,-1):
                if m % x == 0 and x * x != m:
                    res = str(x) + " " + res + " " + str(m//x)
                    n += 2
            res = res.replace("  "," ")
            print(str(n) + " " + res)
            
            
            
        except EOFError:
            break

    
if __name__ == "__main__":
    func()
