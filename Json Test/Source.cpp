#include <iostream>
#include <iomanip>
#include <json.hpp>
#include <fstream>


using json = nlohmann::json;

void RecordDataStructure(std::vector<int> data);

std::vector<std::vector<int>> dataTime = {};


int main()
{
	std::vector<int> recTest = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,23,24,25,26,27,28,29,30000 };

	RecordDataStructure(recTest);
	RecordDataStructure(recTest);
	RecordDataStructure(recTest);
	RecordDataStructure(recTest);
	recTest = { 0,0,0 };
	RecordDataStructure(recTest);
	

	
}

void RecordDataStructure(std::vector<int> data)
{
	json j;
	dataTime.push_back(data);
	j["data structure timeline"] = dataTime;
	std::ofstream o("special.json");
	o << std::setw(4) << j << std::endl;
	o.close();
	system("special.json");

}

