#ifndef PATIENT_H
#define PATIENT_H





#include "Doctor.h"

//TODO: Patient class definition
class Patient
{
private:
	std::string m_name;
	std::vector<Doctor*> m_doctor; // so that we can use it here

	// We're going to make addDoctor private because we don't want the public to use it.
	// They should use Doctor::addPatient() instead, which is publicly exposed
	void addDoctor(Doctor* doc);

public:
	Patient(std::string name);

	// We'll implement this function below Doctor since we need Doctor to be defined at that point
	friend std::ostream& operator<<(std::ostream& out, const Patient& pat);

	std::string getName() const;

	// We'll friend Doctor::addPatient() so it can access the private function Patient::addDoctor()
	friend void Doctor::addPatient(Patient* pat);
};







#endif