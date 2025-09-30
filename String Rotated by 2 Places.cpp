class Solution {
  public:
  
    void rotateClockwise(string &s){
        char c = s[s.size() - 1];
        int index = s.size() -2 ; 
        while(index >= 0){
          s[index + 1] = s[index];
          index--;
        }
        
        s[0] = c;
        
    }
    
    void rotateantiClockwise(string &s){
        char c = s[0];
        int index = 1 ; 
        while(index <= (s.size()-1)){
          s[index - 1] = s[index];
          index++;
        }
        
        s[s.size()-1] = c;
        
        
    }
    bool isRotated(string& s1, string& s2) {
        // code here
        if(s1.size() != s2.size()){
            return  0 ;
        }
        
        string clockwise = s1 ;
        string anticlockwise = s1 ;
        
        rotateClockwise(clockwise);
        rotateClockwise(clockwise);
        
        if(clockwise == s2){
            return  1 ;
        }
        
        rotateantiClockwise(anticlockwise);
        rotateantiClockwise(anticlockwise);
        
        if(anticlockwise == s2){
            return  1 ;
        }
        
        return 0 ;
    }
};
