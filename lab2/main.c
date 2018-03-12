#include <GL/glut.h>

void display(void) {
  glClear(GL_COLOR_BUFFER_BIT);

  glPointSize(2.0);
  glBegin(GL_POINTS);
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

  glBegin(GL_LINES);
  {
    glVertex2f(-0.1, -0.1);
    glVertex2f(-0.1, 0.9);
    glVertex2f(0.9, 0.9);
    glVertex2f(0.9, -0.1);
  }
  glEnd();

  glBegin(GL_LINE_STRIP);
  {
    glVertex2f(-0.9, -0.9);
    glVertex2f(-0.9, 0.1);
    glVertex2f(0.1, 0.1);
    glVertex2f(0.1, -0.9);
  }
  glEnd();

  glBegin(GL_LINE_LOOP);
  {
    glVertex2f(-0.9, 0.9);
    glVertex2f(0.9, 0.1);
    glVertex2f(0.1, 0.1);
    glVertex2f(0.1, -0.9);
  }
  glEnd();

  glFlush();
  return;
}

void init(void) {
  glClearColor(0.0, 0.0, 0.0, 0.0);
  glColor3f(1.0, 1.0, 1.0);

  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  gluOrtho2D(-2.0, 2.0, -1.0, 1.0);

  return;
}

int main(int argc, char **argv) {
  glutInit(&argc, argv);

  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

  glutInitWindowSize(500, 250);
  glutInitWindowPosition(0, 0);

  glutCreateWindow("simple2");
  glutDisplayFunc(display);
  init();
  glutMainLoop();
}
