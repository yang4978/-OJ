# If you need to import additional packages or classes, please import here.

def func():
    
    # please define the python3 input here. For example: a,b = map(int, input().strip().split())
    
    # please finish the function body here. 
    
    # please define the python3 output here. For example: print().
    
    while True:
        try:
            ss = input().strip()
            ss = ss[2:-2].split('], [')
            n = input()
            importance = [0]
            relationship = [[]]
            for s in ss:
                before, sup = s.split(', [')
                index, weight = before.split(', ')
                importance.append(weight)
                relationship.append(list(sup[:-1].split(', ')))
            result = 0
            queue = [n]
            
            while queue:
                x = queue.pop(0)
                if x == '':
                    continue
                result += int(importance[int(x)]) 
                queue += relationship[int(x)]
            
            print(result)
            
        except EOFError:
            break

if __name__ == "__main__":
    func()
