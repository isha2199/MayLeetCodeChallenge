class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        vector<int> trusts(N + 1, 0);
        if(trust.size() == 0)
        {
            return (N==1 ? 1:-1);
        }
        for(auto i : trust){
            trusts[i[0]]--;
            trusts[i[1]]++;
        }
        for(int i = 1;i <= N;i++){
            if(trusts[i] == N - 1)
                return i;
        }
        return -1;
    }
};
