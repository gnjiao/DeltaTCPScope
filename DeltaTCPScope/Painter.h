#pragma once

#include "glut.h"
#include <windows.h>  

class Painter
{
private:
	const double scale;
	double drawPoint[3000][3];
	int indexDraw;
	HANDLE  hMutex;

	double coordinate_x_min;
	double coordinate_x_max;
	double coordinate_y_min;
	double coordinate_y_max;
	double coordinate_z_min;
	double coordinate_z_max;

	void DrawCoordinate();
	void DrawPath();
public:
	
	Painter(double coordinate[]);
	~Painter(void);

	void AddTcpPoint(double point[]);
	void Draw();
};

