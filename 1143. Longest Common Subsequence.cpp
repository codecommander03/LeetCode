class Solution {
public:
    int arr[1001][1001];
    int longestCommonSubsequence(string text1, string text2) {
        int n1 = text1.size();
        int n2 = text2.size();

        for(int i=1;i<=n1;i++){
            for(int j=1;j<=n2;j++){
                //int x = arr[i][j] = max(arr[i-1][j-1],max(arr[i-1][j],arr[i][j-1]));
                int x = max(arr[i-1][j],arr[i][j-1]);
                if(text1[i-1]==text2[j-1]) arr[i][j] = arr[i-1][j-1]+1;
                else arr[i][j] =x;
                //cout<<arr[i][j]<<" ";
            }
            //cout<<endl;
        }
        
        return arr[n1][n2];
    }
};
