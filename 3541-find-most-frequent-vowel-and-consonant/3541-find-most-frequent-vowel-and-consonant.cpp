class Solution {
public:
    int maxFreqSum(string s) {
        vector<int>arr(26);
        int max1=0;
        int max2=0;
        for(int i=0;i<s.size();i++){
            arr[s[i]-'a']++;
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                if(max2<arr[s[i]-'a']) max2=arr[s[i]-'a'];
            }
            else{
                if(max1<arr[s[i]-'a']) max1=arr[s[i]-'a'];
            }
        }
        cout << max1 << " " << max2;
        return (max2+max1);
    }
};