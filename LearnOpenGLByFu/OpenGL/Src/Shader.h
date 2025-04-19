#pragma once
#include<string>
using namespace std;
class Shader
{
public:
	
	string vertexString;
	string fragmentString;
	const char* vertexSource;
	const char* fragmentSource;

	unsigned int ID;  //Shader Program ID


	Shader(const char* vertexPath, const char* fragmentPath);
	void use();

private:
	void checkCompileErrors(unsigned int ID, std::string type);
};

