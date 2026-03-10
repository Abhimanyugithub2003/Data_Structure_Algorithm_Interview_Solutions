
jobDifficulty = array of size n

f(i, d):
    n <- jobDifficulty.size
    if i == n or d == 0:
        if i == n and d == 0: return 0
        else: return infinity
    
    result = infinity
    dayDifficulty = 0

    for j <- i to n - d:
        dayDifficulty = max(dayDifficulty, jobDifficulty[j])
        result = min(result, dayDifficulty + f(j + 1, d - 1))
    
    return result


main:
    result = f(0, d)
    if result == infinity:
        result = -1