#include <iostream>
#include <regex>
#include <cstdlib>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;


//testing the commit of new line of code on existing .cpp file
/*class notetaking
{
  string subject; bool unique; vector<notetaking> notes;
  public: 
  void set_name(string);
  string get_name();
  void is_unique(bool);
  bool check_unique();
  void add_notes(vector<notetaking>);
  
};
void notetaking::set_name(string subject)
{
    this.subject=subject;
}
void notetaking::is_unique(bool unique)
{
    this.unique=unique;
}
string notetaking::get_name()
{
    return subject;
}
bool notetaking::check_unique()
{
    return unique;
}
void notetaking::add_notes(vector<notetaking> add)
{
    notes.push_back(add.begin(), add.end());
}*/
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
			if (find(list.begin(), list.end(), type) != list.end())
			{
				cout << "Topic found. Topic: " << type << endl;
				break;
			}
			else
			{
				cout << "Topic has not been added to notes" << endl;
				break;
			}
		}
	}
}

int main()
{
    //command line for files
   vector<string> filename;
   vector<string> unique_filename;
    cout << "Command line active" << endl;
	string cmd;
	bool stop = true;
	while (stop = true)
	{
	    break_point:
	    cmd.empty();
	    cin >> cmd;
	    if (!cmd.empty())
	    {
			cout << "Command recognized: " << cmd.at(0) << endl;
			if (cmd.at(0) == '#')
			{
				cmd.erase(0, 1);
				topic_identifier(cmd, filename);
				goto break_point;
			}
			else if (cmd.at(0) == '!')
			{
			    cout<<"Command recognized: " << cmd.at(0)<<endl;
			    cout<<"Enter the name of the file in which you want to make unique: ";
			    string unique; 
			    cin>>unique;
			    if (!unique.empty())
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
			              cout<<"Subjcet not added to notes"<<endl; 
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
			else
			{
				cout << "Command " << cmd.at(0) << " has not been implemented" << endl;
			}
		
	    }
	}
    return 1;
    
}
