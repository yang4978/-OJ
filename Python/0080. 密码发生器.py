# If you need to import additional packages or classes, please import here.

def func():
    # please define the python3 input here. 
    # For example: a,b = map(int, input().strip().split())
    # please finish the function body here.
    # please define the python3 output here. For example: print().
    while True:
        try:
            n = int(input())
            for _ in range(n):
                s = input()
                res = [0] * 6
                for i in range(len(s)):
                    res[i % 6] += ord(s[i])
                for x in res:
                    temp = x
                    tt = 0
                    while temp >= 10 :
                        while temp:
                            tt += temp % 10
                            temp //= 10
                        temp = tt
                        tt = 0
                    print(temp, end = '')
                print('')                      
        
        except EOFError:
            break
    
if __name__ == "__main__":
    func()
