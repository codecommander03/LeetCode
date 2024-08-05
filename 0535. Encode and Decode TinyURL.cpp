class Solution {
public:
    unordered_map<int,string> m;
    int index = 0;
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        m[index] = longUrl;
        return to_string(index++);
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        int ind = stoi(shortUrl);
        return m[ind];
    }
};
