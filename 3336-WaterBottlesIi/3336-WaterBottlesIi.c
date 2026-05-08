// Last updated: 08/05/2026, 10:44:09
int maxBottlesDrunk(int numBottles, int numExchange) {
    int n = numBottles;
    int e = numExchange;

    int empty = n;
    int drank = n;
    while(empty>=e){
        empty -= e;
        drank ++;
        empty ++;
        e ++;

    }
    return drank;
}