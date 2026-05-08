// Last updated: 08/05/2026, 10:47:51
int maxArea(int* height, int heightSize) {
 int n = heightSize;
 int i = 0;
 int j = n-1;
 int maxwater = 0;
 int min(int a , int b){
    return (a>b) ? b:a;
 };
 int max(int a , int b){
    return (a<b) ? b:a;
 }
 while(i<j){
    int w = (j-i);
    int h = min(height[i],height[j]);
    int a = w*h;
    maxwater = max(maxwater,a);
    if(height[i]>height[j]){
        j--;
    }
    else{
        i++;
    }
 }   
 return maxwater;
}