#include <GL/glut.h>

void display(void) {
  glClear(GL_COLOR_BUFFER_BIT);

  glBegin(GL_POLYGON);
  {
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(-0.5, -0.5);
    glColor3f(0.0, 1.0, 0.0);
    glVertex2f(-0.5, 0.5);
    glColor3f(0.0, 0.0, 1.0);
    glVertex2f(0.5, 0.5);
    glColor3f(1.0, 1.0, 0.0);
    glVertex2f(0.5, -0.5);
  }
  glEnd();

  glFlush();
  return;
}

int main(int argc, char **argv) {
  glutInit(&argc, argv);
  glutCreateWindow("lab 1");
  glutDisplayFunc(display);
  glutMainLoop();
}
