#include <GL/glut.h>
#include <GL/glu.h>
#include <math.h>
#include <iostream>
using namespace std;

float cc[20][2];

void init(void);
void display(void);
void keyboard(unsigned char, int, int);
void resize(int, int);
void drawcube(int, int, int);
void draw_star(float,float);
void house(float,float,float);
void apart(float,float,float);
void stand(float ,float ,float );
float  h=5,h1=6,d1=4,g=1,g1=2;

//void road1(float,float,float,float,float);


//int is_depth; /* depth testing flag */

int main (int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(1100, 1100);
	glutInitWindowPosition(100, 10);
	glutCreateWindow("3D city");
	init();
	glutDisplayFunc(display);
	glutKeyboardFunc(keyboard);

	/* this time we're going to keep the aspect ratio
	constant by trapping the window resizes */
	glutReshapeFunc(resize);

	glutMainLoop();
	return 0;
}

void apart(float x,float y,float z)
{
	int i;
	int j;
	glColor3f(0.7,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(x,y,z+0.5);
	glVertex3f(x+45,y,z+0.5);
	glVertex3f(x+45,y+100,z+0.5);
 	glVertex3f(x,y+100,z+0.5);
	glEnd();
	glColor3f(0.8,0.8,0.8);
for(j=0;j<8;j++)
{

	glPushMatrix();
		glTranslatef(0,-12*j,0);
	for(i=0;i<4;i++)
	{
		glPushMatrix();
		glTranslatef(11*i,0,0);
	glBegin(GL_POLYGON);
	glVertex3f(x+2,y+98,z);
	glVertex3f(x+10,y+98,z);
	glVertex3f(x+10,y+88,z);
 	glVertex3f(x+2,y+88,z);
	glEnd();
	glPopMatrix();
	}glPopMatrix();
}glColor3f(0,0,0);
for(j=0;j<8;j++)
{

	glPushMatrix();
		glTranslatef(0,-12*j,0);
	for(i=0;i<4;i++)
	{
		glPushMatrix();
		glTranslatef(11*i,0,0);
		glBegin(GL_LINE_LOOP);
	glVertex3f(x+2,y+98,z);
	glVertex3f(x+10,y+98,z);
	glVertex3f(x+10,y+88,z);
 	glVertex3f(x+2,y+88,z);
	glEnd();
	glPopMatrix();
	}glPopMatrix();
}



glColor3f(0.6,0.6,0.6);
	glBegin(GL_POLYGON);
	glVertex3f(x,y,z+45-0.5);
	glVertex3f(x+45,y,z+45-0.5);
	glVertex3f(x+45,y+100,z+45-0.5);
 	glVertex3f(x,y+100,z+45-0.5);
	glEnd();  	glColor3f(0.8,0.8,0.8);

for(j=0;j<8;j++)
{

	glPushMatrix();
		glTranslatef(0,-12*j,0);
	for(i=0;i<4;i++)
	{
		glPushMatrix();
		glTranslatef(11*i,0,0);
	glBegin(GL_POLYGON);
	glVertex3f(x+2,y+98,z+45);
	glVertex3f(x+10,y+98,z+45);
	glVertex3f(x+10,y+88,z+45);
 	glVertex3f(x+2,y+88,z+45);
	glEnd();
	glPopMatrix();
	}glPopMatrix();
}glColor3f(0,0,0);

for(j=0;j<8;j++)
{

	glPushMatrix();
		glTranslatef(0,-12*j,0);
	for(i=0;i<4;i++)
	{
		glPushMatrix();
		glTranslatef(11*i,0,0);
	glBegin(GL_LINE_LOOP);
	glVertex3f(x+2,y+98,z+45);
	glVertex3f(x+10,y+98,z+45);
	glVertex3f(x+10,y+88,z+45);
 	glVertex3f(x+2,y+88,z+45);
	glEnd();
	glPopMatrix();
	}glPopMatrix();
}
///////////////////////////

glColor3f(0.6,0.6,0.6);
	glBegin(GL_POLYGON);
	glVertex3f(x+0.5,y,z);
	glVertex3f(x+0.5,y,z+45);
	glVertex3f(x+0.5,y+100,z+45);
 	glVertex3f(x+0.5,y+100,z);
	glEnd();
	glColor3f(0.8,0.8,0.8);
for(j=0;j<8;j++)
{

	glPushMatrix();
		glTranslatef(0,-12*j,0);
	for(i=0;i<4;i++)
	{
		glPushMatrix();
		glTranslatef(0,0,11*i);
	glBegin(GL_POLYGON);
	glVertex3f(x,y+98,z+2);
	glVertex3f(x,y+98,z+10);
	glVertex3f(x,y+88,z+10);
 	glVertex3f(x,y+88,z+2);
	glEnd();
	glPopMatrix();
	}glPopMatrix();
}glColor3f(0,0,0);
for(j=0;j<8;j++)
{

	glPushMatrix();
		glTranslatef(0,-12*j,0);
	for(i=0;i<4;i++)
	{
		glPushMatrix();
		glTranslatef(0,0,11*i);
		glBegin(GL_LINE_LOOP);
	glVertex3f(x,y+98,z+2);
	glVertex3f(x,y+98,z+10);
	glVertex3f(x,y+88,z+10);
 	glVertex3f(x,y+88,z+2);
	glEnd();
	glPopMatrix();
	}glPopMatrix();
}
///////////////////////////
glColor3f(0.6,0.6,0.6);

	glBegin(GL_POLYGON);
	glVertex3f(x+45-0.5,y,z-0.5);
	glVertex3f(x+45-0.5,y,z+45-0.5);
	glVertex3f(x+45-0.5,y+100,z+45-0.5);
 	glVertex3f(x+45-0.5,y+100,z-0.5);
	glEnd(); glColor3f(0.8,0.8,0.8);
for(j=0;j<8;j++)
{

	glPushMatrix();
		glTranslatef(0,-12*j,0);
	for(i=0;i<4;i++)
	{
		glPushMatrix();
		glTranslatef(0,0,11*i);
	glBegin(GL_POLYGON);
	glVertex3f(x+45,y+98,z+2);
	glVertex3f(x+45,y+98,z+10);
	glVertex3f(x+45,y+88,z+10);
 	glVertex3f(x+45,y+88,z+2);
	glEnd();
	glPopMatrix();
	}glPopMatrix();
}
glColor3f(0,0,0);
for(j=0;j<8;j++)
{

	glPushMatrix();
		glTranslatef(0,-12*j,0);
	for(i=0;i<4;i++)
	{
		glPushMatrix();
		glTranslatef(0,0,11*i);
		glBegin(GL_LINE_LOOP);
	glVertex3f(x+45,y+98,z+2);
	glVertex3f(x+45,y+98,z+10);
	glVertex3f(x+45,y+88,z+10);
 	glVertex3f(x+45,y+88,z+2);
	glEnd();
	glPopMatrix();
	}glPopMatrix();
}

glColor3f(0.5,0.5,0.5);
glBegin(GL_POLYGON);
	glVertex3f(x,y,z-0.5);
	glVertex3f(x+45,y,z-0.5);
	glVertex3f(x+45,y,z+45-0.5);
 	glVertex3f(x,y,z+45-0.5);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(x,y+100,z);
	glVertex3f(x+45,y+100,z);
	glVertex3f(x+45,y+100,z+45);
 	glVertex3f(x,y+100,z+45);
	glEnd();
}

void house(float x,float y,float z)
{
	glColor3f(0.01,0.05,0.3);
	glBegin(GL_POLYGON);
	glVertex3f(x,y,z);
	glVertex3f(x,y,z+30);
	glVertex3f(x,y+15,z+30);
	glVertex3f(x,y+15,z);
	glEnd();

	glColor3f(0.01,0.05,0.3);
	glBegin(GL_POLYGON);
	glVertex3f(x-15,y,z);
	glVertex3f(x-15,y+15,z);
	glVertex3f(x-15,y+15,z+30);
	glVertex3f(x-15,y,z+30);
	glEnd();

	glColor3f(0.01,0.05,0.3);
	glBegin(GL_POLYGON);
	glVertex3f(x,y,z+30);
	glVertex3f(x-15,y,z+30);
	glVertex3f(x-15,y+15,z+30);
	glVertex3f(x,y+15,z+30);
	glEnd();

	glColor3f(0.01,0.05,0.3);
	glBegin(GL_POLYGON);
	glVertex3f(x-15,y,z);
	glVertex3f(x-15,y+15,z);
	glVertex3f(x,y+15,z);
	glVertex3f(x,y,z);
	glEnd();

	glColor3f(0.01,0.05,1.5);
	glBegin(GL_POLYGON);
	glVertex3f(x-15,y,z);
	glVertex3f(x,y,z);
	glVertex3f(x,y,z+30);
	glVertex3f(x-15,y,z+30);
	glEnd();


	glColor3f(0.51,0.015,0.008);
	glBegin(GL_POLYGON);
	glVertex3f(x+1.69*3,y+3.5*3,z);
	glVertex3f(x-2.5*3,y+7.5*3,z);
	glVertex3f(x-2.5*3,y+7.5*3,z+30);
	glVertex3f(x+1.69*3,y+3.5*3,z+30);
	glEnd();


	glColor3f(0.51,0.015,0.008);
	glBegin(GL_POLYGON);
	glVertex3f(x-6.69*3,y+3.5*3,z);
	glVertex3f(x-6.69*3,y+3.5*3,z+30);
	glVertex3f(x-2.5*3,y+7.5*3,z+30);
	glVertex3f(x-2.5*3,y+7.5*3,z);
	glEnd();


glColor3f(0.1,0.015,0.13);
	glBegin(GL_POLYGON);
	glVertex3f(x,y+15,z);
	glVertex3f(x-15,y+5,z);
	glVertex3f(x-2.5*3,y+7.5*3,z);
	glEnd();

glColor3f(0.1,0.015,0.13);
	glBegin(GL_POLYGON);
	glVertex3f(x,y+15,z+30);
	glVertex3f(x-15,y+15,z+30);
	glVertex3f(x-2.5*3,y+7.5*3,z+30);
	glEnd();
}


void house1()
{
	//house(-60,0.1,-10);
	stand(-10,6,130);
	//glClear(GL_DEPTH_BUFFER_BIT);

	house(120,0.1,50);

	house(120,0.1,90);

	house(160,0.1,90);

	house(80,0.1,90);

	house(160,0.1,50);

    house(80,0.1,50);

    house(-130,0.1,120);

    house(-130,0.1,160);

    house(-90,0.1,120);

	house(-60,0.1,120);

    house(-90,0.1,160);

    //stand(-10,6,130);

    house(-60,0.1,160);
	apart(150,0,-150);
	//apart(39,0,50);
//		glRotated(90,1,0,0);
    apart(80,0,-90);

	apart(150,0,-90);
	apart(150,0,-30);

    apart(-150,0,-30);
    apart(-150,0,-110);

    apart(-150,0,-180);

}


void init(void)
{
		glClearColor(0.8,0.8,1.9,0.0);
		//for night uncomment next line and comment above line
		//glClearColor(0.0,0.0,0.0,0.0);
glEnable(GL_DEPTH_TEST);
	glMatrixMode(GL_MODELVIEW);

}
//for night uncomment this
/*void draw_star(GLfloat x, GLfloat y)
{
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);
        glVertex2f(x,y);
        glVertex2f(x+1.5,y-4);
        glVertex2f(x+6.5,y-5.5);
        glVertex2f(x+2.5,y-9);
        glVertex2f(x+4.5,y-14);
        glVertex2f(x,y-11.5);
        glVertex2f(x-4.5,y-14);
        glVertex2f(x-3,y-9);
        glVertex2f(x-6.5,y-5.5);
        glVertex2f(x-1.5,y-5);
        glVertex2f(x,y);
    glEnd();
}*/


void stand(float x,float y,float z)
{
	glColor3f(1,0.8,0);
	glBegin(GL_POLYGON);
glVertex3f(x,y,z);
glVertex3f(x,y-h1,z+d1);
glVertex3f(x+h,y-h1,z+d1);
glVertex3f(x+h,y,z);
glEnd();
	glColor3f(1,0.5,0);
	glBegin(GL_POLYGON);
glVertex3f(x,y,z);
glVertex3f(x+h,y,z);
glVertex3f(x+h,y-h1,z-d1);
glVertex3f(x,y-h1,z-d1);
glEnd();

glColor3f(0.6,0.12,0.4);

glBegin(GL_POLYGON);
glVertex3f(x,y-h1,z+d1);
glVertex3f(x,y-h1-2,z+d1);
glVertex3f(x+1,y-h1-2,z+d1);
glVertex3f(x+1,y-h1,z+d1);
glEnd();

glColor3f(0.6,0.12,0.4);
glBegin(GL_POLYGON);
glVertex3f(x+h,y-h1,z+d1);
glVertex3f(x+h,y-h1-2,z+d1);
glVertex3f(x+h-1,y-h1-2,z+d1);
glVertex3f(x+h-1,y-h1,z+d1);
glEnd();

glColor3f(0.6,0.12,0.4);

glBegin(GL_POLYGON);
glVertex3f(x,y-h1,z-d1);
glVertex3f(x,y-h1-2,z-d1);
glVertex3f(x+1,y-h1-2,z-d1);
glVertex3f(x+1,y-h1,z-d1);
glEnd();

glColor3f(0.6,0.12,0.4);

glBegin(GL_POLYGON);
glVertex3f(x+h,y-h1,z-d1);
glVertex3f(x+h,y-h1-2,z-d1);
glVertex3f(x+h-1,y-h1-2,z-d1);
glVertex3f(x+h-1,y-h1,z-d1);
glEnd();
}

void display(void)
{
	//if (is_depth)
		glClear(GL_COLOR_BUFFER_BIT| GL_DEPTH_BUFFER_BIT);
	//else
		//glClear(GL_COLOR_BUFFER_BIT);
	/* draw the floor */
	glBegin(GL_QUADS);
	glColor3f(0.8,0.6,0.4);
        glVertex3f(-200.0, 0.0, -200.0);
			glColor3f(0.8,0.6,0.4);
glVertex3f(-200.0, 0.0, 200.0);
	glColor3f(0.8,0.6,0.4);
		glVertex3f(200.0, 0.0, 200.0);
	glColor3f(0.8,0.6,0.4);
		glVertex3f(200.0, 0.0, -200.0);
	glEnd();
	glFlush();

   //for night uncoment this
   /* draw_star(20,240);
    draw_star(180,220);
    draw_star(-30,280);
    draw_star(190,280);
    draw_star(100,220);
    draw_star(-230,250);
    draw_star(-190,210);
    draw_star(-88,260);
    draw_star(88,270);
    draw_star(-170,280);
*/
    glColor3f(0.3,0.015,0.13);
    glPushMatrix();
	glTranslatef(-15,1,50);
    glutSolidCube(7);
    glPopMatrix();

    glColor3f(0.3,0.015,0.13);
    glPushMatrix();
	glTranslatef(-15,1,-40);
    glutSolidCube(7);
    glPopMatrix();

    glColor3f(0.3,0.015,0.13);
    glPushMatrix();
	glTranslatef(-15,1,20);
    glutSolidCube(7);
    glPopMatrix();

    glColor3f(0.3,0.015,0.13);
    glPushMatrix();
	glTranslatef(-15,1,-10);
    glutSolidCube(7);
    glPopMatrix();

    glColor3f(0.3,0.015,0.13);
    glPushMatrix();
	glTranslatef(-15,1,-80);
    glutSolidCube(7);
    glPopMatrix();

    glColor3f(0.3,0.015,0.13);
    glPushMatrix();
	glTranslatef(-15,1,-120);
    glutSolidCube(7);
    glPopMatrix();

    glColor3f(0.3,0.015,0.13);
    glPushMatrix();
	glTranslatef(-15,1,-160);
    glutSolidCube(7);
    glPopMatrix();




    glColor3f(0.015,0.3,0.13);
    glPushMatrix();
    glTranslatef(-15,24,50);
    glScalef(1.1,2.3,0.8);
	glutSolidSphere(10,15,6);
	glFlush();
	glPopMatrix();

    glColor3f(0.015,0.3,0.13);
    glPushMatrix();
    glTranslatef(-15,24,-40);
    glScalef(1.1,2.3,0.8);
	glutSolidSphere(10,15,4);
	glFlush();
	glPopMatrix();

	glColor3f(0.015,0.3,0.13);
    glPushMatrix();
    glTranslatef(-15,24,20);
    glScalef(1.1,2.3,0.8);
	glutSolidSphere(10,15,4);
	glFlush();
	glPopMatrix();

	glColor3f(0.015,0.3,0.13);
    glPushMatrix();
    glTranslatef(-15,24,-10);
    glScalef(1.1,2.3,0.8);
	glutSolidSphere(10,15,4);
	glFlush();
	glPopMatrix();

    glColor3f(0.015,0.3,0.13);
    glPushMatrix();
    glTranslatef(-15,24,-80);
    glScalef(1.1,2.3,0.8);
	glutSolidSphere(10,15,4);
	glFlush();
	glPopMatrix();

    glColor3f(0.015,0.3,0.13);
    glPushMatrix();
    glTranslatef(-15,24,-120);
    glScalef(1.1,2.3,0.8);
	glutSolidSphere(10,15,4);
	glFlush();
	glPopMatrix();

    glColor3f(0.015,0.3,0.13);
    glPushMatrix();
    glTranslatef(-15,24,-160);
    glScalef(1.1,2.3,0.8);
	glutSolidSphere(10,15,4);
	glFlush();
	glPopMatrix();



//    house(-60,0.1,-10);

//
	//house(90,0.1,-30);



    //house(120,0.1,-50);

	//apart(39,0,50);

    //road1(20,120,0.1,12,200);

    //glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_QUADS);
        glColor3f(0.2, 0.2, 0.2);
        glVertex3f(0,0.01,-200); /* road */
		glColor3f(0.2, 0.2, 0.2);
		glVertex3f(0,0.01,200);
		glColor3f(0.2, 0.2, 0.2);
		glVertex3f(18,0.01,200);
		glColor3f(0.2, 0.2, 0.2);
		glVertex3f(18,0.01,-200);
		glEnd();

	glBegin(GL_QUADS);
        glColor3f(1.0, 1.0, 1.0);
        glVertex3f(8.5,0.01,-200); /* road */
		glColor3f(1.0, 1.0, 1.0);
		glVertex3f(8.5,0.01,200);
		glColor3f(1.0, 1.0, 1.0);
		glVertex3f(9.5,0.01,200);
		glColor3f(1.0, 1.0, 1.0);
		glVertex3f(9.5,0.01,-200);
		glEnd();

glBegin(GL_QUADS);
        glColor3f(0.2, 0.2, 0.2);
        glVertex3f(44,0.01,-200); /* road */
		glColor3f(0.2, 0.2, 0.2);
        glVertex3f(44,0.01,160);
		glColor3f(0.2, 0.2, 0.2);
        glVertex3f(54,0.01,160);
		glColor3f(0.2, 0.2, 0.2);
        glVertex3f(54,0.01,-200);
		glEnd();

		glBegin(GL_QUADS);
        glColor3f(0.2, 0.2, 0.2);
        glVertex3f(54,0.01,-180); /* road */
		glColor3f(0.2, 0.2, 0.2);
        glVertex3f(54,0.01,-160);
		glColor3f(0.2, 0.2, 0.2);
        glVertex3f(200,0.01,-160);
		glColor3f(0.2, 0.2, 0.2);
        glVertex3f(200,0.01,-180);
		glEnd();


glBegin(GL_QUADS);
        glColor3f(0.2, 0.2, 0.2);
        glVertex3f(18,0.01,160); /* road */
		glColor3f(0.2, 0.2, 0.2);
        glVertex3f(18,0.01,170);
		glColor3f(0.2, 0.2, 0.2);
        glVertex3f(200,0.01,170);
		glColor3f(0.2, 0.2, 0.2);
        glVertex3f(200,0.01,160);
		glEnd();


glBegin(GL_QUADS);
        glColor3f(0.2, 0.2, 0.2);
        glVertex3f(-200,0.01,90); /* road */
		glColor3f(0.2, 0.2, 0.2);
        glVertex3f(-200,0.01,100);
		glColor3f(0.2, 0.2, 0.2);
        glVertex3f(0,0.01,100);
		glColor3f(0.2, 0.2, 0.2);
        glVertex3f(0,0.01,90);
		glEnd();

glBegin(GL_QUADS);
        glColor3f(0.2, 0.2, 0.2);
        glVertex3f(-90,0.01,-200); /* road */
		glColor3f(0.2, 0.2, 0.2);
        glVertex3f(-90,0.01,90);
		glColor3f(0.2, 0.2, 0.2);
        glVertex3f(-80,0.01,90);
		glColor3f(0.2, 0.2, 0.2);
        glVertex3f(-80,0.01,-200);
		glEnd();

	/* draw 12 cubes with different colors */
	//drawcube(75, 57, 2);
	//drawcube(-65, -12, 3);
	//drawcube(50, -50, 1);
	//drawcube(-56, 17, 2);
	//drawcube(67, 12, 3);
	house1();
	//drawcube(-87, 32, 1);
	//drawcube(-26, 75, 2);
	//drawcube(57, 82, 3);
	//drawcube(-3, 12, 1);
	//drawcube(46, 35, 2);
	//drawcube(37, -2, 3);
	glFlush();
	glutSwapBuffers();


}


void keyboard(unsigned char key, int x, int y)
{
	/* This time the controls are:

	  "a": move left
	  "d": move right
	  "w": move forward
	  "s": move back
	  "t": toggle depth-testing

	*/
	switch (key)
	{
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
	/*case 't':
	case 'T':
		if (is_depth)
		{
			is_depth = 0;
			glDisable(GL_DEPTH_TEST);
		}
		else
		{
			is_depth = 1;
			glEnable(GL_DEPTH_TEST);
		}*/
	case 'q':
	case 'Q':
            glRotatef(-2,1.0,0.0,0.0);

    case 'e':
    case 'E':
            glRotatef(2,0.0,1.0,0.0);

	}
	display();
}

void resize(int width, int height)
{
	if (height == 0) height = 1;

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	/* note we divide our width by our height to get the aspect ratio */
	gluPerspective(80.0, width / height, 1.0, 600.0);

	/* set initial position */
	glTranslatef(0.0, -20.0, -320.0);

	glMatrixMode(GL_MODELVIEW);
}

void drawcube(int x_offset, int z_offset, int color)
{
	/* this function draws a cube centerd at (x_offset, z_ofapart(39,0,50);fset)
	x and z _big are the back and rightmost points, x and z _small are
	the front and leftmost points */
	float x_big = (float)x_offset +3;
	float z_big = (float)z_offset +3;
	float x_small = (float)x_offset - 6;
	float z_small = (float)z_offset - 2;
	switch(color)
	{
	case 1:
		glColor3f(1.0,0.5,1.0);
		break;
	case 2:
		glColor3f(0.3,1.0,0.5);
		break;
	case 3:
		glColor3f(0.0,0.5,1.0);
		break;
	}
	glBegin(GL_QUADS);
		glVertex3f(x_small,24.0,z_big); /* front */
		glVertex3f(x_small,0.0,z_big);
		glVertex3f(x_big,0.0,z_big);
		glVertex3f(x_big,15.0,z_big);

		glVertex3f(x_big,15.0,z_small); /* back */
		glVertex3f(x_big,0.0,z_small);
		glVertex3f(x_small,0.0,z_small);
		glVertex3f(x_small,15.0,z_small);

		glVertex3f(x_big,15.0,z_big); /* right */
		glVertex3f(x_big,0.0,z_big);
		glVertex3f(x_big,0.0,z_small);
		glVertex3f(x_big,15.0,z_small);

		glVertex3f(x_small,15.0,z_small); /* left */
		glVertex3f(x_small,0.0,z_small);
		glVertex3f(x_small,0.0,z_big);
		glVertex3f(x_small,15.0,z_big);

		glVertex3f(x_small,15.0,z_big); /* top */
		glVertex3f(x_big,15.0,z_big);
		glVertex3f(x_big,15.0,z_small);
		glVertex3f(x_small,15.0,z_small);

		glVertex3f(x_small,0.0,z_small); /* bottom */
		glVertex3f(x_big,0.0,z_small);
		glVertex3f(x_big,0.0,z_big);
		glVertex3f(x_small,0.0,z_big);
	glEnd();
}
