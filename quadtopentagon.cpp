#include <GL/gl.h>
#include <GL/glut.h>
#include <GL/glu.h>

void display(){
	glClear(GL_COLOR_BUFFER_BIT);
	
	glBegin(GL_POLYGON);
	glColor3f(0,0,0); glVertex2f(0,0);
	glColor3f(0,0,0); glVertex2f(0.5,0.5);
	glColor3f(1,0,0); glVertex2f(0.5,-0.5);
	glColor3f(1,0,0); glVertex2f(-0.5,-0.5);
	glColor3f(0,0,0); glVertex2f(-0.5,0.5);
	
	glEnd();
	glFlush();

}

int main(int argc, char** argv){
	glutInit(&argc,argv);
	glutInitWindowSize(800,800);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutCreateWindow("A SIMPLE POLYGON");
	glutInitWindowPosition(80,80);

	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}

