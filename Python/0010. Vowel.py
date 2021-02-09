# If you need to import additional packages or classes, please import here.

def func():
    # please define the python3 input here. 
    # For example: a,b = map(int, input().strip().split())
    # please finish the function body here.
    # please define the python3 output here. For example: print().
    while True:
        try:
            s = input().strip()
            vowel = ['a','e','i','o','u','A','E','I','O','U']
            for c in s:
                if c!=' ':
                    if c in vowel:
                        c = c.upper()
                    else:
                        c = c.lower()
                print(c,end='')
            print("")
        except EOFError:
            break

    
if __name__ == "__main__":
    func()
