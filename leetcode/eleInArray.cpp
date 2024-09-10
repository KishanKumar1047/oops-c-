
#include<iostream>
#include<climits>
#include<vector>
using namespace std ;
int  main () 
{
    
        string haystack = "carbugs";
        string needle = "bugs";
        int n = haystack.size();
        int p = needle.size();
        
        if (p == 0) return 0;  // If needle is empty, return 0
        if (n < p) return -1;  // If haystack is smaller than needle, return -1
        
        for (int i = 0; i <= n - p; i++) {
            int j;
            for (j = 0; j < p; j++) {
                if (haystack[i + j] != needle[j]) {
                    break;
                }
            }
        
            if (j == p) cout<<i;  // If the entire needle is found, return the starting index
        }
        
   
return 0;
}
