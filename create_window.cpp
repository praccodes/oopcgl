#include <GL/gl.h>
#include <GL/glut.h>
#include <GL/glu.h>

void display(){}

int main(int argc, char *argv[])
{	
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH | GLUT_DOUBLE);
	glutInitWindowSize(800,800);
	glutCreateWindow("THIS IS YOUR NEW WINDOW");
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
