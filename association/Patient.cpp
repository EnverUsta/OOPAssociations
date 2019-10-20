#include <iostream>
#include <string>
#include <vector>

#include "Patient.h"
#include "Doctor.h"

Patient::Patient(std::string name) : m_name(name) {}

void Patient::addDoctor(Doctor* doc) {
	m_doctor.push_back(doc);
}


std::ostream& operator<<(std::ostream& out, const Patient& pat)
{
	unsigned int length = pat.m_doctor.size();
	if (length == 0)
	{
		out << pat.getName() << " has no doctors right now";
		return out;
	}

	out << pat.m_name << " is seeing doctors: ";
	for (unsigned int count = 0; count < length; ++count)
		out << pat.m_doctor[count]->getName() << ' ';

	return out;
}

std::string Patient::getName()const { return m_name; }