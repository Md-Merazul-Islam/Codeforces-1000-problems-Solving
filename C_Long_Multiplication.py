# Function to solve the problem
def solve_problem():
    ttt = int(input())
    for _ in range(ttt):
        cnt = -1
        s1 = input()
        s2 = input()
        ss1 = ""
        ss2 = ""
        for i in range(len(s1)):
            if s1[i] != s2[i]:
                ss1 += s1[i:]
                ss2 += s2[i:]
                cnt = i
                break
            else:
                ss1 += s1[i]
                ss2 += s2[i]
        if cnt == -1:
            print(s1)
            print(s2)
        else:
            for i in range(cnt + 1, len(s1)):
                if s1[cnt] < s2[cnt]:
                    ss1 += max(s1[i], s2[i])
                    ss2 += min(s1[i], s2[i])
                else:
                    ss2 += max(s1[i], s2[i])
                    ss1 += min(s1[i], s2[i])
            print(ss1)
            print(ss2)

# Calling the function to solve the problem
solve_problem()
