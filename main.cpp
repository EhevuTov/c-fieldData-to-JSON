#include "fieldData.h"
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>

int main(void){
	int myint[] = {1,2,3,4,5};
	for (int &i: myint)
		{
			std::cout << i << std::endl;
		}
	return 0;
}
