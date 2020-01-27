

def makeChange(bills, target, sol = []):

    if sum(sol) == target :
        print(sol)
        return

    if sum(sol) > target:
        return

    for bill in bills:
        newSol = sol[:]
        newSol.append(bill)
        makeChange(bills, target, newSol)

    return

money = [1,2,5,10,50]
sol = []
makeChange(money,6)