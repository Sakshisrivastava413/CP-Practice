
// C++ program to create Set of Pairs 
  
#include <iostream>
#include <utility>
#include <vector>

using namespace std; 
  
typedef pair<int, int> pairs; 
  
// Constant reference 
// reference for speed const to avoid changing values 
void display(const set<pairs>& s) 
{ 
    bool found = false; 
  
    // range-based for loop 
    for (auto const &x : s) { 
        found = true; 
        cout << "(" << x.first << ", "
             << x.second << ")"
             << " "; 
    } 
  
    if (not found) { 
        cout << "No valid pair\n"; 
    } 
} 
int main() 
{ 
    vector<int> v{ 2, 3, 1, 6, 5, 8, 10, 9 }; 
    set<pairs> s; 
      
    sort(v.begin(), v.end()); 
  
    for (int i = 0; i < v.size() - 1; i++) { 
        for (int j = i + 1; j < v.size(); j++) { 
  
            // check for even number 
            // if (v[i] % 2 == 0 && v[j] % 2 == 0) { 
  
                // makes pairs of even numbers 
                pairs x = make_pair(v[i], v[j]); 
  
                // inserts into the set 
                s.insert(x); 
            } 
        }  
  
    // to display the pairs 
    display(s); 
  
    // to clear the set 
    s.clear(); 
}
