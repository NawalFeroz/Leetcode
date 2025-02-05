class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1==s2){
            return true;
        }
        vector<int> sw;
        for(int i=0;i<s1.length();i++){
            if(s1[i]!=s2[i]){
                sw.push_back(i);
            }
        }
        if(sw.size()!=2){
            return false;
        }
        swap(s2[sw[0]],s2[sw[1]]);
        if(s1==s2){
            return true;
        }
        else{
            return false;
        }
    }
};