# If you need to import additional packages or classes, please import here.

def func():
    while True:
        try:
            a, b, c = map(int, input().split())
            print("%.1f" %(a * 0.2 + b * 0.15 + c * 0.16))
        except EOFError:
            break

if __name__ == "__main__":
    func()
