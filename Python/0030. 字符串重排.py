# If you need to import additional packages or classes, please import here.
import collections
def func():
    # please define the python3 input here. 
    # For example: a,b = map(int, input().strip().split())
    # please finish the function body here.
    # please define the python3 output here. For example: print().
    while True:
        try:
            s = input().strip()
            l = len(s)
            arr = [1]*(l+1)
            for i in range(2,l+1):
                arr[i] = i*arr[i-1]
            letter = collections.defaultdict(int)
            for c in s:
                letter[c] += 1
            res = arr[l]
            for num in letter.values():
                res //= arr[num]
            print(res)

        except EOFError:
            break
    
if __name__ == "__main__":
    func()
