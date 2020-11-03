int maxPower(string s) {
        int a[26]={0};
        int count=1;
        int max_c=1;
        for(int i = 0; i < s.size()-1;i++){
            if(s[i]==s[i+1]){
                count++;
            max_c=max(max_c,count);
                
            }
            else
                count=1;;
        }
        return max_c;
    }