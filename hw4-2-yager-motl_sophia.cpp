#include <iostream>
#include <iomanip>
#include "map.h"
#include <sstream>

using namespace std;

/*This function returns the total count of lines, words, and characters of a text file. INPUT: This filename and a user-chosen text file. 
OUTPUT: Total count of these elements to the user.*/
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
		char character;
		Map <string, int> file_data;
		while(getline(text, line))
		{
			{
			file_data["lines"] += 1;
			}
			stringstream lineStream(line);
       			while(getline(lineStream, line, ' '))
       		 	{
            			file_data["words"] += 1;
				for (int index = 0; index < line.length(); index++)
				{
					file_data["characters"] += 1;
				}
        		}
  		}
		cout << file_data << endl;
	//Output
	string num_1 = to_string (file_data["lines"]) ;
	string num_2 = to_string (file_data["words"]) ;
	string num_3 = to_string (file_data["characters"]) ;
	cout << "Name of file is " << setw(6) << argv[1] << endl;
	cout << "Num of lines" << setw(6) << num_1 << endl;
	cout << "Num of words" << setw(6) << num_2 << endl;
	cout << "Num of characters" << setw(6) << num_3 << endl;
	}
	text.close();
  	return 0;
}
