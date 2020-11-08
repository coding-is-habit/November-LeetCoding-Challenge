int twoSumLessThanK(vector<int>& A, int k) {
        if(A.size()<=1)
            return -1;
        int S=-1;
        sort(A.begin(),A.end());
        for(int i = 0,j=A.size()-1; i < j;)
        {
            if(A[i]+A[j]<k)
                S=max(S,A[i++]+A[j]);
            else 
                j--;
        }
        return S;
    }