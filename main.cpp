
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
void topic_identifier(string type, vector<string> list)
{
    if (!type.empty())
    {
        
        for (int i = 0; i < list.size(); i++)
        {
            if (find(list.begin(), list.end(), type) !=list.end())
            {
                cout<<"Topic found. Topic: "<<type<<endl;
                cout<<"Would you like to read your notes? 'Y/N"<<endl;
                string in;
                cin>>in;
                if (in == "y" || in == "Y")
                {
                    ifstream read;
                    read.open(type + ".txt");
                    if (!read.is_open())
                    {
                        cout<<"File doesn't exist"<<endl;
                        break;
                    }
                    else
                    {
                        string temp;
                        while (getline(read, temp))
                        {
                            cout<<temp<<endl;
                        }
                    }
                }
                break;
            }
            else
            {
                cout<<"Topic not found"<<endl;
                break;
            }
        }
        
        
    }
}
void topic_list(string type, vector<vector<string>> list)
{
    for(int i = 0; i<list.size(); i++)
    {
        if(list[i][0]==type)
        {
            cout<<list[i][0]<<endl<<endl;
            for(int j = 0; j<list[i].size(); j++)
            {
                cout<<"-"<<list[i][j]<<endl;
            }
        }
    }
    //Insert method to list ALL topics
    //Can't get all matching topics. as in if - or __are active.
    //Put elements in vector into string, then use std::find_first_of to find the topic REGARDLESS of other characters
}
void add_notes(string subject, vector<string> list)
{
    if (!list.empty())
    {
        for (int i = 0; i < list.size(); i++)
        {
            if (find(list.begin(), list.end(), subject) !=list.end())
            {
                cout<<"Topic found. Topic: "<<subject<<endl;
                cout<<"Opening notes..."<<endl;
                ofstream out;
                out.open(subject + ".txt");
                cout<<"File opened. Type in your notes (ENTER key ends notes)"<<endl;
                string notes;
                cin.ignore();
                getline(cin, notes);
                out<<notes<<endl;
                out.close();
                break;
                
            }
            else
            {
                cout<<"Topic not found"<<endl;
                break;
            }
        }
    }
    else
    {
        cout<<"Nothing has been added"<<endl;
    }
}
int main()
{
    //command line for files
    vector<string> filename;
    vector<string> unique_filename;
    vector<vector<string>> links;
    cout << "Command line active. "<<endl;
    string cmd;
    
    bool stop = true;
    while (stop == true)
    {
    break_point:
        cout<<endl;
        cout<<"Menu: Type 'help' for options or type 'exit'" << endl;
        cmd.empty();
        cin >> cmd;
        if (!cmd.empty())
        {
            cout << "Command recognized" <<endl;
            if (cmd.at(0) == '@')
            {
                cmd.erase(0, 1);
                topic_identifier(cmd, filename);
                goto break_point;
            }
            else if (cmd.at(0) == '!')
            {
                cout<<"Command recognized: " << cmd.at(0)<<endl;
                cout<<"Enter the name of the file in which you want to make unique, or type '!' again to list a unique file: ";
                string unique;
                cin>>unique;
                if (!unique.empty())
                {
                    if (unique == "!")
                    {
                        cout<<"Enter the filename"<<endl;
                        string file;
                        cin>>file;
                        for (int i = 0; i < unique_filename.size(); i++)
                        {
                            if (find(unique_filename.begin(), unique_filename.end(), file) !=unique_filename.end())
                            {
                                cout<<"Unique topic found: " <<file<<endl;
                                cout<<"Would you like to read your notes? 'Y/N"<<endl;
                                string in;
                                cin>>in;
                                if (in == "y" || in == "Y")
                                {
                                    ifstream read;
                                    read.open(file + ".txt");
                                    if (!read.is_open())
                                    {
                                        cout<<"File doesn't exist"<<endl;
                                        break;
                                    }
                                    else
                                    {
                                        string temp;
                                        while (getline(read, temp))
                                        {
                                            cout<<temp<<endl;
                                        }
                                    }
                                }
                            }
                            else
                            {
                                cout<<"Topic has not yet been named unique"<<endl;
                                break;
                            }
                        }
                    }
                    else
                    {
                        for (int i = 0; i < filename.size(); i++)
                        {
                            if (find(filename.begin(), filename.end(), unique) != filename.end())
                            {
                                cout<<"Topic found. Topic: "<<unique<<endl;
                                cout<<"Removing from standard list to make it unique..."<<endl;
                                unique_filename.push_back(unique);
                                filename.erase(std::remove(filename.begin(), filename.end(), unique), filename.end());
                                break;
                            }
                            else
                            {
                                cout<<"Subject not added to notes"<<endl;
                                break;
                            }
                        }
                    }
                }
            }
            else if (cmd == "add")
            {
                while (true)
                {
                    string name;
                    cout<<"Name of file: ";
                    cin>> name;
                    filename.push_back(name);
                    cout<<"Continue to add?"<<endl;
                    string ans;
                    cin>>ans;
                    if (ans == "no" || ans == "No")
                    {
                        break;
                        
                    }
                }
                goto break_point;
            }
            else if (cmd.at(0) == '#')
            {
                cout<<"Command recognized: "<<cmd.at(0)<<endl;
                cout<<"Listing all topics with matching description"<<endl;
                cmd.erase(0, 1);
                topic_list(cmd, links);
            }
            else if (cmd == "add_notes")
            {
                cout<<"Enter the subject name"<<endl;
                string subject;
                cin>>subject;
                add_notes(subject, filename);
                cout<<"Notes added"<<endl;
            }
            else if(cmd.at(0) == '^')
            {
                while(true)
                {
                    vector<string>subjectList;
                    string globalTopic;
                    //cout<<"Enter name of linked subject group: ";
                    //cin>>globalTopic;
                    cmd.erase(0,1);
                    globalTopic =cmd;
                    subjectList.push_back(globalTopic);
                
                    cout<<"Select subjects to link from the list below one-by-one (enter 'exit' to complete linkage): "<<endl<<endl;
                
                    for(int i = 0; i<filename.size(); i++)
                    {
                        cout<<filename.at(i)<<endl;
                    }
                    cout<<endl;
                    string s;
                    while(s != "exit")
                    {
                        cin>>s;
                        if(s != "exit")
                        {
                            subjectList.push_back(s);
                        }
                        else
                        {
                            break;
                        }
                    }
                
                    links.push_back(subjectList);
                    cout<<"Added ";
                    for(int i=1; i<subjectList.size(); i++)
                    {
                        cout<<subjectList.at(i)<<", ";
                    }
                    cout<<"to global topic "<<"'"<<subjectList.at(0)<<"'."<<endl;
                    
                    subjectList.clear();
                    cout<<"Continue to create linkages?"<<endl;
                    string ans;
                    cin>>ans;
                    if (ans == "no" || ans == "No")
                    {
                        break;
                    }
                }
                goto break_point;
                
                
            }
            else if (cmd== "help" || cmd == "Help")
            {
                cout<<"Type 'add' to add a subject for notes"<<endl;
                cout<<"Type 'add_notes' to add details to already created note subjects"<<endl;
                cout<<"Type '!' along with the note subject to make it unique"<<endl;
                cout<<"Type '@' along with the note subject to read it"<<endl;
                cout<<"Type '#' along with a subject to get all subjects related to it (must do ^ first)"<<endl;
                cout<< "Type '^' to link subjects together"<<endl;
            }
            else if (cmd == "exit")
            {
                stop = false;
                break;
            }
            else
            {
                cout << "Command " << cmd.at(0) << " has not been implemented" << endl;
            }
            
        }
    }
    return 1;
}
