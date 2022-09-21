/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-07-19 23:22:28
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-07-19 23:52:09
 */
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
int main(int argc, char const *argv[])
{
    int vowel=0, consonant=0, others=0;
    char word[30];
    cout << "Enter words (q to quit)" << endl;
    while ((cin>>word)&&(strcmp(word,"q")!=0)){
        if(!isalpha(word[0]))
            others++;
        else{
            switch(word[0]){
                case 'a':
                    vowel++;
                    break;
                case 'e':
                    vowel++;
                    break;
                case 'i':
                    vowel++;
                    break;
                case 'o':
                    vowel++;
                    break;
                case 'u':
                    vowel++;
                    break;
                default:
                    consonant++;
                }
        }
    }
    cout << vowel << " " << consonant << " " << others;

    return 0;
}
