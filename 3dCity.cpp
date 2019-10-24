#include <GL/glut.h>
 // #include <GL/glu.h>
#include <math.h>

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void init(void);
void display(void);
void keyboard(unsigned char, int, int);
void resize(int, int);
void draw_star(float, float, float);
void house(float, float, float);
void apart(float, float, float);


void menu(int value){
	;
}
void createMenu(void){
	glutCreateMenu(menu);
	glutAddMenuEntry("W to increment z value",0);
	glutAddMenuEntry("S to decrement z value",0);
	glutAddMenuEntry("D to increment x value",0);
	glutAddMenuEntry("A to decrement x value",0);
	glutAddMenuEntry("T to rotate",0);
	glutAddMenuEntry("G to rotate",0);
	glutAddMenuEntry("Y to increment y value",0);
	glutAddMenuEntry("H to decrement y value",0);
	glutAddMenuEntry("P to reset view",0);
	
	glutAttachMenu(GLUT_RIGHT_BUTTON);
}

void apart(float x, float y, float z) {
  int i;
  int j;
  srand(time(0));

  glBegin(GL_POLYGON);
  glColor3f(0.6, 0.1, 0.2);
  glVertex3f(x, y, z + 0.5);
  glVertex3f(x + 45, y, z + 0.5);
  glVertex3f(x + 45, y + 100, z + 0.5);
  glVertex3f(x, y + 100, z + 0.5);
  glEnd();
  glColor3f(0.8, 0.8, 0.8);
  for (j = 0; j < 8; j++) {

    glPushMatrix();
    glTranslatef(0, -12 * j, 0);
    for (i = 0; i < 4; i++) {
      glPushMatrix();
      glTranslatef(11 * i, 0, 0);
      glBegin(GL_POLYGON);
      glVertex3f(x + 2, y + 98, z);
      glVertex3f(x + 10, y + 98, z);
      glVertex3f(x + 10, y + 88, z);
      glVertex3f(x + 2, y + 88, z);
      glEnd();
      glPopMatrix();
    }
    glPopMatrix();
  }
  glColor3f(0, 0.39, 0);
  for (j = 0; j < 8; j++) {

    glPushMatrix();
    glTranslatef(0, -12 * j, 0);
    for (i = 0; i < 4; i++) {
      glPushMatrix();
      glTranslatef(11 * i, 0, 0);
      glBegin(GL_LINE_LOOP);
      glVertex3f(x + 2, y + 98, z);
      glVertex3f(x + 10, y + 98, z);
      glVertex3f(x + 10, y + 88, z);
      glVertex3f(x + 2, y + 88, z);
      glEnd();
      glPopMatrix();
    }
    glPopMatrix();
  }

  glColor3f(0.6, 0.1, 0.2);
  glBegin(GL_POLYGON);
  glVertex3f(x, y, z + 45 - 0.5);
  glVertex3f(x + 45, y, z + 45 - 0.5);
  glVertex3f(x + 45, y + 100, z + 45 - 0.5);
  glVertex3f(x, y + 100, z + 45 - 0.5);
  glEnd();
  glColor3f(0.8, 0.8, 0.8);

  for (j = 0; j < 8; j++) {

    glPushMatrix();
    glTranslatef(0, -12 * j, 0);
    for (i = 0; i < 4; i++) {
      glPushMatrix();
      glTranslatef(11 * i, 0, 0);
      glBegin(GL_POLYGON);
      glVertex3f(x + 2, y + 98, z + 45);
      glVertex3f(x + 10, y + 98, z + 45);
      glVertex3f(x + 10, y + 88, z + 45);
      glVertex3f(x + 2, y + 88, z + 45);
      glEnd();
      glPopMatrix();
    }
    glPopMatrix();
  }
  glColor3f(0, 0, 0);

  for (j = 0; j < 8; j++) {

    glPushMatrix();
    glTranslatef(0, -12 * j, 0);
    for (i = 0; i < 4; i++) {
      glPushMatrix();
      glTranslatef(11 * i, 0, 0);
      glBegin(GL_LINE_LOOP);
      glVertex3f(x + 2, y + 98, z + 45);
      glVertex3f(x + 10, y + 98, z + 45);
      glVertex3f(x + 10, y + 88, z + 45);
      glVertex3f(x + 2, y + 88, z + 45);
      glEnd();
      glPopMatrix();
    }
    glPopMatrix();
  }

  glColor3f(0.6, 0.1, 0.2);
  glBegin(GL_POLYGON);
  glVertex3f(x + 0.5, y, z);
  glVertex3f(x + 0.5, y, z + 45);
  glVertex3f(x + 0.5, y + 100, z + 45);
  glVertex3f(x + 0.5, y + 100, z);
  glEnd();
  glColor3f(0.8, 0.8, 0.8);
  for (j = 0; j < 8; j++) {

    glPushMatrix();
    glTranslatef(0, -12 * j, 0);
    for (i = 0; i < 4; i++) {
      glPushMatrix();
      glTranslatef(0, 0, 11 * i);
      glBegin(GL_POLYGON);
      glVertex3f(x, y + 98, z + 2);
      glVertex3f(x, y + 98, z + 10);
      glVertex3f(x, y + 88, z + 10);
      glVertex3f(x, y + 88, z + 2);
      glEnd();
      glPopMatrix();
    }
    glPopMatrix();
  }
  glColor3f(0, 0, 0);
  for (j = 0; j < 8; j++) {

    glPushMatrix();
    glTranslatef(0, -12 * j, 0);
    for (i = 0; i < 4; i++) {
      glPushMatrix();
      glTranslatef(0, 0, 11 * i);
      glBegin(GL_LINE_LOOP);
      glVertex3f(x, y + 98, z + 2);
      glVertex3f(x, y + 98, z + 10);
      glVertex3f(x, y + 88, z + 10);
      glVertex3f(x, y + 88, z + 2);
      glEnd();
      glPopMatrix();
    }
    glPopMatrix();
  }

  glColor3f(0.6, 0.1, 0.2);

  glBegin(GL_POLYGON);
  glVertex3f(x + 45 - 0.5, y, z - 0.5);
  glVertex3f(x + 45 - 0.5, y, z + 45 - 0.5);
  glVertex3f(x + 45 - 0.5, y + 100, z + 45 - 0.5);
  glVertex3f(x + 45 - 0.5, y + 100, z - 0.5);
  glEnd();
  glColor3f(0.8, 0.8, 0.8);
  for (j = 0; j < 8; j++) {

    glPushMatrix();
    glTranslatef(0, -12 * j, 0);
    for (i = 0; i < 4; i++) {
      glPushMatrix();
      glTranslatef(0, 0, 11 * i);
      glBegin(GL_POLYGON);
      glVertex3f(x + 45, y + 98, z + 2);
      glVertex3f(x + 45, y + 98, z + 10);
      glVertex3f(x + 45, y + 88, z + 10);
      glVertex3f(x + 45, y + 88, z + 2);
      glEnd();
      glPopMatrix();
    }
    glPopMatrix();
  }
  glColor3f(0, 0, 0);
  for (j = 0; j < 8; j++) {

    glPushMatrix();
    glTranslatef(0, -12 * j, 0);
    for (i = 0; i < 4; i++) {
      glPushMatrix();
      glTranslatef(0, 0, 11 * i);
      glBegin(GL_LINE_LOOP);
      glVertex3f(x + 45, y + 98, z + 2);
      glVertex3f(x + 45, y + 98, z + 10);
      glVertex3f(x + 45, y + 88, z + 10);
      glVertex3f(x + 45, y + 88, z + 2);
      glEnd();
      glPopMatrix();
    }
    glPopMatrix();
  }

  glColor3f(0.5, 0.5, 0.5);
  glBegin(GL_POLYGON);
  glVertex3f(x, y, z - 0.5);
  glVertex3f(x + 45, y, z - 0.5);
  glVertex3f(x + 45, y, z + 45 - 0.5);
  glVertex3f(x, y, z + 45 - 0.5);
  glEnd();

  glBegin(GL_POLYGON);
  glVertex3f(x, y + 100, z);
  glVertex3f(x + 45, y + 100, z);
  glVertex3f(x + 45, y + 100, z + 45);
  glVertex3f(x, y + 100, z + 45);
  glEnd();
}

