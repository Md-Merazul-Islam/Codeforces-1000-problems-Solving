# # n = int(input())
# # a = list(map(int, input().split()))
# # total_sum = sum(abs(x) for x in a)
# # print(total_sum)



# # def calculate_sum(a):
# #     return sum(a)

# # def make_div(a):
# #     s = sum(a)
# #     if s % 3 == 0:
# #         return 0
# #     elif s % 3 == 2:
# #         return 1
# #     else:
# #         for i in range(len(a)):
# #             if (s - a[i]) % 3 == 0:
# #                 return 1
# #     return 2

# # def pros(n, a):
# #     rst = make_div(a)
# #     return rst

# # def read_input():
# #     t = int(input())
# #     tt = []
# #     for _ in range(t):
# #         n = int(input())
# #         a = list(map(int, input().split()))
# #         tt.append((n, a))
# #     return tt

# # def solve_test_cases(tt):
# #     ans = []
# #     for n, a in tt:
# #         rst = pros(n, a)
# #         ans.append(rst)
# #     return ans

# # def print_results(ans):
# #     for rst in ans:
# #         print(rst)

# # def main():
# #     tt = read_input()
# #     ans = solve_test_cases(tt)
# #     print_results(ans)

# # if __name__ == "__main__":
# #     main()

# import math

# t = int(input())

# for _ in range(t):
#     n = int(input())
#     a = list(map(int, input().split()))
#     mp = {}
#     gcd = 0

#     for x in a:
#         gcd = math.gcd(gcd, x)
#         mp[x] = mp.get(x, 0) + 1

#     if mp[gcd] > 1:
#         print("NO")
#     else:
#         print("YES")



def fnmin(fr, scnd):
    ln = len(fr)
    mns = "z" * ln
    cur = fr[0]

    for i in range(1, ln):
        if fr[i] > scnd[i - 1]:
            an = cur + scnd[i - 1:]
            if an < mns:
                mns = an
        cur += fr[i]

    cur += scnd[ln - 1]
    if cur < mns:
        mns = cur

    return mns

def cnp(fr, scnd, mns):
    ln = len(fr)
    cur = fr[0]
    nmp = 1

    for i in range(1, ln):
        if fr[i] >= scnd[i - 1]:
            an = cur + scnd[i - 1:]
            if an == mns:
                nmp += 1
        cur += fr[i]

    cur += scnd[ln - 1]
    if cur == mns:
        nmp += 1

    return nmp

def main():
    t = int(input())
    for _ in range(t):
        ln = int(input())
        fr = input()
        scnd = input()

        mns = fnmin(fr, scnd)
        nmp = cnp(fr, scnd, mns)

        print(mns)
        print(nmp - 1)

if __name__ == "__main__":
    main()
