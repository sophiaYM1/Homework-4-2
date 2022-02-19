#include <iostream>
#include <fstream>

using namespace std;

void find_data(str file_name)
{
  map <string, num> file_data;
  file_data['lines'] = 0;
  file_data['word'] = 0;
  file_data['characters'] = 0;
  while(getline(filename, line))
	{
		file_data['lines'] += 1;
    file_name >> file_data['words'] += 1;
    for (int index; index < line.length(), index++)
    {
      file_data['characters'] += 1;
    }
	}
	inputFile.close();

}


int main(int argc, char *argv[])
{
	//Variables and input
 	ifstream inputFile;
		
	if (argc < 3)
	{
		cerr << "Usage: " << argv[0] << " filename start_word" << endl;
		return 1;
	}
	
	ifstream text(argv[1]);
	if(text.fail())
	{
		cerr << "Error opening the file.\n";
		return 1;
	}
  else 
    find_data(input_file);
  return 0;
