#include "Triangle.h"
using namespace Rendering;
using namespace Models;

Triangle::Triangle()
{

}

Triangle::~Triangle()
{

}


void Triangle::Create()
{
	GLuint vao;
	GLuint vbo;

	glGenVertexArrays(1, &vao);
	glBindVertexArray(vao);

	std::vector<VertexFormat> vertices;
	vertices.push_back(VertexFormat(glm::vec4(0.25, -0.25, 1 , 5),
		glm::vec4(1, 0, 0, 1)));
	vertices.push_back(VertexFormat(glm::vec4(-0.25, -0.25, 5, 5),
		glm::vec4(0, 1, 0, 1)));
	vertices.push_back(VertexFormat(glm::vec4(0.25, 0.25, 0.0 , 1),
		glm::vec4(0, 0, 1, 1)));

	glGenBuffers(1, &vbo);
	glBindBuffer(GL_ARRAY_BUFFER, vbo);
	glBufferData(GL_ARRAY_BUFFER, sizeof(VertexFormat) * 3, &vertices[0], GL_STATIC_DRAW);
	glEnableVertexAttribArray(0);
	glVertexAttribPointer(0, 4, GL_FLOAT, GL_FALSE, sizeof(VertexFormat), (void*)0);
	glEnableVertexAttribArray(1);
	glVertexAttribPointer(1, 4, GL_FLOAT, GL_FALSE, sizeof(VertexFormat), (void*)(offsetof(VertexFormat, VertexFormat::color)));
	glBindVertexArray(0);
	this->vao = vao;
	this->vbos.push_back(vbo);

}

void Triangle::Update()
{

}

void Triangle::Draw()
{

	glUseProgram(program);
	glBindVertexArray(vao);
	glDrawArrays(GL_TRIANGLES, 0, 3);
}