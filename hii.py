def solve():
    n=int(input())
    v=list(map(int,input().split()))
    s=set()
    for i in v:
        s.add(i)
    print(len(s))
    
solve()