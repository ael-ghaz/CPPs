#include "Serializer.hpp"

int main()
{
	Data *data = new Data;

	data->id = 1;
	data->name = "Michel";

	uintptr_t raw = Serializer::serialize(data);
	Data *newData = Serializer::deserialize(raw);

	std::cout << "ID: " << data->id << std::endl;
	std::cout << "NAME: " << data->name << std::endl;

	std::cout << "SERIALIZE_ID: " << newData->id << std::endl;
	std::cout << "SERIALIZE_NAME: " << newData->name << std::endl;

	delete data;
	return 0;
}