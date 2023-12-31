#ifndef SHADER_H
#define SHADER_H

#include <glad/glad.h> //include glad to get all the required OpenGL headers
#include <glm/glm.hpp> //include glm to get matrices
#include <glm/gtc/type_ptr.hpp>

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

class Shader
{
public:
	//The program ID
	unsigned int ID;

	//Constructor reads and builds the shader
	Shader(const char* vertexPath, const char* fragmentPath);
	
	//Use / active the shader
	void use();

	//Utility uniform functions
	void setBool(const std::string& name, bool value) const;
	void setInt(const std::string& name, int value) const;
	void setFloat(const std::string& name, float value) const;
	void setMat4(const std::string& name, glm::mat4) const;
	void setVec3(const std::string& name, float x, float y, float z) const;
	void setVec3(const std::string& name, glm::vec3 value) const;

};

#endif