class Solution {
    
private:
    unordered_map<string, string> mp;
    int len = 6;
    
    string hashing(string URL){
        string hashCode = "";
        for(int i = 0; i < len; i++){
            int random = rand() % 3;
            
            if(random == 0){
                hashCode += ('0' + rand() % 10);
            }else if(random == 1){
                hashCode += ('a' + rand() % 26);
            }else{
                hashCode += ('A' + rand() % 26);
            }
            
        }
        
        if(mp.find(hashCode) != mp.end()){
            return hashing(URL);
        }else{
            mp[hashCode] = URL;
            return hashCode;
        }
    }
public:
    
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        string tinyURL = "http://tinyurl.com/";
        string hashCode = hashing(longUrl);
        return tinyURL + hashCode;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        string hashCode = shortUrl.substr(shortUrl.size() - len, len);
        return mp[hashCode];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));