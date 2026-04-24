class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int dist=INT_MIN;
        int countr=0;
        int countl=0;
        int counts=0;
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='L') countl++;
            else if(moves[i]=='R') countr++;
             else{
                counts++;
             }
        }
        if(countl<=countr){
            dist=((counts+countr)-countl);
        }
        else{
            dist=(counts+countl)-countr;
        }
         return dist;
    }
};