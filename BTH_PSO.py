import random
import copy
import sys

class Solution:
    def __init__(self, fitness, dim, minx, maxx, seed):
        self.rnd = random.Random(seed)
        self.values = [0.0 for _ in range(dim)]
        self.velocity = [0.0 for _ in range(dim)]
        self.best_pos = [0.0 for _ in range(dim)]

        for i in range(dim):
            self.values[i] = ((maxx - minx) * self.rnd.random() + minx)
            self.velocity[i] = ((maxx - minx) * self.rnd.random() + minx)

        self.fitness = fitness(self.values)
        self.best_pos = copy.copy(self.values) 
        self.best_fitnessVal = self.fitness

def fitness_function(values):
    fitnessVal = 0.0
    sum = 3 * values[0] + 2 * values[1] + values[2] + values[3]
    fitnessVal = abs(sum - 34)
    return fitnessVal

def pso(fitness, max_iter, n, dim, minx, maxx):
    w = 0.729    # inertia
    c1 = 1.49445 # cognitive (particle)
    c2 = 1.49445 # social (swarm)

    rnd = random.Random(0)

    # create n random particles
    swarm = [Solution(fitness, dim, minx, maxx, i) for i in range(n)]
    
    # compute the value of best_position and best_fitness in swarm
    best_swarm_pos = [0.0 for _ in range(dim)]
    best_swarm_fitnessVal = sys.float_info.max # swarm best

    # computer best particle of swarm and it's fitness
    for i in range(n): # check each particle
        if swarm[i].fitness < best_swarm_fitnessVal:
            best_swarm_fitnessVal = swarm[i].fitness
            best_swarm_pos = copy.copy(swarm[i].values) 
 
    # main loop of pso
    Iter = 0
    while Iter < max_iter:
     
        # after every 10 iterations 
        # print iteration number and best fitness value so far
        if Iter % 10 == 0 and Iter > 1:
            print("Iter = " + str(Iter) + " best fitness = %.3f" % best_swarm_fitnessVal)
 
        for i in range(n): # process each particle
            # compute new velocity of curr particle
            for k in range(dim): 
                r1 = rnd.random()    # randomizations
                r2 = rnd.random()
            
                swarm[i].velocity[k] = ( 
                                        (w * swarm[i].velocity[k]) +
                                        (c1 * r1 * (swarm[i].best_pos[k] - swarm[i].values[k])) + 
                                        (c2 * r2 * (best_swarm_pos[k] -swarm[i].values[k])) 
                                        )  
 
 
        # if velocity[k] is not in [minx, max]
        # then clip it 
        if swarm[i].velocity[k] < minx:
            swarm[i].velocity[k] = minx
        elif swarm[i].velocity[k] > maxx:
            swarm[i].velocity[k] = maxx
 
 
        # compute new position using new velocity
        for k in range(dim): 
            swarm[i].values[k] += swarm[i].velocity[k]
    
        # compute fitness of new position
        swarm[i].fitness = fitness(swarm[i].values)
    
        # is new position a new best for the particle?
        if swarm[i].fitness < swarm[i].best_fitnessVal:
            swarm[i].best_fitnessVal = swarm[i].fitness
            swarm[i].best_pos = copy.copy(swarm[i].values)
 
        # is new position a new best overall?
        if swarm[i].fitness < best_swarm_fitnessVal:
            best_swarm_fitnessVal = swarm[i].fitness
            best_swarm_pos = copy.copy(swarm[i].values)
     
        # for-each particle
        Iter += 1
    #end_while
    return best_swarm_pos
#end_pso

print("\nBegin particle swarm optimization\n")
dim = 4
fitness = fitness_function

num_particles = 100
max_iter = 100
print("Setting num_particles = " + str(num_particles))
print("Setting max_iter    = " + str(max_iter))
print("\nStarting PSO algorithm\n")

best_position = pso(fitness, max_iter, num_particles, dim, -10.0, 10.0)


print("\nPSO completed\n")
print("\nBest solution found:")
print(["%.6f"%best_position[k] for k in range(dim)])
fitnessVal = fitness(best_position)
print("fitness of best solution = %.6f" % fitnessVal)
 
print("\nEnd particle swarm\n")
