#include "vehicle.h"

Vehicle::Vehicle()
{
	x = y = s = d = yaw = speed = 0.0;
}

void Vehicle::UpdateVehicleState(nlohmann::json::value_type data)
{
}
