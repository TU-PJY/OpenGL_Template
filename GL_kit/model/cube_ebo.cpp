// ť�� EBO ��ǥ
#include <gl/glm/glm.hpp> 
#include <gl/glm/ext.hpp> 
#include <gl/glm/gtc/matrix_transform.hpp>
#include <gl/glew.h>
#include <gl/freeglut.h>
#include <gl/freeglut_ext.h>
#pragma warning(disable: 4305)

const GLfloat cube[][3] = {
	// front
	{-0.1, -0.1,  0.1},
	{0.1, -0.1,  0.1 },
	{ 0.1,  0.1,  0.1},
	{ -0.1,  0.1,  0.1},
	// back
	{ -0.1, -0.1, -0.1},
	{ 0.1, -0.1, -0.1},
	{ 0.1,  0.1, -0.1},
	{ -0.1,  0.1, -0.1}
};

const GLfloat colorCube[][3] = {
	{0.2, 0.2, 0.2},
	{1.0, 0.0, 0.0},
	{1.0, 1.0, 0.0},
	{0.0, 1.0, 0.0},
	{0.0, 0.0, 1.0},
	{1.0, 0.0, 1.0},
	{1.0, 1.0, 1.0},
	{0.0, 1.0, 1.0},
};

const GLuint idxCube[] = {
	// front
	0, 1, 2,
	2, 3, 0,
	// right
	1, 5, 6,
	6, 2, 1,
	// back
	7, 6, 5,
	5, 4, 7,
	// left
	4, 0, 3,
	3, 7, 4,
	// bottom
	4, 5, 1,
	1, 0, 4,
	// top
	3, 2, 6,
	6, 7, 3,
};