#include "svgHandler.h"
#include <iostream>
#include "pugixml.hpp"

pugi::xml_document doc;
pugi::xml_parse_result result = doc.load_file("../MapTest.svg");
//std::cout << doc.first_child().first_child().first_child().first_child().first_child().empty();