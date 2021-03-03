# If you need to import additional packages or classes, please import here.
def func():
    # please define the python3 input here. 
    # For example: a,b = map(int, input().strip().split())
    # please finish the function body here.
    # please define the python3 output here. For example: print().
    arr = [1,1,0]
    while True:
        try:
            n = int(input())
            temp = n
            res = ""
            if(len(arr)<n+1):
                arr += (n+1-len(arr))*[0]
            for i in range(2,n+1):
                if arr[i] == 0:
                    for k in range(2,n//i+1):
                        arr[i*k] = 1
            for i in range(2,n+1):
                if arr[i] == 0:
                    while(temp%i==0):
                        temp//=i
                        res += str(i)+'*'
            print(res[:-1]+'='+str(n))
            
        except EOFError:
            break

    
if __name__ == "__main__":
    func()
