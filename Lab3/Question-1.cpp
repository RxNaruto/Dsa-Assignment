#include<iostream>
#include<string>
using namespace std;
int lengthOfString(string s){
    int count=0;
    int i=0;
    while(s[i]!=0){
        count++;
        i++;
    }
    return count;
}
void stringToLowerCase(string& s){
    int i=0;
    while(s[i]!=0){
        s[i]=(char)tolower(s[i]);
        i++;
    }
}
int NumberOfVowels(string s){
    stringToLowerCase(s);
    int i=0,count=0;
    while(s[i]!=0){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ){
            count++;
            i++;
        }
        else{
            i++;
        }
        
    }
    return count;
}
bool onlyContainAlphabet(string s){
    int i=0;
    while(s[i]!=0){
        if(!(s[i]>='a' && s[i]<='z')){
            return false;
            break;
        }
        else{
            i++;
        }
    }
    return true;
}
void reverseString(string& s){
    int length=lengthOfString(s);
    if(length%2==0){
        int end=length-1;
        for(int i=0;i<(length/2);i++){
            char temp=s[i];
            s[i]=s[end];
            s[end]=temp;
            end--;

        }
    }
    else{
        int end=length-1;
        for(int i=0;i<(length/2);i++){
            char temp=s[i];
            s[i]=s[end];
            s[end]=temp;
            end--;

        }
        
    }
}
bool palindrome(string s){
    int length=lengthOfString(s);
    if(length%2==0){
        int end=length-1;
        for(int i=0;i<(length/2);i++){
           if(s[i]!=s[end]){
            return false;
            
           }
           else{
            end--;
           }

        }
    }
    else{
        int end=length-1;
        for(int i=0;i<(length/2);i++){
            if(s[i]!=s[end]){
                return false;
            }
            else{
                end--;
            }
        }
        
    }
    return true;

}
void findDuplicate(string s){
    int i=0;
    int length=lengthOfString(s);
    while(s[i]!=0){
        for(int j=1;j<length;j++){
            if(s[i]=='0'){
                continue;
            }
            if(s[i]==s[j]){
                cout<<s[i]<<" ";
                s[j]='0';
            }

        }
        s[i]='0';
        i++;
    }
}
int main()
{
    string s;
    cout<<"Enter the string"<<endl;
    cin>>s;
    //cout<<"The length of string is "<<lengthOfString(s);
    // stringToLowerCase(s);
    // cout<<s;
    // int length=lengthOfString(s);
    // int vowels=NumberOfVowels(s);
    // int words=length-vowels;

    // cout<<"The number of vowels in a string are "<<vowels<<" words are "<< words;
    // cout<<"The string only contain alphabet "<<onlyContainAlphabet(s);
    // reverseString(s);
    // cout<<s;
    // cout<<"The string is palindrom"<<palindrome(s);
    findDuplicate(s);


    
 return 0;
}