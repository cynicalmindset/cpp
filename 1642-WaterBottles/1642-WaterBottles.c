// Last updated: 08/05/2026, 10:44:55
int numWaterBottles(int numBottles, int numExchange) {
    int consumed = 0;
    while(numBottles>=numExchange){
        consumed += numExchange;
        numBottles -= numExchange;
        numBottles += 1;
    }
    return consumed + numBottles;
}