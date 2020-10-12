#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#define PI 3.1416

int x=66,a=66,m=66;
int y=48, b=48, n=48;
int z=0, c=0, p=0;

void init()

{



glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 1100, 0.0, 650);

	glMatrixMode(GL_MODELVIEW);
    glLoadIdentity() ;


}

void circle1()
{
			float theta = 0.0;

    glBegin(GL_POLYGON);
    {
        for(int i = 0; i <360; i++)
        {
            theta=i*PI/180;
            glVertex2f(60*cos(theta)+250, 60*sin(theta)+475);

        }
    }
    glEnd();

}


void circle2()
{
			float theta = 0.0;

    glBegin(GL_POLYGON);
    {
        for(int i = 0; i <360; i++)
        {
            theta=i*PI/180;
            glVertex2f(60*cos(theta)+380, 60*sin(theta)+475);

        }
    }
    glEnd();

}

void circle3()
{
			float theta = 0.0;

    glBegin(GL_POLYGON);
    {
        for(int i = 0; i <360; i++)
        {
            theta=i*PI/180;
            glVertex2f(60*cos(theta)+510, 60*sin(theta)+475);

        }
    }
    glEnd();

}

void tLights()
{
glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//glLoadIdentity();

glColor3f(0.0, 0.0, 1.0);

//
/*
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity(); */
//GRASS
glBegin(GL_QUADS);
glColor3ub(153, 255, 204);
glVertex2i(0, 650);
glVertex2i(1100, 650);
glColor3f(0.0, 1.0, 1.0);
glColor3ub(0, 128, 64);
glVertex2i(1100, 0);
glVertex2i(0, 0);
glEnd();

// ROAD
glBegin(GL_QUADS);
glColor3f(0.5, 0.5, 0.5);
glVertex2i(450,650);
glVertex2i(650,650);
glVertex2i(1100,0);
glVertex2i(0,0);



//LIGHT STAND
glPushMatrix();
glTranslatef(0,0,0.0);
glBegin(GL_QUADS);
glColor3ub(255, 255, 102);
glVertex2i(100, 480);
glVertex2i(130, 480);
glVertex2i(130, 50);
glVertex2i(100, 50);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(0,0,0.0);
glBegin(GL_QUADS);
glColor3ub(255, 253, 0);
glVertex2i(130, 480);
glVertex2i(180, 480);
glVertex2i(180, 450);
glVertex2i(130, 450);
glEnd();
glPopMatrix();


glBegin(GL_QUADS);
glColor3ub(177, 127, 62);
glVertex2i(130, 550);
glVertex2i(580, 550);
glVertex2i(580, 400);
glVertex2i(130, 400);
glEnd();


glPushMatrix();
glTranslatef(0,0,0.0);

glBegin(GL_QUADS);
glColor3f(0.5, 0.5, 0.5);
glVertex2i(540, 320);
glVertex2i(560, 320);
glVertex2i(560, 200);
glVertex2i(540, 200);

glEnd();
glColor3ub(x, y, z);
circle1();
glColor3ub(m, n, p);
circle2();
glColor3ub(a, b, c);
circle3();
glPopMatrix();
//------------------------------------------------------------

//----------------------------------------------------------------------

	glutSwapBuffers();


}

void keyboard(int key,int p,int q)
{
	if(key==GLUT_KEY_UP)
	{

		x=255, y=0, z=0, m=66,n=48,p=0, a=66, b=48, c=0;
		glutPostRedisplay();



	}
	else
	if(key==GLUT_KEY_RIGHT)
	{
		x=66, y=48, z=0, m=66,n=48,p=0, a=102, b=255, c=102;
		glutPostRedisplay();
	}
	else
	if(key==GLUT_KEY_LEFT)
	{
		x=66, y=48, z=0, m=255,n=194,p=102, a=66, b=48, c=0;
		glutPostRedisplay();
	}
	else
	if(key==GLUT_KEY_DOWN)
	{
				x=66, y=48, z=0, m=66,n=48,p=0, a=66, b=48, c=0;
                glutPostRedisplay();
	}
}







int main(int argc, char ** argv)

{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_DOUBLE| GLUT_RGBA);
glutInitWindowPosition(0, 0);
glutInitWindowSize(1900, 1900);
glutCreateWindow("Traffic Light");
glutDisplayFunc(tLights);
init();
//glutTimerFunc(0,timer,0);
glutSpecialFunc(keyboard);
glutMainLoop();
return EXIT_SUCCESS;
}

