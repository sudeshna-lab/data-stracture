/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>

using namespace std;
int firstUniqChar(string s) {
        int cnt[26] = {0};
        for (auto c: s) {
        
        cout << "  ";
        cnt[c - 97] ++;
        cout << cnt[c - 97] << " ";
        }
        for (auto i = 0; i < s.length(); i ++) {
            cout << cnt[s[i]- 97] << " ";
            if (cnt[s[i] - 97] == 1) {
                return i;
            }
        }
        return -1;
    }
int firstUniqChar2nd(string s) {
        
        
        for(int i=0;i<s.length();i++)
        {
            int count = 1;
            for(int j=0;j<s.length();j++)
            {
                if(i!=j && s[i] == s[j])
                {
                    count++ ;
                    break;
                }
            }
            if(count == 1)
            {
                return i;
            }
        }
       
        return -1;
    }


int main()
{
   // int index = firstUniqChar("aabbcdde");
    int index = firstUniqChar2nd("aabbcdde");
    
   cout << index;
    
}
   

