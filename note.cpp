#include <iostream>
#include <regex>
#include <cstdlib>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>
#include <stack>
#include <list>

using namespace std;

class Graph //COURTESY OF GEEKSFORGEEKS.ORG
{
    int V;    // No. of vertices'
    
    // Pointer to an array containing adjacency listsList
    list<int> *adj;
    
    // A function used by topologicalSort
    void topologicalSortUtil(int v, bool visited[], stack<int> &Stack);
public:
    Graph(int V);   // Constructor
    
    // function to add an edge to graph
    void addEdge(int v, int w);
    
    // prints a Topological Sort of the complete graph
    void topologicalSort();
};

Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w); // Add w to v’s list.
}

// A recursive function used by topologicalSort
void Graph::topologicalSortUtil(int v, bool visited[],
                                stack<int> &Stack)
{
    // Mark the current node as visited.
    visited[v] = true;
    
    // Recur for all the vertices adjacent to this vertex
    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            topologicalSortUtil(*i, visited, Stack);
    
    // Push current vertex to stack which stores result
    Stack.push(v);
}

// The function to do Topological Sort. It uses recursive
// topologicalSortUtil()
void Graph::topologicalSort()
{
    stack<int> Stack;
    
    // Mark all the vertices as not visited
    bool *visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;
    
    // Call the recursive helper function to store Topological
    // Sort starting from all vertices one by one
    for (int i = 0; i < V; i++)
        if (visited[i] == false)
            topologicalSortUtil(i, visited, Stack);
    
    // Print contents of stack
    while (Stack.empty() == false)
    {
        cout << Stack.top() << " ";
        Stack.pop();
    }
}

void topic_identifier(string type, vector<string> list) //Finds topics, generates said topic.
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
void topic_list(string type, vector<vector<string>> list) //Finds topics under a general theme. Generates a report.
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
}
void add_notes(string subject, vector<string> list) //Method to add notes to already created topics.
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

void create_map(vector<vector<string>> link, vector<string>file)
{
    int u, v;
    vector<int> uVec;
    vector<int> vVec;
    vector<string> totalVector;
    for(int i = 0; i<link.size(); i++)
    {
        totalVector.push_back(link[i][0]);
    }
    for(int i = 0; i<file.size(); i++)
    {
        totalVector.push_back(file.at(i));
    }
    for(int i = 0; i<link.size(); i++)
    {
        u = find(totalVector.begin(), totalVector.end(), link[i][0]) - totalVector.begin();
        for(int j = 1; j<link[i].size(); j++)
        {
            v = find(totalVector.begin(), totalVector.end(), link[i][j]) - totalVector.begin();
            uVec.push_back(u);
            vVec.push_back(v);
        }
        
    }
    Graph g(uVec.size());
    for(int i = 0; i<uVec.size();i++)
    {
        g.addEdge(uVec.at(i),vVec.at(i));
    }
    cout<<"Topological sort of current graph: "<<endl;
    g.topologicalSort();
    
}

int main() //Main method.
{
    //command line for files
    vector<string> filename;
    vector<string> unique_filename;
    vector<vector<string>> links;
    vector<vector<string>> urlLinks;
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
            else if (cmd == "url")
            {
                vector<string>urlList;
                cout<<"Enter 'url' to add URL to topic. Enter 'view' to view URL listings with topics."<<endl;
                string resp;
                cin>>resp;
               
                if(resp=="url")
                {
                    while(true)
                    {
                        cout<<"Choose from the following topics in which to link a URL:"<<endl<<endl;
                        for(int i = 0; i<filename.size(); i++)
                        {
                            cout<<filename.at(i)<<endl;
                        }
                        string answr;
                        cin>>answr;
                        urlList.push_back(answr);
                        string s;
                        cout<<endl;
                        cout<<"Enter URLs for '"<<answr<<"' separated by <enter>. Type 'exit' to quit."<<endl;
                        while(s != "exit")
                        {
                            cin>>s;
                            if(s != "exit")
                            {
                                urlList.push_back(s);
                            }
                            else
                            {
                                break;
                            }
                        }
                        urlLinks.push_back(urlList);
                        cout<<"Continue to add more URLs?"<<endl;
                        string ans;
                        cin>>ans;
                
                        if (ans == "no" || ans == "No")
                        {
                            break;
                        }
                    }
                }
                else if(resp=="view")
                {
                    for(int i = 0; i<urlLinks.size(); i++)
                    {
                        for(int j = 0; j<urlLinks[i].size(); j++)
                        {
                            cout<<urlLinks[i][j]<<endl;
                        }
                        cout<<endl;
                    }
                }
                else
                {
                    cout<<"Invalid command.";
                    break;
                }
                
            }
            else if(cmd.at(0) == '^')
            {
                vector<string>subjectList;
                string globalTopic;
                cmd.erase(0,1);
                globalTopic =cmd;
                subjectList.push_back(globalTopic);
                while(true)
                {
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
                    cout<<"Enter name of linked subject group: ";
                    cin>>globalTopic;
                    subjectList.push_back(globalTopic);
                }
                goto break_point;
                
                
            }
            else if (cmd =="map" || cmd=="Map")
            {
                create_map(links, filename);
                
            }
            else if (cmd =="report" || cmd=="Report")
            {
                
                for(int i = 0; i<links.size(); i++)
                {
                    cout<<"Global topic: "<<links[i][0];
                    cout<<endl<<endl;
                    cout<<"Subtopics: "<<endl;
                    for(int j = 1; j<links[i].size(); j++)
                    {
                        cout<<"-"<<links[i][j]<<endl;
                    }
                    cout<<endl;
                }
                
            }
            else if (cmd== "help" || cmd == "Help")
            {
                cout<<"Type 'add' to add a subject for notes"<<endl;
                cout<<"Type 'add_notes' to add details to already created note subjects"<<endl;
                cout<<"Type '!' along with the note subject to make it unique"<<endl;
                cout<<"Type '@' along with the note subject to read it"<<endl;
                cout<<"Type '#' along with a subject to get all subjects related to it (must do ^ first)"<<endl;
                cout<< "Type '^' to link subjects together"<<endl;
                cout<< "Type 'url' to add url to topic or to view urls linked to topics"<<endl;
                cout<<"Type 'report' to list all of your note topics and global topics (excluding unique topics)"<<endl;
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
