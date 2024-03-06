# # def main():
# #     t = int(input())
# #     for _ in range(t):
# #         n = int(input())
# #         a = list(map(int, input().split()))

# #         freq = {}
# #         for num in a:
# #             freq[num] = freq.get(num, 0) + 1

# #         xxx = 0
# #         stt, sat = set(), set()

# #         while freq.get(xxx, 0) >= 2:
# #             stt.add(xxx)
# #             sat.add(xxx)
# #             xxx += 1

# #         if freq.get(xxx, 0) > 0:
# #             print(-1)
# #         else:
# #             r = 0
# #             for i in range(n):
# #                 if a[i] in stt:
# #                     stt.remove(a[i])
# #                 if not stt:
# #                     r = i + 1
# #                     break

# #             for i in range(r, n):
# #                 if a[i] in sat:
# #                     sat.remove(a[i])

# #             if not sat:
# #                 print(2)
# #                 print(f"1 {r}")
# #                 print(f"{r + 1} {n}")
# #             else:
# #                 print(-1)

# # if __name__ == "__main__":
# #     main()


# def reverse_string(s):
#     return s[::-1]

# def lexicographically_smallest_string(s):
#     tmp = reverse_string(s)
#     if s <= tmp:
#         return s
#     else:
#         return tmp + s

# def main():
#     t = int(input())
#     for _ in range(t):
#         n = int(input())
#         s = input().strip()

#         result = lexicographically_smallest_string(s)
#         print(result)

# if __name__ == "__main__":
#     main()
