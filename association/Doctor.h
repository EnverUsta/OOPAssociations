#ifndef DOCTOR_H
#define DOCTOR_H



class Patient;

//TODO:: Doctor class definition
class Doctor{
private:
	std::string m_name;
	std::vector<Patient*> m_patient;
public:
	Doctor(std::string name);
	std::string getName()const;
	friend std::ostream& operator<<(std::ostream& out, const Doctor& doctor);
	void addPatient(Patient *patient);
};


#endif