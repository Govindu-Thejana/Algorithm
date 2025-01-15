#include<iostream>
using namespace std;



void search(string pattern, string combine){
    int patLength=pattern.length();
    int txtLength = combine.length();

        for (int i = 0; i < txtLength; i++)
        {
            bool found = true;
            for (int j = 0; j < patLength; j++)
            {
                if (combine[i+j]!= pattern[j])
                {
                    found = false;
                    break;
                }
                
            }
            if (found)
            {
                cout<<"Pattern founf at index "<<i<<endl;
            }
            
            
            
        }
        
    

    

}




int main(){

    string txt="abcxcvbhjnkaabctuyiuabctvyubiunabcvyibuoniabc";
    string pattern="abc";
    string combine=pattern+"#"+txt;
    search(pattern,txt);

}