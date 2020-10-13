#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define PI 3.1416

int f=0;
float h=0.0,i=0.0;
int x=66,a=66,m=66;
int y=48, b=48, n=48;
int z=0, c=0, p=0,as=0;

void init()

{
glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 1100, 0.0, 650);
}

void circle1()
{
			float theta = 0.0;

    glBegin(GL_POLYGON);
    {
        for(int i = 0; i <360; i++)
        {

            theta=i*PI/180;
            glVertex2f(40*cos(theta)+225, 40*sin(theta)+540);
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
            glVertex2f(40*cos(theta)+225, 40*sin(theta)+440);

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
            glVertex2f(40*cos(theta)+225, 40*sin(theta)+340);

        }
    }
    glEnd();

}






void stopsign()
{

    // circle down for stop sign
float the = 0.0;
    glBegin(GL_POLYGON);
    {
        for(int i = 0; i <360; i++)
        {
        glColor3ub(204, 82, 0);
        the=i*PI/180;
        glVertex2f(35*cos(the)+970, 15*sin(the)+250);
        }
    }
    glEnd();

    // boundary board
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(950, 470);
    glColor3ub(232, 222, 220);
    glVertex2f(990, 470);
    glColor3ub(235, 233, 232);
    glVertex2f(1030,420);
    glColor3ub(245, 242, 240);
    glVertex2f(990, 370);
    glColor3ub(209, 207, 205);
    glVertex2f(950, 370);
    glColor3ub(245, 242, 240);
    glVertex2f(910, 420);
    glEnd();
     // main inside board
     glBegin(GL_POLYGON);
    glColor3ub(242, 48, 10);

    glColor3ub(255, 77, 64);
    glVertex2f(955, 462);
    glColor3ub(191, 22, 10);
    glVertex2f(985, 462);
    glColor3ub(230, 43, 30);
    glVertex2f(1020,420);
    glColor3ub(245, 105, 95);
    glVertex2f(985, 378);
    glColor3ub(186, 62, 37);
    glVertex2f(955, 378);
    glColor3ub(240, 64, 29);
    glVertex2f(920, 420);
    glColor3f(1,1,1);
    glEnd();
// Stop type

    char string[] = "STOP";
	glRasterPos2f(948,410);

	int len = strlen(string);
    for (int i = 0; i < len; i++)
    {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, string[i]);
	}

    // pole for stop sign
    glPushMatrix();
glTranslatef(0,0,0.0);
glBegin(GL_QUADS);
glColor3ub(255, 255, 102);
glColor3ub(143, 166, 149);
glVertex2f(962, 370);
glColor3ub(187, 196, 189);
glVertex2f(977, 370);
glColor3ub(213, 219, 214);
glVertex2f(977, 250);
glColor3ub(94, 92, 92);
glVertex2f(962, 250);
glEnd();
glPopMatrix();

}

void roadstripe()
{
    for(int g=0; g<650;g+=100)
    {
   glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(530, g);
glVertex2f(550, g);
glVertex2f(550, g+40);
glVertex2f(530, g+40);
glEnd();

    }
}

