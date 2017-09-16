#include <iostream>
#include <vector>
#include <stack>
#include <list>
#include <string>
//THIS IS THE CODE I WAS DEMOING IN CLASS USING VISUAL STUDIO
//MERGING THIS CODE WITH MAIN WILL OCCUR.
using namespace std;

/*class notetaking
{
	string subject;
	string notes;

	void set_subject_name(string subject);
	string get_subject_name();
	void write_notes(string notes);
	string get_notes();

	void set_subject_name(string subject)
	{
		this.subject = subject;
	}
	string get_subject_name()
	{
		return subject;
	}
	void write_notes(string notes)
	{
		this.notes = notes;
	}

};*/
struct graph
{
	bool visit;
	list<int>l;
	graph() {
		visit = false;
	}
};
stack<int>position;
graph gra[5];

void top_sort(int i)
{
	gra[i].visit = true;
	list<int>::iterator it;
	for (it = gra[i].l.begin(); it != gra[i].l.end(); it++)
	{
		if (!gra[*it].visit)
		{
			top_sort(*it);
		}
	}
	position.push(i);

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
void note_taker (string type, vector<string>list)
{
}
int main()
{
	vector<string> filename;
	vector<int> index;
	string answer;
	while (true)
	{
		cout << "Enter filename" << endl;
		string file;
		cin >> file;
		filename.push_back(file);
		int num = -1;
		num++;
		index.push_back(num);
		cout << "Continue?" << endl;
		cin >> answer;
		if (answer == "no" || answer == "No")
		{
			break;
		}
	}
	/*for (int i = 0; i < 6; i++) {
		if (!gra[i].visit) {
			top_sort(i);
		}
	}
	while (!position.empty()) {
		int x = position.top();
		cout << x << endl;
		position.pop();
	}*/

	cout << "Command line active" << endl;
	string cmd;
	cin >> cmd;
	if (!cmd.empty())
	{
			cout << "Command recognized: " << cmd.at(0) << endl;
			if (cmd.at(0) == '#')
			{
				cmd.erase(0, 1);
				topic_identifier(cmd, filename);
			}
			else
			{
				cout << "Command " << cmd.at(0) << " has not been implemented" << endl;
			}
		
	}
	
	
    return 0;
}