# If you need to import additional packages or classes, please import here.

def func():
    # please define the python3 input here. 
    # For example: a,b = map(int, input().strip().split())
    # please finish the function body here.
    # please define the python3 output here. For example: print().
    word = input()
    word = word.lower()
    n = int(input())
    for _ in range(n):
        sentence = input()
        temp = sentence
        temp = temp.lower()
        if word in temp:
            print(sentence)
    
if __name__ == "__main__":
    func()