void house(float x, float y, float z) {

  //house side
  glColor3f(0.0, 0.41, 0.93);
  glBegin(GL_POLYGON);
  glVertex3f(x, y, z);
  glVertex3f(x, y, z + 30);
  glVertex3f(x, y + 15, z + 30);
  glVertex3f(x, y + 15, z);
  glEnd();

  //house side
  glColor3f(0.0, 0.41, 0.93);
  glBegin(GL_POLYGON);
  glVertex3f(x - 15, y, z);
  glVertex3f(x - 15, y + 15, z);
  glVertex3f(x - 15, y + 15, z + 30);
  glVertex3f(x - 15, y, z + 30);
  glEnd();


  //house front
  glColor3f(1.0, 1.0, 1.0);
  glBegin(GL_POLYGON);
  glVertex3f(x, y, z + 30);
  glVertex3f(x - 15, y, z + 30);
  glVertex3f(x - 15, y + 15, z + 30);
  glVertex3f(x, y + 15, z + 30);
  glEnd();

  //house back
  glColor3f(1.0, 1.0, 1.0);
  glBegin(GL_POLYGON);
  glVertex3f(x - 15, y, z);
  glVertex3f(x - 15, y + 15, z);
  glVertex3f(x, y + 15, z);
  glVertex3f(x, y, z);
  glEnd();

  //house bottom 
  glColor3f(0.01, 0.05, 1.5);
  glBegin(GL_POLYGON);
  glVertex3f(x - 15, y, z);
  glVertex3f(x, y, z);
  glVertex3f(x, y, z + 30);
  glVertex3f(x - 15, y, z + 30);
  glEnd();

  //house roof 1
  glColor3f(0.51, 0.015, 0.008);
  glBegin(GL_POLYGON);
  glVertex3f(x + 1.69 * 3, y + 3.5 * 3, z);
  glVertex3f(x - 2.5 * 3, y + 7.5 * 3, z);
  glVertex3f(x - 2.5 * 3, y + 7.5 * 3, z + 30);
  glVertex3f(x + 1.69 * 3, y + 3.5 * 3, z + 30);
  glEnd();

  //house roof 2
  glColor3f(0.51, 0.015, 0.008);
  glBegin(GL_POLYGON);
  glVertex3f(x - 6.69 * 3, y + 3.5 * 3, z);
  glVertex3f(x - 6.69 * 3, y + 3.5 * 3, z + 30);
  glVertex3f(x - 2.5 * 3, y + 7.5 * 3, z + 30);
  glVertex3f(x - 2.5 * 3, y + 7.5 * 3, z);
  glEnd();

  //house triangle code
  glColor3f(1.0, 1.0, 1.0);
  glBegin(GL_POLYGON);
  glVertex3f(x, y + 15, z);
  glVertex3f(x - 15, y + 15, z);
  glVertex3f(x - 2.5 * 3, y + 7.5 * 3, z);
  glEnd();

  glColor3f(1.0, 1.0, 1.0);
  glBegin(GL_POLYGON);
  glVertex3f(x, y + 15, z + 30);
  glVertex3f(x - 15, y + 15, z + 30);
  glVertex3f(x - 2.5 * 3, y + 7.5 * 3, z + 30);
  glEnd();
}

