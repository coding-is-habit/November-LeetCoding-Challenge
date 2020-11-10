vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        for(auto& i:A)
            reverse(i.begin(),i.end());
        for(auto& i:A)
            for(auto& j:i)
            {    
                if(j==0)
                    j=1;
                else 
                    j=0;
            }
        return A;
}