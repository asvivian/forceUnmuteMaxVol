//A simple program to run my PowerShell script that unmutes the master volume and sets
//it to the maximum level.

#include "pch.h"
#include <cstdlib>

int main()
{
	//"-windowstyle hidden" lets the process run without disrupting the user
	//"-File" denotes the location of the script
	system("powershell -windowstyle hidden -File C:\\ITAdmin\\unmuteAndMax.ps1");
	return 0;
}