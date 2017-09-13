#include <iostream>
#include <regex>
#include <vector>
#include <string>

using namespace std;


string find(string key)
{
    regex keys("@!#");
    if (regex_match (key,keys))
    {
        cout<<"Key is recognized"<<endl;
        return key;
        
    }
    else
    {
        cout<<"Wrong key or does not exist"<<endl;
        
    }
    return "failed";
  
}

int main()
{
    //command line for files
    vector<string> files;
    cout<<"Enter your files"<<endl;
    bool flag = true;
    while (flag)
    {
        string enter;
        cin>>enter;
        files.push_back(enter);
        cout<<"contiue? (y/n)"<<endl;
        string ans;
        cin>>ans;
        if (ans == "n" || ans == "N")
        {
            flag =false;
            break;
        }
    }
    cout<<"Enter keyword"<<endl;
    string key;
    cin>>key;
    find(key);
    return 1;
    
}
