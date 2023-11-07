// Name:Kevin Gunawan	
// Seneca Student ID: 177378213
// Seneca email: kgunawan1@myseneca.ca
// Date of completion: 2023-11-06
//
// I confirm that I am the only author of this file
//   and the content was created entirely by me.
#ifndef SDDS_STATION_H
#define SDDS_STATION_H

#include <iostream>

namespace sdds {
	class Station {
		int m_id =0;
		std::string m_name ="";
		std::string m_desc = "";
		size_t m_serial_num = 0;
		size_t m_curr_items = 0;

		static size_t m_widthField ;
		static size_t id_generator ;

	public:
		Station(const std::string& line);
		const std::string& getItemName() const;
		size_t getNextSerialNumber();
		size_t getQuantity() const;
		void updateQuantity();
		void display(std::ostream& os, bool full)const;
	};
}

#endif // !SDDS_STATION_H