void house1() {

  apart(150, 0, -150);
  apart(80, 0, -90);

  apart(150, 0, -90);
  apart(150, 0, -30);

  apart(-150, 0, -30);
  apart(-150, 0, -110);

  apart(-150, 0, -180);
  house(-60, 0.1, 160);
  house(120, 0.1, 50);
  // house(0,0,-300);

  house(120, 0.1, 90);

  house(160, 0.1, 90);

  house(80, 0.1, 90);

  house(160, 0.1, 50);

  house(80, 0.1, 50);

  house(-130, 0.1, 120);

  house(-130, 0.1, 160);

  house(-90, 0.1, 120);

  house(-60, 0.1, 120);

  house(-90, 0.1, 160);

}

void init(void) {
  glClearColor(0.0, 0.0, 0.0, 0.0);
  glEnable(GL_DEPTH_TEST);
  glMatrixMode(GL_MODELVIEW);
}

void draw_star(GLfloat x, GLfloat y) {
  glColor3f(1.0, 1.0, 1.0);
  glBegin(GL_POLYGON);
	  glVertex2f(x, y);
	  glVertex2f(x + 1.5, y - 4);
	  glVertex2f(x + 6.5, y - 5.5);
	  glVertex2f(x + 2.5, y - 9);
	  glVertex2f(x + 4.5, y - 14);
	  glVertex2f(x, y - 11.5);
	  glVertex2f(x - 4.5, y - 14);
	  glVertex2f(x - 3, y - 9);
	  glVertex2f(x - 6.5, y - 5.5);
	  glVertex2f(x - 1.5, y - 5);
	  glVertex2f(x, y);
  glEnd();
}
void draw_moon (void)
{

    glColor3f (0.8, 0.8, 0.8);              // moon grey color
    glPushMatrix ();
       glTranslatef    (30, 350, 0.0);  
       glutSolidSphere (25.0, 200, 50);
    glPopMatrix ();

}

