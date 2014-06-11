#include <iostream>
#include <unistd.h>


#include <stdlib.h>
using namespace std;

int main(int argc, char** argv)
{
	
    while(1){
		usleep(3000000);
		system("./a.out 'hello world how you been'");
		
	}
	
	return 0;
}
