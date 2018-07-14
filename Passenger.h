#pragma once
#include <string>
#include <vector>
#include "Ticket.h"

namespace AirlineReservationSystem {
	class Passenger
	{
	private:
		std::string mFirstName;
		std::string mLastName;
		std::string DateOfBirth;
		char mGender;
		int mFrequentFlyerNum;
		std::vector<Ticket> mTickets;

	public:
		// TODO: WRITE SETTERS/GETTERS AND METHODS IN HEADER FILE
	};
}