void draw_star(GLfloat x, GLfloat y, GLfloat z) {
  glColor3f(1.0, 1.0, 1.0);
  glBegin(GL_POLYGON);
	  glVertex3f(x, y, z);
	  glVertex3f(x + 1.5, y - 4, z);
	  glVertex3f(x + 6.5, y - 5.5, z);
	  glVertex3f(x + 2.5, y - 9, z);
	  glVertex3f(x + 4.5, y - 14, z);
	  glVertex3f(x, y - 11.5, z);
	  glVertex3f(x - 4.5, y - 14,z);
	  glVertex3f(x - 3, y - 9, z);
	  glVertex3f(x - 6.5, y - 5.5, z);
	  glVertex3f(x - 1.5, y - 5, z);
	  glVertex3f(x, y, z);
  glEnd();
}

void display(void) {

  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  glutFullScreen();
  /* draw the floor */
  glBegin(GL_QUADS);
  glColor3f(0.8, 0.6, 0.4);
  glVertex3f(-200.0, 0.0, -200.0);
  glColor3f(0.8, 0.6, 0.4);
  glVertex3f(-200.0, 0.0, 200.0);
  glColor3f(0.8, 0.6, 0.4);
  glVertex3f(200.0, 0.0, 200.0);
  glColor3f(0.8, 0.6, 0.4);
  glVertex3f(200.0, 0.0, -200.0);
  glEnd();
  glFlush();
  draw_moon();
  draw_star(20, 240, -20);
  draw_star(180, 220, 15);
  draw_star(-30, 280, 18);
  draw_star(190, 280, 60);
  draw_star(100, 220, -66);
  draw_star(-230, 250, 75);
  draw_star(-190, 210, -75);
  draw_star(-88, 260, 55);
  draw_star(88, 270, -55);
  draw_star(-170, 280, 80);

  draw_star(-170, 280, -10);

  draw_star(-170, 280, 40);


  glColor3f(0.3, 0.015, 0.13);
  glPushMatrix();
  glTranslatef(-15, 4, 50);
  glutSolidCube(7);
  glPopMatrix();

  glColor3f(0.3, 0.015, 0.13);
  glPushMatrix();
  glTranslatef(-15, 4, -40);
  glutSolidCube(7);
  glPopMatrix();

  glColor3f(0.3, 0.015, 0.13);
  glPushMatrix();
  glTranslatef(-15, 4, 20);
  glutSolidCube(7);
  glPopMatrix();

  glColor3f(0.3, 0.015, 0.13);
  glPushMatrix();
  glTranslatef(-15, 4, -10);
  glutSolidCube(7);
  glPopMatrix();

  glColor3f(0.3, 0.015, 0.13);
  glPushMatrix();
  glTranslatef(-15, 4, -80);
  glutSolidCube(7);
  glPopMatrix();

  glColor3f(0.3, 0.015, 0.13);
  glPushMatrix();
  glTranslatef(-15, 4, -120);
  glutSolidCube(7);
  glPopMatrix();

  glColor3f(0.3, 0.015, 0.13);
  glPushMatrix();
  glTranslatef(-15, 4, -160);
  glutSolidCube(7);
  glPopMatrix();

  glColor3f(0.015, 0.3, 0.13);
  glPushMatrix();
  glTranslatef(-15, 24, 50);
  glScalef(1.1, 2.3, 0.8);
  glutSolidSphere(10, 15, 6);
  glFlush();
  glPopMatrix();

  glColor3f(0.015, 0.3, 0.13);
  glPushMatrix();
  glTranslatef(-15, 24, -40);
  glScalef(1.1, 2.3, 0.8);
  glutSolidSphere(10, 15, 4);
  glFlush();
  glPopMatrix();

  glColor3f(0.015, 0.3, 0.13);
  glPushMatrix();
  glTranslatef(-15, 24, 20);
  glScalef(1.1, 2.3, 0.8);
  glutSolidSphere(10, 15, 4);
  glFlush();
  glPopMatrix();

  glColor3f(0.015, 0.3, 0.13);
  glPushMatrix();
  glTranslatef(-15, 24, -10);
  glScalef(1.1, 2.3, 0.8);
  glutSolidSphere(10, 15, 4);
  glFlush();
  glPopMatrix();

  glColor3f(0.015, 0.3, 0.13);
  glPushMatrix();
  glTranslatef(-15, 24, -80);
  glScalef(1.1, 2.3, 0.8);
  glutSolidSphere(10, 15, 4);
  glFlush();
  glPopMatrix();

  glColor3f(0.015, 0.3, 0.13);
  glPushMatrix();
  glTranslatef(-15, 24, -120);
  glScalef(1.1, 2.3, 0.8);
  glutSolidSphere(10, 15, 4);
  glFlush();
  glPopMatrix();

  glColor3f(0.015, 0.3, 0.13);
  glPushMatrix();
  glTranslatef(-15, 24, -160);
  glScalef(1.1, 2.3, 0.8);
  glutSolidSphere(10, 15, 4);
  glFlush();
  glPopMatrix();

  glBegin(GL_QUADS);
  glColor3f(0.2, 0.2, 0.2);
  glVertex3f(0, 0.01, -200); /* road */
  glColor3f(0.2, 0.2, 0.2);
  glVertex3f(0, 0.01, 200);
  glColor3f(0.2, 0.2, 0.2);
  glVertex3f(18, 0.01, 200);
  glColor3f(0.2, 0.2, 0.2);
  glVertex3f(18, 0.01, -200);
  glEnd();

  glBegin(GL_QUADS);
  glColor3f(1.0, 1.0, 1.0);
  glVertex3f(8.5, 0.02, -200); /* road */
  glColor3f(1.0, 1.0, 1.0);
  glVertex3f(8.5, 0.02, 200);
  glColor3f(1.0, 1.0, 1.0);
  glVertex3f(9.5, 0.02, 200);
  glColor3f(1.0, 1.0, 1.0);
  glVertex3f(9.5, 0.02, -200);
  glEnd();

  glBegin(GL_QUADS);
  glColor3f(0.2, 0.2, 0.2);
  glVertex3f(44, 0.01, -200); /* road */
  glColor3f(0.2, 0.2, 0.2);
  glVertex3f(44, 0.01, 160);
  glColor3f(0.2, 0.2, 0.2);
  glVertex3f(54, 0.01, 160);
  glColor3f(0.2, 0.2, 0.2);
  glVertex3f(54, 0.01, -200);
  glEnd();

  glBegin(GL_QUADS);
  glColor3f(0.2, 0.2, 0.2);
  glVertex3f(54, 0.01, -180); /* road */
  glColor3f(0.2, 0.2, 0.2);
  glVertex3f(54, 0.01, -160);
  glColor3f(0.2, 0.2, 0.2);
  glVertex3f(200, 0.01, -160);
  glColor3f(0.2, 0.2, 0.2);
  glVertex3f(200, 0.01, -180);
  glEnd();

  glBegin(GL_QUADS);
  glColor3f(0.2, 0.2, 0.2);
  glVertex3f(18, 0.01, 160); /* road */
  glColor3f(0.2, 0.2, 0.2);
  glVertex3f(18, 0.01, 170);
  glColor3f(0.2, 0.2, 0.2);
  glVertex3f(200, 0.01, 170);
  glColor3f(0.2, 0.2, 0.2);
  glVertex3f(200, 0.01, 160);
  glEnd();

  glBegin(GL_QUADS);
  glColor3f(0.2, 0.2, 0.2);
  glVertex3f(-200, 0.01, 90); /* road */
  glColor3f(0.2, 0.2, 0.2);
  glVertex3f(-200, 0.01, 100);
  glColor3f(0.2, 0.2, 0.2);
  glVertex3f(0, 0.01, 100);
  glColor3f(0.2, 0.2, 0.2);
  glVertex3f(0, 0.01, 90);
  glEnd();

  glBegin(GL_QUADS);
  glColor3f(0.2, 0.2, 0.2);
  glVertex3f(-90, 0.01, -200); /* road */
  glColor3f(0.2, 0.2, 0.2);
  glVertex3f(-90, 0.01, 90);
  glColor3f(0.2, 0.2, 0.2);
  glVertex3f(-80, 0.01, 90);
  glColor3f(0.2, 0.2, 0.2);
  glVertex3f(-80, 0.01, -200);
  glEnd();
  house1();
  glFlush();
  glutSwapBuffers();
 

}

