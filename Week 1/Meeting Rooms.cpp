bool canAttendMeetings(vector<vector<int>>& intervals) {
        if(intervals.size()<=1)
            return true;
        std::sort(intervals.begin(), intervals.end(),
			[](const vector<int>& x, const vector<int>& y) {
				return x[0]<y[0];
			});
        for(int i= 0; i < intervals.size()-1;i++){
            if(intervals[i][0]==intervals[i+1][0])
                return false;
            if(intervals[i][1]>intervals[i+1][0])
                return false;
        }
        return true;
    }