int minCostClimbingStairs(int* cost, int costSize) {

    for(int i = 2; i < costSize; i++) {
        if(cost[i - 1] < cost[i - 2])
            cost[i] += cost[i - 1];
        else
            cost[i] += cost[i - 2];
    }

    if(cost[costSize - 1] < cost[costSize - 2])
        return cost[costSize - 1];

    return cost[costSize - 2];
}