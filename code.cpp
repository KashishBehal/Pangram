class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string s) {
        // your code here
        transform(s.begin() , s.end() , s.begin(),::tolower);
        unordered_map<char , int>v;
        for(int i=0;i<s.size();i++){
            if(s[i]>='a' && s[i]<='z'){
                v[s[i]]++;
            }
        }
        return v.size()==26;
    }

};
