# If you need to import additional packages or classes, please import here.
def func():
    # please define the python3 input here. 
    # For example: a,b = map(int, input().strip().split())
    # please finish the function body here.
    # please define the python3 output here. For example: print().
    while True:
        try:
            n = int(input())        
            def dfs(num,index,s):                
                if num == 0:
                    print(str(n)+'='+s[1:])                   
                for i in range(index,num+1):
                    dfs(num-i,i,s+"+"+str(i))            
            dfs(n,1,"")
       
        except EOFError:
            break
    
if __name__ == "__main__":
    func()
