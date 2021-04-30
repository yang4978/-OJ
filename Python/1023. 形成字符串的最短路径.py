# If you need to import additional packages or classes, please import here.
def is_substr(sub, s):
    m = len(sub)
    n = len(s)
    i, j = 0, 0

    while i < m and j < n:
        if(sub[i] == s[j]):
            i += 1
            j += 1
        else:
            j += 1
    return i  == m
            
def func():
    # please define the python3 input here. 
    # For example: a,b = map(int, input().strip().split())
    # please finish the function body here.
    # please define the python3 output here. For example: print().
    source = input()
    target = input()
        
    res = 0
    i, j = 0, 1
    m = len(target)
    while i < m :
        if is_substr(target[i:j], source):
            if j < m:
                j += 1
            else:
                res += 1
                break
        else:
            if j-i==1:
                res = -1
                break
            else:
                res += 1
                i = j - 1
    print(res)
if __name__ == "__main__":
    func()
