#pragma once
#include "Line.h"

class Circle
{
private:
	// Singleton
	static Circle* circle_Instance;
	Circle();

public:

	// Prevent copying or assignment 
	Circle(const Circle&) = delete;
	Circle& operator=(const Circle&) = delete;

	// Singleton
	static Circle* getInstance()
	{
		if (circle_Instance == nullptr)
		{
			circle_Instance = new Circle();
		}

		return circle_Instance;
	}

	double offsetAngle = 0;
	double dynamicAngle;

	void DrawCircle(int centerX, int centerY, int radius, int segmentShape, glm::vec4 color, float dynamicAngle = 0.f, int rotationDirection = 1);
	void DrawSemiCircle(float startX, float startY, float endX, float endY, int radius, float rotationAngle, glm::vec4 color);
};

