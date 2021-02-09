# If you need to import additional packages or classes, please import here.

def func():
    # please define the python3 input here. 
    # For example: a,b = map(int, input().strip().split())
    # please finish the function body here.
    # please define the python3 output here. For example: print().
    
    while True:
        try:
            m = int(input())
            arr = []
            for _ in range(m):
                arr.append(list(input().strip().split()))
            arr.sort(key = lambda x:(-int(x[1]),-int(x[2]),-int(x[3]),x[0]))
            for x in arr:
                print(x[0])
            return
        
        except EOFError:
            break

    
if __name__ == "__main__":
    func()
