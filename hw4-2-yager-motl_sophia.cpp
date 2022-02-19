#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <stdio.h> 
#include <map.h>

using namespace std;

int find_data(string line, map <string, int> & file_data)
{
	file_data["lines"] += 1;
    	//file_name >> file_data["words"] += 1;
    	for (int index; index < line.length(); index++)
    	{
     		file_data["characters"] += 1;
  	}
	return file_data;
}


int main(int argc, char *argv[])
{
	
	//initialize map
  	Map <string, int> file_data;
  	file_data["lines"] = 0;
 	file_data["words"] = 0;
 	file_data["characters"] = 0;
	
	//Check input file
	ifstream text(argv[1]);
	if(text.fail())
	{
		cerr << "Error opening the file.\n";
		return 1;
	}
  	else 
	{
		string line; 
		Map <string, int> file_data;
		while(getline(text, line))
		{
			file_data = find_data(line, map <string, int>  file_data);
		}
    		//file_data = find_data(text);
	}
	//cout << "Name of file" << setw(6) <<< text << endl;
	//cout << "Num of lines" << setw(6) << file_data[0] << endl;
	//cout << "Num of words" << setw(6) << file_data[1] << endl;
	//cout << "Num of characters" << setw(6) << file_data[2] << endl;
	
	text.close();
  	return 0;
}
