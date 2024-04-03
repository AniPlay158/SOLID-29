//початковий клас
class Student {
	char* firstname; // имя студента
	int firstname_length; // сколько символов в имени
	char* surname; // фамилия студента
	int surname_length; // сколько символов в фамилии
	char* lastname; // отчество студента
	int lastname_length; // сколько символов в отчестве
	char* country; // страна
	int  country_length;
	char* region; // область
	int  region_length;
	char* city; // город
	int  city_length;
	char* street; // улица
	int  street_length;
	int house_number; // номер дома
	char korpus;
	int birth_day; // день рождения
	int birth_month; // месяц рождения
	int birth_year; // год рождения
	char* znak_zodiaka;
	int length_zodiak;
	int start_day; // день поступления в универ
	int start_month; // месяц поступления в универ
	int start_year; // год поступления в универ
	int kurs; // 1-5
	char* group_name; // название группы
	int group_name_length;
	char* specialization; // специализация группы
	int specialization_length;
	int students_count; // количество студентов в группе
	int* dz_rates;
	int dz_count;
	int* practice_rates;
	int practice_count;
	int* exam_rates;
	int exam_count;
	int* zachet_rates;
	int zachet_count;
};
//////////////////////////////////////
class PersonalInfo {
private:
	char* firstname;
	int firstname_length;
	char* surname;
	int surname_length;
	char* lastname;
	int lastname_length;
	char* country;
	int country_length;
	char* region;
	int region_length;
	char* city;
	int city_length;
	char* street;
	int street_length;
	int house_number;
	int birth_day;
	int birth_month;
	int birth_year;
	char* znak_zodiaka;
	int length_zodiak;

public:
	PersonalInfo(char* firstname, int firstname_length, char* surname, int surname_length, char* lastname, int lastname_length, char* country, int country_length, char* region, int region_length, char* city, int city_length, char* street, int street_length, int house_number, int birth_day, int birth_month, int birth_year, char* znak_zodiaka, int length_zodiak) {}
};

class EducationInfo {
private:
	int start_day;
	int start_month;
	int start_year;
	int kurs;
	char* group_name;
	int group_name_length;
	char* specialization;
	int specialization_length;
	int students_count;

public:
	EducationInfo(int start_day, int start_month, int start_year, int kurs, char* group_name, int group_name_length, char* specialization, int specialization_length, int students_count) {}
};

class AcademicPerformance {
private:
	int* dz_rates;
	int dz_count;
	int* practice_rates;
	int practice_count;
	int* exam_rates;
	int exam_count;
	int* zachet_rates;
	int zachet_count;

public:
	AcademicPerformance(int* dz_rates, int dz_count, int* practice_rates, int practice_count, int* exam_rates, int exam_count, int* zachet_rates, int zachet_count) {}
};

class Address {
private:
	char* country;
	int country_length;
	char* region;
	int region_length;
	char* city;
	int city_length;
	char* street;
	int street_length;
	int house_number;

public:
	Address(char* country, int country_length, char* region, int region_length, char* city, int city_length, char* street, int street_length, int house_number) {}
};

class Birthday {
private:
	int birth_day;
	int birth_month;
	int birth_year;

public:
	Birthday(int birth_day, int birth_month, int birth_year) {}
};

int main()
{

}