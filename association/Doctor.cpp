#include <iostream>
#include <string>
#include <vector>

#include "Doctor.h"
#include "Patient.h"

//Constructor
Doctor::Doctor(std::string name) : m_name(name) {}


//We have defined the function as a const function
//because we're not changing object.
//If we get an object which is a const object, it is okay.
std::string Doctor::getName()const { return m_name; }


//overloading output operator
std::ostream& operator<<(std::ostream& out, const Doctor& doc)
{
	unsigned int length = doc.m_patient.size();
	if (length == 0)
	{
		out << doc.m_name << " has no patients right now";
		return out;
	}

	out << doc.m_name << " is seeing patients: ";
	for (unsigned int count = 0; count < length; ++count)
		out << doc.m_patient[count]->getName() << ' ';

	return out;
}

void Doctor::addPatient(Patient* patient) {
	// Our doctor will add this patient
	m_patient.push_back(patient);

	//And the patient will also add this doctor
	patient->addDoctor(this);
}