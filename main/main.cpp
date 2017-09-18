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
void topic_list(string type, vector<string> list)
{
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
					out<<notes;
					out.close();
					
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
    cout << "Command line active. Type 'help' for options or type 'exit'" << endl;
	string cmd;
	bool stop = true;
	while (stop = true)
	{
	    break_point:
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
			                    break;
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
				topic_list(cmd, filename);
			}
			else if (cmd == "add_notes")
			{
				cout<<"Enter the subject name"<<endl;
				string subject;
				cin>>subject;
				add_notes(subject, filename);
				cout<<"Notes added"<<endl;
			}
			else if (cmd== "help" || cmd == "Help")
			{
				cout<<"Type 'add' to add a subject for notes"<<endl;
				cout<<"Type 'add_notes' to add details to already created note subjects"<<endl;
				cout<<"Type '!' along with the note subject to make it unique"<<endl;
				cout<<"Type '@' along with the note subject to read it"<<endl;
				cout<<"Type '#' along with a subject to get all subjects related to it"<<endl;
				cout<< "Type '^' to link two subjects together"<<endl;
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
