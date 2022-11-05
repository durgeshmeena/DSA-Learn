from sys import stdin, stdout


stdin = open('input.txt', 'r')
stdout = open('output.txt', 'w')
input = stdin.readline

def output(val):
    return stdout.write(str(val))


def main():
    n = int(input())
    a = list(map(int, input().split()))
    a.sort()
    ans = 0
    for i in range(n):
        ans += abs(a[i] - (i + 1))
    # print(ans)
    output(ans)


if __name__ == '__main__':
    main()








