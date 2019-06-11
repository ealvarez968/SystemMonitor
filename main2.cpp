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
  
  	//std::cout<<"working"<< ProcessParser::getCpuPercent("702");
  	//std::cout<<""<<ProcessParser::getProcUser("28011");
  	/*for(std::string process : ProcessParser::getPidList()){
  		cout<<process<<"\n";
  	}*/

  	//std::cout<<ProcessParser::getCmd("28011");

  //	std::cout<<ProcessParser::getNumberOfCores();
  //std::cout<<ProcessParser::getSysCpuPercent();

  /*for(std::string process : ProcessParser::getSysCpuPercent("")){
      cout<<process<<"\n";
    }*/

  
  //std::cout<<ProcessParser::getSysRamPercent();
  std::cout<<ProcessParser::getNumberOfRunningProcesses();
  	std::cout<<"\n";
  	//std::cout<<"working"<<ProcessParser::getProcUpTime("1149");
	return 0;
}




