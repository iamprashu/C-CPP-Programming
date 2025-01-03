#include <bits/stdc++.h>
using namespace std;

string removeDuplicates(string s, int k)
{
      // stack to store the character with its count
    stack<pair<char, int>> st;

    for (char c : s) {
          // If the character is same as character at top, increase the count of top character
        if (!st.empty() && st.top().first == c) {
            st.top().second++;
            if (st.top().second == k) {
                st.pop();
            }
        }
          // If the character is different from the character at top, push the character to the top
        else {
            st.push({ c, 1 });
        }
    }

    string result = "";
  
     // Construct the result string
    while (!st.empty()) {
        result.append(st.top().second, st.top().first)
        ;
        st.pop();
    }
    reverse(result.begin(), result.end());
    return result;
}

int main()
{
    // Example 1
    string s1 = "deeedbbcccbdaa";
    int k1 = 3;
    cout << removeDuplicates(s1, k1)
         << endl; // Output: "abcd"
    return 0;
}