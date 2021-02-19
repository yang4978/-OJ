# If you need to import additional packages or classes, please import here.

def func():
    while True:
        try:
            s2,n = input().strip().split()
            
            idx = s2.find('.')
            s2 = s2[:idx]+s2[idx+1:]
            n = int(n)
            deci = n*idx
      
            s1 = s2
            l1 = len(s1)
            while n>1:
                l2 = len(s2)
                res = [0]*(l1+l2)
                for i in range(l1-1,-1,-1):
                    for j in range(l2-1,-1,-1):
                        res[i+j+1] += int(s1[i])*int(s2[j])
                        res[i+j] += res[i+j+1]//10
                        res[i+j+1] %= 10
                s2 = ("").join(str(c) for c in res)
                n -= 1
            l = len(s2)
            if l < deci:
                s2 = '0'*(deci-len(s2)) + s2
            s2 = s2[:deci] + '.' + s2[deci:]
            
            i = 0
            while s2[i] == '0':
                i += 1
            s2 = s2[i:]
            
            i = len(s2)-1
            while s2[i] == '0':
                i -= 1
            s2 = s2[:i+1]
            
            print(s2)
        except EOFError:
            break
    
if __name__ == "__main__":
    func()
