#include <iostream>
#include <regex>
#include <cstdlib>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

//testing the commit of new line of code on existing .cpp file
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

void read_file(string filename)
{
    ifstream file;
    
    file.open(filename.c_str());
    
    if (!file.is_open())
    {
        cout<<"Can't open file"<<endl;
    }
    else
    {
       string store;
       while (file.peek() != EOF)
       {
           getline (file, store);
           cout<< store;
       }
    }
    file.clear();
    file.close();
    
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
