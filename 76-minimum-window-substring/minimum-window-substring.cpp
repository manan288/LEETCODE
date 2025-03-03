class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>m;
        int i =0;int j=0;
        for(int k =0;k<t.size();k++){
            m[t[k]]++;
        }
int count = 0; int minlen=INT_MAX;int start=0;
        while(j<s.size()){
            if(m[s[j]]>0){
                count++;
            }
            m[s[j]]--;
            while(count==t.size()){
                if (j - i + 1 < minlen) {  
                    minlen = j - i + 1;
                    start = i;
                }
                m[s[i]]++;
                if(m[s[i]]>0){
                    count--;
                }
                i++;
            }
            j++;
        }
        return (minlen == INT_MAX) ? "" : s.substr(start, minlen);
    }
};