income = float(input("What is your monthly income?: "))
rent = float(input("How much is your rent?: "))
utilities = float(input("How much do you spend on utilities?: "))
groceries = float(input("How much do you spend on groceries?: "))
transportation = float(input("How much do you spend on transportation?: "))
savings= float(input("How much is going in to savings this month?: "))

expenses = (rent+utilities+groceries+transportation)

total = (income-expenses-savings)

print("Your monthly income is", (income))
print("Your monthly expenses are", (expenses))