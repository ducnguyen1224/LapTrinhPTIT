def giai_thua(n):
    if n == 0:
        return 1
    s = 1
    for i in range(1, n + 1):
        s *= i
    return s

def main():
    t = int(input())
    for i in range(t):
        n = int(input())
        print(giai_thua(n))

if __name__ == "__main__":
    main()
