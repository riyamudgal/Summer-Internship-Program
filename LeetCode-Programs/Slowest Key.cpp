class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        int temp=releaseTimes[0], dur=0; 
        char c=keysPressed[0];
        
        for(int i=1;i<releaseTimes.size();i++)
        {
            dur=releaseTimes[i]-releaseTimes[i-1];
            if(dur==temp )
            {
                if(keysPressed[i] > c)
                    c=keysPressed[i];
            }
            else if (dur>temp) 
            {
                temp=dur;
                c=keysPressed[i];
            }
                
        }
        return c;
        
    }
};
