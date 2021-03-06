# If you need to import additional packages or classes, please import here.

def func():
    # please define the python3 input here. 
    # For example: a,b = map(int, input().strip().split())
    # please finish the function body here.
    # please define the python3 output here. For example: print().
    while True:
        try:
            s1 = ('').join(list(input().strip().split()))
            s2 = ('').join(list(input().strip().split()))
            print("Yes" if s1.lower()==s2.lower() else "No")
        except EOFError:
            break
    
if __name__ == "__main__":
    func()
