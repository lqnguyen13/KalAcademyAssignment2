#pragma once
#include <string>

namespace AirlineReservationSystem {
	class Ticket
	{
	private:
		int mTicketNum;
		int mPassengerID;
		int mFlightNum;
		std::string mFlightDate;
		std::string mSeat;

	public:
		// TODO: WRITE SETTERS/GETTERS AND METHODS IN HEADER FILE
		Ticket() = default;

		//Getters and setters

		void setTicketNum(int ticketNum);
		int getTicketNum() const;

		void setPassengerID(int passengerID);
		int getPassengerID() const;

		void setFlightNum(int flightNum);
		int getFlightNum() const;

		void setFlightDate(const std::string& flightDate);
		const std::string& getFlightDate() const;

		void setSeat(const std::string& seat);
		const std::string& getSeat() const;
	};
}