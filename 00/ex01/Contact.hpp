#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact {
	public:
		Contact();
		~Contact();

		bool add_info(int index);
		bool compare();
		void print_contact();
		void print_full_contact();
	
	private:
		int index;
		static std::string graphs[5];
		std::string values[5];

};

#endif