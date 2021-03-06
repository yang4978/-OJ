# If you need to import additional packages or classes, please import here.

def func():
    # please define the python3 input here. 
    # For example: a,b = map(int, input().strip().split())
    # please finish the function body here.
    # please define the python3 output here. For example: print().
    while True:
        try:
            n = int(input())
            arr = [[0]*n for _ in range(n)]
            cnt = 1
            for i in range(n):
                if i%3 == 0:
                    for j in range(i//3,n-1-i//3*2):
                        arr[i//3][j] = cnt
                        cnt += 1
                    
                elif i%3 == 1:
                    for j in range(i//3,n-i//3*2):
                        arr[j][n-j-1-i//3] = cnt
                        cnt += 1
                else:
                    for j in range(n-i//3*2-2,i//3,-1):
                        arr[j][i//3] = cnt
                        cnt += 1
            if n%3 == 1:
                arr[n//3][n//3] = (1+n)*n//2
            for l in arr:
                for i in range(n):
                    if i == 0:
                        print(l[i],end='')
                    elif l[i]:
                        print('',l[i],end='')
                print('')
        except EOFError:
            break
if __name__ == "__main__":
    func()
