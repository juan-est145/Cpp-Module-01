#ifndef N
#define MAIN_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
class NotSed
{
private:
	std::fstream _infile;
	std::fstream _outfile;
	std::string _content;
	char *_replace;
	char *_replacement;
public:
	NotSed(char *replace, char *replacement);
	~NotSed();
	void prepareFiles(char *toOpen);
	void replace(void);
};
#endif