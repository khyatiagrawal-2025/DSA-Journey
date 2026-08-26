int maxArea(int* height, int heightSize) {
    int i=0; 
    int j=heightSize-1;
    int maxArea = 0;
    while(i<j){
        int width = height[i]<height[j] ? height[i]:height[j];
        int length = j-i;
        int area = length*width;
        if(maxArea<area){
            maxArea = area;
        }
        if(height[i]<height[j]){
            i++;
        }
        else{
            j--;
        }
    }
    return maxArea;
}