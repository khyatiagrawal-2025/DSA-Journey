int minCostToMoveChips(int* position, int positionSize) {

    int odd = 0;
    int even = 0;

    for(int i = 0; i < positionSize; i++) {

        if(position[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    if(odd < even)
        return odd;

    return even;
}