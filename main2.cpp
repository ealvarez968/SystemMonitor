#include <iostream>
#include <thread>
#include <chrono>
#include <string>
#include <vector>
#include <ncurses.h>
#include <time.h>
#include <sstream>
#include <iomanip>
#include "ProcessParser.h"

int main(){
  	//ProcessParser::getVmSize working
	//std::cout<<"working"<< ProcessParser::getVmSize("481");
  
  	std::cout<<"working"<< ProcessParser::getVmSize("481");
	return 0;
}

