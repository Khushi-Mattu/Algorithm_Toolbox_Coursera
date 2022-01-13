def maxWeight(cap, items):
    n = len(items)
    T = [[0] * (cap + 1) for _ in range(n + 1)]
    for i in range(1, n + 1):
        for w in range(1, cap + 1):
            T[i][w] = T[i - 1][w]
            if w >= items[i - 1]:
                weight = T[i - 1][w - items[i - 1]] + items[i - 1]
                if weight > T[i][w]:
                    T[i][w] = weight
    return T


def optimalSolution(T, cap, items):
    n = len(items)
    i = n
    w = cap
    used_items = []
    while i > 0 and w > 0:
        if T[i][w] == T[i - 1][w]:
            i = i - 1
        else:
            used_items.append(i - 1)
            w = w - items[i - 1]
            i = i - 1
    return used_items


def partitionK(cap, items,k):
    if cap % k != 0:
        return 0
    else:
        cap = cap // k
    for bag in range(k - 1):
        T = maxWeight(cap, items)
        
        if T[len(items)][cap] != cap:
            return 0
        else:
            used_items = optimalSolution(T, cap, items)
            for index in used_items:
                items.pop(index)
        
    return 1


n = int(input())
num = input()
nums = list(map(int, num.split()))
total = sum(nums)
print(partitionK(total, nums, 3))