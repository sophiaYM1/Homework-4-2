#include <iostream>
#include <fstream>

using namespace std;

void find_data(file_name)
{
	//initialize map
  	map <string, num> file_data;
  	file_data['lines'] = 0;
 	file_data['word'] = 0;
 	file_data['characters'] = 0;
	
 	string line;
	
  	while(getline(filename, line))
	{
		file_data['lines'] += 1;
    		file_name >> file_data['words'] += 1;
    		for (int index; index < line.length(), index++)
    		{
     			file_data['characters'] += 1;
  		}
	}
	file_name.close();
}


int main(int argc, char *argv[])
{
	ifstream text(argv[1]);
	if(text.fail())
	{
		cerr << "Error opening the file.\n";
		return 1;
	}
	map <string, num> file_data;
  	else 
	{
    		file_data = find_data(input_file);
	}
	cout << "Name of file" << setw(6) <<< text << endl;
	cout << "Num of lines" << setw(6) << file_data[0] << endl;
	cout << "Num of words" << setw(6) << file_data[1] << endl;
	cout << "Num of characters" << setw(6) << file_data[2] << endl;
	
  	return 0;
