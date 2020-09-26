#include <stdio.h>
#include <filesystem>
#include <experimental/filesystem>
using namespace std::experimental::filesystem::v1;

//I'm sorry but this did't work out for me. I'm new to Visual Studio and quite new overall.

void mvp();

int main(void)
{
	mvp();
	//TODO
}

void mvp()
{
	string dir = current_path;
	printf("%s", dir);
	scanf("%s", );
}
