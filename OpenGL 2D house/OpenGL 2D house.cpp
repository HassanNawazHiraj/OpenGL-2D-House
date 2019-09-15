// OpenGL 2D house.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <GL/freeglut.h>

void init(void);
void display(void);


int main(int argc, char** argv)
{
	//Step#1 Create and initialize glut windowing system
	glutInit(&argc, argv);
	glutInitWindowSize(600, 600);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Created by Hassan Nawaz (SP17-BSE-036)");
	//Step#2 Do Open GL related initializations
	init();
	//Step#3 Register Call back methods or Event Handler methods
	glutDisplayFunc(display);
	//Step#4 Enter in  main loop (an infinite loop listening to registered events and then call their registered methods if any)
	glutMainLoop();
	return 0;
}

void init(void) {
	// select background color
	glClearColor(1.0, 1.0, 1.0, 0.0); // (red, green, blue, alpha), used by glClear

	// Define world coordinate frame
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0); // model in real word units 
		// (left, right, bottom, top, near, far)
}


void drawTopBlueRoof() {
	glColor3ub(56, 58, 73);
	//glPointSize(10);
	glBegin(GL_QUADS);
	glVertex3f(-0.834, 0.7, 0.0);
	glVertex3f(-0.834, 0.2, 0.0);
	glVertex3f(0.816, 0.2, 0.0);
	glVertex3f(0.816, 0.7, 0.0);

	glEnd();
}

void drawRoofTringleBack() {
	glColor3ub(86, 90, 94);
	//glPointSize(10);
	glBegin(GL_TRIANGLES);
	glVertex3f(-0.55, 0.2, 0.0);
	glVertex3f(-0.05, 0.92, 0.0);
	glVertex3f(0.55, 0.2, 0.0);
	glEnd();
}

void drawRoofTringleFront() {
	glColor3ub(169, 169, 169);
	//glPointSize(10);
	glBegin(GL_TRIANGLES);
	glVertex3f(-0.50, 0.23, 0.0);
	glVertex3f(-0.05, 0.87, 0.0);
	glVertex3f(0.50, 0.23, 0.0);
	glEnd();
}

void drawRoofStrip() {
	glColor3ub(58, 59, 67);
	glBegin(GL_QUADS);
	glVertex3f(-0.18, 0.35, 0.0);
	glVertex3f(-0.18, 0.37, 0.0);
	glVertex3f(0.16, 0.37, 0.0);
	glVertex3f(0.16, 0.35, 0.0);

	glVertex3f(-0.18, 0.40, 0.0);
	glVertex3f(-0.18, 0.42, 0.0);
	glVertex3f(0.16, 0.42, 0.0);
	glVertex3f(0.16, 0.40, 0.0);

	glVertex3f(-0.18, 0.45, 0.0);
	glVertex3f(-0.18, 0.47, 0.0);
	glVertex3f(0.16, 0.47, 0.0);
	glVertex3f(0.16, 0.45, 0.0);
	glEnd();
}

void drawLinesBelowRoof() {
	glColor3ub(80, 86, 94);
	glBegin(GL_QUADS);
	glVertex3f(-0.954, 0.18, 0.0);
	glVertex3f(-0.954, 0.21, 0.0);
	glVertex3f(0.936, 0.21, 0.0);
	glVertex3f(0.936, 0.18, 0.0);

	glColor3ub(167, 168, 166);
	glVertex3f(-0.924, 0.18, 0.0);
	glVertex3f(-0.924, 0.13, 0.0);
	glVertex3f(0.906, 0.13, 0.0);
	glVertex3f(0.906, 0.18, 0.0);
	glEnd();
}

void drawBody() {
	glColor3ub(218, 218, 218);
	glBegin(GL_QUADS);
	glVertex3f(-0.834, 0.13, 0.0);
	glVertex3f(-0.834, -0.8333, 0.0);
	glVertex3f(0.816, -0.8333, 0.0);
	glVertex3f(0.816, 0.13, 0.0);
	glEnd();
}

void drawWindows() {
	glColor3ub(163, 167, 168);
	glBegin(GL_QUADS);
	glVertex3f(-0.75, 0.0, 0.0);
	glVertex3f(-0.3, 0.0, 0.0);
	glVertex3f(-0.3, -0.3, 0.0);
	glVertex3f(-0.75, -0.3, 0.0);

	glVertex3f(0.75, 0.0, 0.0);
	glVertex3f(0.3, 0.0, 0.0);
	glVertex3f(0.3, -0.3, 0.0);
	glVertex3f(0.75, -0.3, 0.0);
	glEnd();
}

void drawDoor() {
	glColor3ub(147, 133, 124);
	glBegin(GL_QUADS);
	glVertex3f(-0.2, 0.05, 0.0);
	glVertex3f(0.2, 0.05, 0.0);
	glVertex3f(0.2, -0.6, 0.0);
	glVertex3f(-0.2, -0.6, 0.0);
	glEnd();
}

