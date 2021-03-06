//gfg accepted

class Solution {
  public:
    int doOverlap(int L1[], int R1[], int L2[], int R2[]) {
        
        //if either rectangle is on the left side
        if(L1[0]>R2[0] || L2[0]>R1[0]){
            return false;
        }
        
        //if either rectangle is above other
        if(R1[1]>L2[1] || R2[1]>L1[1]){
            return false;
        }
        
        return true;
    }
};
