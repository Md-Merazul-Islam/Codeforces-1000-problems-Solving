def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))

        freq = {}
        for num in a:
            freq[num] = freq.get(num, 0) + 1

        j = 0
        s, ss = set(), set()

        while freq.get(j, 0) >= 2:
            s.add(j)
            ss.add(j)
            j += 1

        if freq.get(j, 0) > 0:
            print(-1)
        else:
            r = 0
            for i in range(n):
                if a[i] in s:
                    s.remove(a[i])
                if not s:
                    r = i + 1
                    break

            for i in range(r, n):
                if a[i] in ss:
                    ss.remove(a[i])

            if not ss:
                print(2)
                print(f"1 {r}")
                print(f"{r + 1} {n}")
            else:
                print(-1)

if __name__ == "__main__":
    main()