# If you need to import additional packages or classes, please import here.
import re
def func():
    # please define the python3 input here. 
    # For example: a,b = map(int, input().strip().split())
    # please finish the function body here.
    # please define the python3 output here. For example: print().
    while True:
        try:
            sentence = input().strip()
            sentence = re.sub(r'[^a-zA-Z]',' ',sentence)
            s_part = list(sentence.split())
            sentence = (' ').join([s[0].upper()+s[1:] for s in s_part]) +'.'
            print(sentence)
        
        except EOFError:
            break
