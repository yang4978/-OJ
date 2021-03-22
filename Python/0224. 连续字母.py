# If you need to import additional packages or classes, please import here.

def func():
    # please define the python3 input here. 
    # For example: a,b = map(int, input().strip().split())
    # please finish the function body here.
    # please define the python3 output here. For example: print().
    while True:
        try:
            n = input()
            if n.isdigit() == False:
                break
            n = int(n)
            for _ in range(n):
                ss = input()
                ss += '-'
                result = 0
                temp = 0
                last = '0'
                for c in ss:
                    if c == last:
                        temp += 1
                    else:
                        result = max(result, temp)
                        temp = 1 
                        last = c
                print(result)
        except EOFError:
            break
    
if __name__ == "__main__":
    func()
