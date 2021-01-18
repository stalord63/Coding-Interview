
string reverseWord(string str)
    { 
        int l=0;
    int n = str.length(); 
  
    while(l<n){
        
        swap(str[l],str[n-1]);
        l++;
        n--;}
        
        return str;
        
        
        
        
    }