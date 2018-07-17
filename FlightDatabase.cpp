#include "stdafx.h"
#include <iostream>
#include <stdexcept>
#include "FlightDatabase.h"

using namespace std;

namespace AirlineReservationSystem {

	Flight& FlightDatabase::addFlight(const std::string& depart, const std::string& arrive, const std::string& date,
		const std::string& departTime, const std::string& arriveTime,
		float flightDur, int flightno, int totSeats, int seatsRes)
	{
		Flight theFlight(depart, arrive, date, flightno); 
		theFlight.setDepartTime(departTime);
		theFlight.setArriveTime(arriveTime);
		theFlight.setFlightDuration(flightDur);
		theFlight.setTotalSeat(totSeats);
		theFlight.setSeatsReserved(seatsRes);
		mFlights.push_back(theFlight); 

		return mFlights[mFlights.size() - 1];
	}

	Flight& FlightDatabase::getFlight(int flightNumber, std::string& flightDate)
	{
		for (auto& flight : mFlights)
		{
			if (flight.getFlightno() == flightNumber && flight.getFlightDate() == flightDate)
			{
				return flight;
			}
		}

		throw logic_error("Flight does not exist.");
	}

	void FlightDatabase::displayAllFlights()
	{
		for (auto& flight : mFlights)
		{
			flight.displayFlight();
		}
	}

	void FlightDatabase::displayFlightDetails(Flight flight)
	{
		flight.displayFlight();
	}

}