void car()
{
// upper roof
 glPushMatrix();
glTranslatef(0,0,0.0);

glBegin(GL_QUADS);

glColor3ub(128, 25, 78);
glVertex2f(520, 630-h);
glColor3ub(131, 33, 133);
glVertex2f(550, 630-h);
glColor3ub(95, 14, 97);
glVertex2f(570, 590-h);
glColor3ub(163, 39, 128);
glVertex2f(500, 590-h);
glEnd();

//down white roof
glPushMatrix();
glTranslatef(0,0,0.0);
glColor3ub(229, 232, 216);

glBegin(GL_QUADS);
glVertex2f(502, 590-h);
glColor3ub(133, 215, 222);
glVertex2f(568, 590-h);
glColor3ub(245, 246, 247);
glVertex2f(580, 550-h);
glColor3ub(218, 236, 237);
glVertex2f(490, 550-h);
glEnd();

// Left Mirror
glColor3ub(140, 31, 140);
glBegin(GL_QUADS);
glVertex2f(470, 578-h);
glVertex2f(488, 565-h);
glVertex2f(490, 550-h);
glVertex2f(475, 560-h);
glEnd();

// Right Mirror
glColor3ub(140, 31, 140);
glBegin(GL_QUADS);
glVertex2f(584, 567-h);
glVertex2f(600, 578-h);
glVertex2f(596, 560-h);
glVertex2f(580, 550-h);
glEnd();

// WindShield
glPushMatrix();
glTranslatef(0,0,0.0);
glColor3ub(82, 81, 80);
glBegin(GL_QUADS);

glVertex2f(505, 585-h);
glColor3ub(33, 32, 30);
glVertex2f(565, 585-h);
glColor3ub(84, 84, 83);
glVertex2f(573, 555-h);
glColor3ub(59, 58, 57);
glVertex2f(497, 555-h);
glEnd();



// Bonut
glBegin(GL_POLYGON);


glColor3ub(128, 25, 78);
glVertex2f(490, 550-h);
glColor3ub(163, 39, 128);
glVertex2f(580, 550-h);
glColor3ub(95, 14, 97);
glVertex2f(600, 500-h);
glColor3ub(163, 39, 128);
glVertex2f(573, 490-h);
glColor3ub(131, 49, 145);
glVertex2f(495, 490-h);
glColor3ub(119, 52, 130);
glVertex2f(470, 500-h);
glEnd();
glPopMatrix();



// Left Headlight
glColor3ub(237, 236, 218);
glBegin(GL_QUADS);
glVertex2f(470, 500-h);
glVertex2f(500, 490-h);
glColor3ub(196, 196, 196);
glVertex2f(500, 470-h);
glVertex2f(470, 480-h);
glEnd();

// Left Headlight inner part

glBegin(GL_QUADS);
glColor3ub(233, 240, 50);
glVertex2f(475, 495-h);
glColor3ub(223, 227, 118);
glVertex2f(495, 484-h);
glColor3ub(255, 243, 18);
glVertex2f(495, 475-h);

glColor3ub(201, 195, 87);
glVertex2f(475, 483-h);
glEnd();


//down bonut left part

glBegin(GL_QUADS);

glColor3ub(95, 14, 97);
glVertex2f(470, 480-h);
glColor3ub(92, 19, 105);
glVertex2f(500, 470-h);
glColor3ub(124, 14, 143);
glVertex2f(500, 455-h);
glColor3ub(119, 52, 130);
glVertex2f(480, 460-h);
glEnd();

//down bonut middle part
glColor3ub(92, 19, 105);
glBegin(GL_QUADS);
glVertex2f(500, 470-h);
glColor3ub(176, 35, 174);
glVertex2f(570, 470-h);
glColor3ub(108, 24, 122);
glVertex2f(570, 455-h);
glColor3ub(124, 14, 143);
glVertex2f(500, 455-h);
glEnd();

//down bonut right part

glColor3ub(176, 35, 174);
glBegin(GL_QUADS);
glVertex2f(570, 470-h);
glColor3ub(163, 39, 128);
glVertex2f(600, 480-h);
glColor3ub(124, 14, 143);
glVertex2f(590, 460-h);
glColor3ub(108, 24, 122);
glVertex2f(570, 455-h);
glEnd();

// Right Headlight
glColor3ub(255,255,255);
glBegin(GL_QUADS);
glColor3ub(237, 236, 218);
glVertex2f(570, 490-h);
glVertex2f(600, 500-h);
glColor3ub(196, 196, 196);
glVertex2f(600, 480-h);
glVertex2f(570, 470-h);
glEnd();

// Right Headlight inner part

glBegin(GL_QUADS);
glColor3ub(233, 240, 50);
glVertex2f(575, 485-h);
glColor3ub(223, 227, 118);
glVertex2f(595, 495-h);
glColor3ub(255, 243, 18);
glVertex2f(595, 482-h);
glColor3ub(201, 195, 87);
glVertex2f(575, 475-h);
glEnd();

//between headlights
glColor3ub(0,0,0);
glBegin(GL_QUADS);
glVertex2f(500, 490-h);
glVertex2f(570,490-h);
glVertex2f(570, 470-h);
glVertex2f(500, 470-h);
glEnd();


}


