# If you need to import additional packages or classes, please import here.

def func():
    # please define the python3 input here. 
    # For example: a,b = map(int, input().strip().split())
    # please finish the function body here.
    # please define the python3 output here. For example: print().
    while True:
        try:
            words = list(map(str,input().strip().split()))
            print("%.2f" %(sum(len(w) for w in words)/len(words)))
        except EOFError:
            break

    
if __name__ == "__main__":
    func()
