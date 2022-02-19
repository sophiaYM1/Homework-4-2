#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <stdio.h> 
#include <map.h>

using namespace std;


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
			file_data["lines"] += 1;
    			//file_name >> file_data["words"] += 1;
    			for (int index; index < line.length(); index++)
    			{
     				file_data["characters"] += 1;
  			}
			//file_data = find_data(line, map <string, int>  file_data);
		}
    		//file_data = find_data(text);
	}
	//Output 
	
	string map = file_data.toString();
	cout << map << endl;
	string num_l = file_data.get(0);
	string num_2 = file_data.get(1);
	string num_3 = file_data.get(2);
	//cout << "Name of file" << setw(6) << text << endl;
	//cout << "Num of lines" << setw(6) << num_1 << endl;
	//cout << "Num of words" << setw(6) << num_2 << endl;
	//cout << "Num of characters" << setw(6) << num_3 << endl;
	
	text.close();
  	return 0;
}