void drawStairs() {

	glBegin(GL_QUADS);
	//1
	glColor3ub(78, 88, 95);
	glVertex3f(-0.25, -0.6, 0.0);
	glVertex3f(0.25, -0.6, 0.0);
	glVertex3f(0.25, -0.64, 0.0);
	glVertex3f(-0.25, -0.64, 0.0);

	glColor3ub(0, 0, 0);
	glVertex3f(-0.24, -0.64, 0.0);
	glVertex3f(0.24, -0.64, 0.0);
	glVertex3f(0.24, -0.65, 0.0);
	glVertex3f(-0.24, -0.65, 0.0);

	glColor3ub(254, 248, 224);
	glVertex3f(-0.24, -0.65, 0.0);
	glVertex3f(0.24, -0.65, 0.0);
	glVertex3f(0.24, -0.69, 0.0);
	glVertex3f(-0.24, -0.69, 0.0);

	//2
	glColor3ub(78, 88, 95);
	glVertex3f(-0.25, -0.69, 0.0);
	glVertex3f(0.25, -0.69, 0.0);
	glVertex3f(0.25, -0.73, 0.0);
	glVertex3f(-0.25, -0.73, 0.0);

	glColor3ub(0, 0, 0);
	glVertex3f(-0.24, -0.73, 0.0);
	glVertex3f(0.24, -0.73, 0.0);
	glVertex3f(0.24, -0.74, 0.0);
	glVertex3f(-0.24, -0.74, 0.0);

	glColor3ub(254, 248, 224);
	glVertex3f(-0.24, -0.74, 0.0);
	glVertex3f(0.24, -0.74, 0.0);
	glVertex3f(0.24, -0.79, 0.0);
	glVertex3f(-0.24, -0.79, 0.0);

	//3
	glColor3ub(78, 88, 95);
	glVertex3f(-0.25, -0.79, 0.0);
	glVertex3f(0.25, -0.79, 0.0);
	glVertex3f(0.25, -0.83, 0.0);
	glVertex3f(-0.25, -0.83, 0.0);

	glColor3ub(0, 0, 0);
	glVertex3f(-0.24, -0.83, 0.0);
	glVertex3f(0.24, -0.83, 0.0);
	glVertex3f(0.24, -0.84, 0.0);
	glVertex3f(-0.24, -0.84, 0.0);

	glColor3ub(254, 248, 224);
	glVertex3f(-0.24, -0.84, 0.0);
	glVertex3f(0.24, -0.84, 0.0);
	glVertex3f(0.24, -0.89, 0.0);
	glVertex3f(-0.24, -0.89, 0.0);

	glEnd();
}

void drawBottomLine() {
	glColor3ub(56, 58, 73);
	glBegin(GL_QUADS);
	glVertex3f(-0.924, -0.65, 0.0);
	glVertex3f(0.906, -0.65, 0.0);
	glVertex3f(0.906, -0.73, 0.0);
	glVertex3f(-0.924, -0.73, 0.0);
	glEnd();
}

void drawCircle(float cx, float cy, float r, int num_segments) {
	const float PI = 3.14159;
	glBegin(GL_TRIANGLE_FAN);
	for (int i = 0; i < num_segments; i++) {
		float theta = i * (2.0f * PI / num_segments);
		float x = r * cos(theta);
		float y = r * sin(theta);
		glVertex2f(x + cx, y + cy);
	}
	glEnd();
}

void drawDoorKnob() {
	glColor3ub(255, 242, 0);
	drawCircle(0.15, -0.3, 0.03, 30);
}

void display(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	drawTopBlueRoof();
	drawRoofTringleBack();
	drawRoofTringleFront();
	drawRoofStrip();
	drawLinesBelowRoof();
	drawBody();
	drawWindows();
	drawBottomLine();
	drawDoor();
	drawStairs();
	drawDoorKnob();

	//// door wall
	//glColor3f(0.0, 0.0, 1.0);
	//glBegin(GL_POLYGON);
	//glVertex3f(-0.9, -0.9, 0.0);
	//glVertex3f(-0.4, -0.9, 0.0);
	//glVertex3f(-0.4, 0.2, 0.0);
	//glVertex3f(-0.9, 0.2, 0.0);
	//glEnd();

	//// door
	//glColor3f(0.0, 1.0, 0.0);
	//glBegin(GL_POLYGON);
	//glVertex3f(-0.8, -0.9, 0.0);
	//glVertex3f(-0.5, -0.9, 0.0);
	//glVertex3f(-0.5, 0.0, 0.0);
	//glVertex3f(-0.8, 0.0, 0.0);
	//glEnd();

	//// wall
	//glColor3f(1.0, 0.0, 0.0);
	//glBegin(GL_POLYGON);
	//glVertex3f(-0.4, -0.9, 0.0);
	//glVertex3f(0.9, -0.9, 0.0);
	//glVertex3f(0.9, 0.2, 0.0);
	//glVertex3f(-0.4, 0.2, 0.0);
	//glEnd();

	//// door roof
	//glColor3f(0.3, 0.3, 0.0);
	//glBegin(GL_POLYGON);
	//glVertex3f(-0.9, 0.2, 0.0);
	//glVertex3f(-0.65, 0.9, 0.0);
	//glVertex3f(-0.4, 0.2, 0.0);
	//glVertex3f(-0.9, 0.2, 0.0);
	//glEnd();

	//// wall roof
	//glColor3f(0.5, 0.0, 0.5);
	//glBegin(GL_POLYGON);
	//glVertex3f(-0.65, 0.9, 0.0);
	//glVertex3f(0.65, 0.9, 0.0);
	//glVertex3f(0.9, 0.2, 0.0);
	//glVertex3f(-0.4, 0.2, 0.0);
	//glEnd();

	//glPointSize(10);		// Default size is 1 
	//glBegin(GL_POINTS); 	// Center is at the mid of main window due to glOrtho()
	//glVertex3f(0.0, 0.0, 0.0);
	//glEnd();

	//box(0.0, 0.0, 0.5, 0.2);
	glFlush();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
