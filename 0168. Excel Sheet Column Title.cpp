class Solution {
public:
    string convertToTitle(int columnNumber) {
        if(--columnNumber<=-1) return "";
        //columnNumber--;
        char c = (columnNumber % 26 + 'A');
        return convertToTitle(columnNumber/26) + c;
    }
};
