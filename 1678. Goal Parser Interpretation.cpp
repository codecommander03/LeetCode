class Solution {
public:
    string interpret(string command) {
        int j=0;
        int n = command.size();
        string s="";
        while(j<n){
            if(command[j]=='G'){
                j++;
                s += 'G';
            }
            if(command[j]=='('){
                int i=j;
                while(j<n && command[j]!=')') j++;
                if(j-i==1) s+='o';
                else s = s+"al";
                j++;
            }
        }
        return s;
    }
};
