#pragma once
#include "json.hpp"

class Vehicle
{
public:
	Vehicle();
	~Vehicle() = default;

	void UpdateVehicleState(nlohmann::json::value_type data);

private:

	double x, y, s, d, yaw, speed;

};