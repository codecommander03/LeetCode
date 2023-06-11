class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int area1 = abs(ax1-ax2) * abs(ay1-ay2);
        int area2 = abs(bx1-bx2) * abs(by1-by2);

        int a = max(ax1,bx1);
        int b = max(ay1,by1);
        int c = min(ax2,bx2);
        int d = min(ay2,by2);

        int both = (c-a) * (d-b);

        if(bx1 >= ax2 || by1 >= ay2 || bx2 <= ax1 || by2 <= ay1){
            return area1 + area2;
        }
        return area1 + area2 - both;
    }
};