void timer(int as)
{
    //glutPostRedisplay();
    //glutTimerFunc(1000/60,timer,0);
    if(h<=500)
    h=h+1.0;

    if(h>500)
        h=0.0;
}

void control(int f)
{
		if(f)
		glutTimerFunc(500/60, timer, 0);

		glutPostRedisplay();

}


void tLights()
{
glClear(GL_COLOR_BUFFER_BIT);
//glLoadIdentity();

glColor3f(0.0, 0.0, 1.0);

//

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
//GRASS
glBegin(GL_QUADS);
glColor3ub(153, 255, 204);
glVertex2f(0, 650);
glVertex2f(1100, 650);
glColor3f(0.0, 1.0, 1.0);
glColor3ub(0, 128, 64);
glVertex2f(1100, 0);
glVertex2f(0, 0);
glEnd();

// ROAD
glBegin(GL_QUADS);
glColor3f(0.5, 0.5, 0.5);

glVertex2f(450,650);
glColor3ub(50, 54, 49);
glVertex2f(650,650);
glColor3ub(95, 97, 95);
glVertex2f(1100,0);
glColor3ub(181, 194, 176);
glVertex2f(0,0);
glEnd();



// circle below the pole for traffic light (bigger one) for making it a 3D look
float theta = 0.0;

glBegin(GL_POLYGON);
{
for(int i = 0; i <360; i++)
{
    glColor3ub(26, 31, 27);
    theta=i*PI/180;
    glVertex2f(45*cos(theta)+110, 25*sin(theta)+52);
    }
}
glEnd();

    // circle below animation smaller one
float thet = 0.0;

glBegin(GL_POLYGON);
    {
    for(int i = 0; i <360; i++)
        {
    glColor3ub(109, 120, 111);
    thet=i*PI/180;
    glVertex2f(35*cos(thet)+110, 15*sin(thet)+55);
        }
    }
    glEnd();

//LIGHT STAND
glPushMatrix();
glTranslatef(0,0,0.0);
glBegin(GL_QUADS);

glColor3ub(94, 92, 92);
glVertex2f(100, 560);

glColor3ub(213, 219, 214);
glVertex2f(120, 560);

glColor3ub(213, 219, 214);
glVertex2f(120, 50);

glColor3ub(94, 92, 92);
glVertex2f(100, 50);
glEnd();
glPopMatrix();


// upper handle
glPushMatrix();
glTranslatef(0,0,0.0);
glBegin(GL_QUADS);
glColor3ub(94, 92, 92);
glVertex2f(115, 520);
glVertex2f(180, 520);
glColor3ub(213, 219, 214);
glVertex2f(180, 510);
glVertex2f(115, 510);
glEnd();
glPopMatrix();



// 1ower handle
glPushMatrix();
glTranslatef(0,0,0.0);
glBegin(GL_QUADS);
glColor3ub(94, 92, 92);
glVertex2f(115, 360);
glVertex2f(180, 360);
glColor3ub(213, 219, 214);
glVertex2f(180, 350);
glVertex2f(115, 350);
glEnd();
glPopMatrix();


// 1 small adjoining handle
glPushMatrix();
glTranslatef(0,0,0.0);

glBegin(GL_QUADS);
glColor3ub(77, 50, 21);
glVertex2f(120, 361);
glColor3ub(161, 128, 93);
glVertex2f(125, 361);
glColor3ub(163, 126, 86);
glVertex2f(125, 348);
glColor3ub(120, 77, 31);
glVertex2f(120, 348);
glEnd();
glPopMatrix();

// 2 small adjoining handle
glPushMatrix();
glTranslatef(0,0,0.0);
glBegin(GL_QUADS);
glColor3ub(77, 50, 21);
glVertex2f(135, 361);
glColor3ub(161, 128, 93);
glVertex2f(140, 361);
glColor3ub(163, 126, 86);
glVertex2f(140, 348);
glColor3ub(120, 77, 31);
glVertex2f(135, 348);
glEnd();
glPopMatrix();

// 3 small adjoining handle
glPushMatrix();
glTranslatef(0,0,0.0);
glBegin(GL_QUADS);


glColor3ub(77, 50, 21);
glVertex2f(120, 521);
glColor3ub(161, 128, 93);
glVertex2f(125, 521);
glColor3ub(163, 126, 86);
glVertex2f(125, 509);
glColor3ub(120, 77, 31);
glVertex2f(120, 509);
glEnd();

glPopMatrix();


// 4 small adjoining handle
glPushMatrix();
glTranslatef(0,0,0.0);
glBegin(GL_QUADS);

glColor3ub(77, 50, 21);
glVertex2f(135, 521);

glColor3ub(161, 128, 93);
glVertex2f(140, 521);
glColor3ub(163, 126, 86);

glVertex2f(140, 509);
glColor3ub(120, 77, 31);
glVertex2f(135, 509);

glEnd();
glPopMatrix();


// upper circle of traffic light box
float t = 0.0;
   glBegin(GL_POLYGON);
    {
        glColor3ub(64, 61, 61);
        for(int i = 0; i <360; i++)
        {
            t=i*PI/180;
            glVertex2f(55*cos(t)+225, 55*sin(t)+590);
        }
    }
    glEnd();

// upper circle of traffic light box
float th = 0.0;
   glBegin(GL_POLYGON);
    {
        glColor3ub(0, 0, 0);
        for(int i = 0; i <360; i++)
        {
            th=i*PI/180;
            glVertex2f(50*cos(th)+225, 50*sin(th)+590);
        }
    }
    glEnd();

 // another square of traffic box

glBegin(GL_QUADS);
glColor3ub(73, 74, 73);
glVertex2f(145, 605);

glColor3ub(102, 115, 102);
glVertex2f(305, 605);

glColor3ub(31, 33, 31);
glVertex2f(305, 275);

glColor3ub(73, 74, 73);
glVertex2f(145, 275);
glEnd();

//traffic lights brown box

glBegin(GL_QUADS);

glColor3ub(48, 47, 47);
glVertex2f(155, 595);
glColor3ub(0, 0, 0);
glVertex2f(295, 595);

glColor3ub(0, 0, 0);
glVertex2f(295, 285);
glColor3ub(23, 21, 21);
glVertex2f(155, 285);


glEnd();


// each traffic light circle

glColor3ub(x, y, z);
circle1();
glColor3ub(m, n, p);
circle2();
glColor3ub(a, b, c);
circle3();
glPopMatrix();

roadstripe();
car();
stopsign();
control(f); //controls car  movement

//------------------------------------------------------------

//----------------------------------------------------------------------

	glutSwapBuffers();


}

void keyboard(int key,int p,int q)
{
	if(key==GLUT_KEY_UP)
	{
        f=0;
        control(f);
		x=255, y=0, z=0, m=66,n=48,p=0, a=66, b=48, c=0;
		//glutPostRedisplay();

	}
	else
	if(key==GLUT_KEY_RIGHT)
	{// green
        f=1;
        control(f);

		x=66, y=48, z=0, m=66,n=48,p=0, a=55 , b=161, c=62;
		//glutPostRedisplay();
		//glutTimerFunc(0, timer, 0);
	}
	else
	if(key==GLUT_KEY_LEFT)
	{
       //yellow

        f=0;
        control(f);
	    //glutTimerFunc(0, timer, 1);
		x=66, y=48, z=0, m=255,n=194,p=102, a=66, b=48, c=0;
		//glutPostRedisplay();
	}
	else
	if(key==GLUT_KEY_DOWN)
	{

                f=1;
                control(f);
				x=66, y=48, z=0, m=66,n=48,p=0, a=66, b=48, c=0;
                //glutPostRedisplay();
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
glutSpecialFunc(keyboard); //direction keys like up down

glutMainLoop();

}

