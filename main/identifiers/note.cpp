#include <iostream>
#include <dirent.h>
#include <vector>
#include <string>

using namespace std;

int main() {

    DIR*     dir;
    dirent*  pdir;

    dir = opendir(".");     // open current directory

    vector<string>filenames;
    while (pdir = readdir(dir)) 
    {
	 string str = pdir->d_name;
	 string str2 = ".txt";
	 if(str.find(str2)!=string::npos)
	 {
         	filenames.push_back(str);
	 }
    }
    closedir(dir);

    for(int i = 0; i<filenames.size(); i++)
	{
		cout<<filenames.at(i)<<endl;
	}
    return 0;
}
