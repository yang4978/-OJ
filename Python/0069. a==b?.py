# If you need to import additional packages or classes, please import here.

def func():
    # please define the python3 input here. 
    # For example: a,b = map(int, input().strip().split())
    # please finish the function body here.
    # please define the python3 output here. For example: print().
    while True:
        try:
            a,b = map(str,input().strip().split())
            
            for i in range(len(a)-1,-1,-1):
                if a[i] != '0' and a[i] != '.':
                    a = a[:i+1]
                    break
            for j in range(len(b)-1,-1,-1):
                if b[j] != '0' and b[j] != '.':
                    b = b[:j+1]
                    break
            
            print("YES" if a==b else "NO")        
        except:
            break
    
if __name__ == "__main__":
    func()
