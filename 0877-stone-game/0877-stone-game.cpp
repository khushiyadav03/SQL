class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        if(piles.size() <= 1) return true;
        // alice odd pick karega nd bob even

        int evenSum = 0, oddSum = 0;
        for(int i = 0; i<piles.size(); i++){
            if(i% 2 == 0){
                evenSum += piles[i];
            } else {
                oddSum += piles[i];
            }
        }

        return true;
    }
};