void keyboard(unsigned char key, int x, int y) {
  switch (key) {
  case 27:
  	exit(0);
  case 'a':
  case 'A':
    glTranslatef(5.0, 0.0, 0.0);
    break;
  case 'd':
  case 'D':
    glTranslatef(-5.0, 0.0, 0.0);
    break;
  case 'w':
  case 'W':
    glTranslatef(0.0, 0.0, 5.0);
    break;
  case 's':
  case 'S':
    glTranslatef(0.0, 0.0, -5.0);
    break;
  case 't':
  case 'T':
    glRotatef(2, 1.0, 0.0, 0.0);
    break;
  case 'g':
  case 'G':
    glRotatef(358, 359.0, 0.0, 0.0);
    break;

  case 'Q':
  case 'q':	
    glRotatef(2, 0.0, 1.0, 0.0);
    break;

  case 'E':
  case 'e':
    glRotatef(358, 0.0, 359.0, 0.0);
    break;

  case 'h':
  case 'H':
    glTranslatef(0.0, 2.0, 0.0);
    break;
  case 'y':
  case 'Y':
    glTranslatef(0.0, -2.0, 0.0);
    break;
  case 'p':
  case 'P':
  glLoadIdentity();	
  glTranslatef(0.0, -20.0, 25.0);
    break;

  }
  display();
}

void resize(int width, int height) {
  if (height == 0) height = 1;

  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  gluPerspective(80.0, width / height, 1.0, 600.0);
  glTranslatef(0.0, -59.0, -320.0);
  glMatrixMode(GL_MODELVIEW);
}


int main(int argc, char ** argv) {
  glutInit( & argc, argv);
  glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
  glutInitWindowSize(1920, 1080);
  glutInitWindowPosition(100, 10);
  glutCreateWindow("3D map");
  init();
  glEnable(GL_DEPTH_TEST);
  glutDisplayFunc(display);
  glutKeyboardFunc(keyboard);
  createMenu();
  glutReshapeFunc(resize);
  glTranslatef(0.0, 0.0, 50.0);
  // glTranslatef(0.0, -44.0, 0.0);
  glutMainLoop();
  return 0;

}