#include <iostream>
#include <map>
#include <string>


int main(void){
	std::multimap<std::string, int> inventory; //initiate dynamic container
	
	int current_slots = 0, wanted_slots, read_input = -1;
	
	while (read_input != 0){
		std::cout << "there are currently " << current_slots << " slots in your inventory." << std::endl;
		std::cout << "Insert how many?" << std::endl << "> ";
		std::cin >> read_input;
		wanted_slots = read_input + current_slots; //Debug. How many TOTAL slots user wants. If different from ACTUAL total slots IF something goes wrong.
		
		//create empty cells with a key type string, value of int.
		for (int i = 0; i != read_input; i++, current_slots++){
			inventory.insert({"Empty cell", 0});
		}
		std:: cout << "Done!" << std::endl << "Wanted slots: " << wanted_slots << std::endl;
		wanted_slots = 0;
	
		//print created empty cells
		for (const auto& pair : inventory){
			std::cout << pair.first << ": " << pair.second << std::endl;
		}
		/*
		 * This for loop basically says: "For every key/value pair in inventory, call it pair", where pair.first is the key (string in our example) and pair.secon is the value.
		 *const -- SO that we read the data, not modify it.
		 *auto -- multimap is actually std::pair<const std::string, std::vector<int>>, auto *lets compiler figure it out, lol.
		 *& to avoid copying the pair
		 */
	}
	return 0;
}