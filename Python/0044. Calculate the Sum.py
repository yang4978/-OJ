# If you need to import additional packages or classes, please import here.
import collections
def func():
    # please define the python3 input here. 
    # For example: a,b = map(int, input().strip().split())
    # please finish the function body here.
    # please define the python3 output here. For example: print().

    while True:
        try:
            test = int(input())
            for _ in range(test):
                res = 0
                m = input().strip()
                n = input().strip()
                dict_n = collections.defaultdict(int)
                for c in n:
                    dict_n[c] += 1

                for c in m:
                    for i in dict_n:
                        res += (int(c)%int(i))*dict_n[i]
                print(res)

        except EOFError:
            break
        
if __name__ == "__main__":
    func()
