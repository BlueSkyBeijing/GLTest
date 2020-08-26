#include <GL/glut.h>

void Render()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glRectf(0.0f, 0.0f, 0.5f, 0.5f);
	glFlush();
}
int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(800, 600);
	glutCreateWindow("OpenGL Test");
	glutDisplayFunc(Render);
	glutMainLoop();
	return 0;
}