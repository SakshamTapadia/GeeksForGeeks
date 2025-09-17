//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string removeConsecutiveCharacter(string& s) {
        // Write your code here
        if (s.empty()) return "";

        string result;
        result += s[0];
        
        for (int i = 1; i < s.length(); ++i) {
            if (s[i] != s[i-1]) {
                result += s[i];
            }
        }
        
        return result;
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.removeConsecutiveCharacter(s) << endl;

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends