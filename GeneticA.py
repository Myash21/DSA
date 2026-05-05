import random

population = []
for _ in range(6):
    val = random.randint(0, 31)
    population.append(val)


for generation in range(5):
    print(f"\nGeneration {generation+1}: {population}")

    fitness = [x**2 for x in population]

    # Selection: top 2 best
    selected = sorted(population, key=lambda x: x**2, reverse=True)[:2]

    # Crossover
    child1 = (selected[0] + selected[1]) // 2
    child2 = abs(selected[0] - selected[1])

    # Mutation
    child1 += random.randint(-2, 2)
    child2 += random.randint(-2, 2)

    population = []

    population.extend(selected)
    population.append(child1)
    population.append(child2)

    for _ in range(2):
        population.append(random.randint(0, 31))

best = max(population, key=lambda x: x**2)

print("\nBest Solution:", best)
print("Best Fitness:", best**2)
#In the actual application, GA would optimize neural network hyperparameters for modeling spray drying process variables such as temperature, feed rate, and powder yield. This implementation demonstrates the optimization mechanism.”