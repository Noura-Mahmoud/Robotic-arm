#include <stdlib.h>
#include <GL/glut.h>
#include <math.h>

int Body_Z = 0, Body_Y = 0, Sphere = 0, arm1 = 0, arm2 = 0, leg1 = 0, leg2 = 0, shoulder = 0, elbow1 = 0, elbow2 = 0, fingerBase = 0, fingerUp = 0, Fumer = -90, Tibia = 0, Tibia2 = 0, Foot = 0, Foot2 = 0;
int moving, startx, starty;


GLfloat angle = 0.0;   /* in degrees */
GLfloat angle2 = 0.0;   /* in degrees */


void init(void)

{
	glClearColor(0.0, 9.0, 9.0, 0.0);
	glShadeModel(GL_FLAT);

	glMatrixMode(GL_PROJECTION);
	gluPerspective(60.0,
		1.0,
		1.0, 20.0);
	glMatrixMode(GL_MODELVIEW);

}
//
//void display(void)
//{
//	glClear(GL_COLOR_BUFFER_BIT);
//	glColor3f(0.0, 0.0, 0.0);
//	glClear(GL_COLOR_BUFFER_BIT);
//
//	glPushMatrix();
//	//--------------------------------
//	glRotatef(angle2, 1.0, 0.0, 0.0);
//	glRotatef(angle, 0.0, 1.0, 0.0);
//	glTranslatef(-1.0, 0.0, 0.0);
//	glRotatef((GLfloat)Body_Z, 0.0, 0.0, 1.0);
//	glRotatef((GLfloat)Body_Y, 0.0, 1.0, 0.0);
//	glTranslatef(0.0, 0.0, 0.0);
//
//	//----Body----
//	glPushMatrix();
//	glScalef(2.0, 4.0, 1.0);
//	glutWireCube(1.0);
//	glPopMatrix();
//
//
//	glTranslatef(-1, 3.0, 0.0);
//	glRotatef((GLfloat)Sphere, 0.0, 0.0, 1.0);
//	glTranslatef(1.0, 0.0, 0.0);
//
//
//
//	//----Head----
//
//	glPushMatrix();
//	glScalef(0.25, 0.5, 0.375);
//	glutWireSphere(2.0, 30, 20); // double radius , slices , stacks
//	glPopMatrix();
//
//
//
//	//----Arm1----
//
//	glPushMatrix();
//
//	/*glTranslatef(1 , -1.4, 0.0);
//	glRotatef((GLfloat)arm1, 0.0, 0.0, 1.0);
//	glTranslatef(1.0, 0.0, 0.0);*/
//
//	/*glPushMatrix();
//	glScalef(2.0, 0.6, 1.0);
//	glutWireCube(1.0);
//	glPopMatrix();
//
//
//	glTranslatef(1.0, 0.0, 0.0);
//	glRotatef((GLfloat)elbow, 0.0, 0.0, 1.0);
//	glTranslatef(1.0, 0.0, 0.0);
//
//	glPushMatrix();
//	glScalef(2.0, 0.6, 1.0);
//	glutWireCube(1.0);
//	glPopMatrix();*/
//
//
//	glTranslatef(-2.6, -2.3, 0.0);
//	glRotatef((GLfloat)arm1, 0.0, 0.0, 1.0);
//	glTranslatef(1.0, 0.0, 0.0);
//
//
//	glPushMatrix();
//	glScalef(0.5, 1.5, 1.0);
//	glutWireCube(1.0);
//	glPopMatrix();
//
//	glTranslatef(-1.0, -1.5, 0.0);
//	glRotatef((GLfloat)elbow1, 0.0, 0.0, -1.0);
//	glTranslatef(1.0, 0.0, 0.0);
//
//	glPushMatrix();
//	glScalef(0.5, 1.5, 1.0);
//	glutWireCube(1.0);
//	glPopMatrix();
//
//
//	// 4 fingers
//	for (int i = 0; i < 4; i++)
//	{
//
//		glPushMatrix();
//
//		glTranslatef(-0.34, -0.9, 0.45 - 0.3 * i);
//		glRotatef((GLfloat)fingerBase, 0.0, 0.0, 1.0);
//		glTranslatef(0.15, 0.0, 0);
//
//		glPushMatrix();
//		glScalef(0.1, 0.3, 0.1);
//		glutWireCube(1);
//		glPopMatrix();
//
//
//		glTranslatef(-0.15, -0.3, 0);
//		glRotatef((GLfloat)fingerUp, 0.0, 0.0, 1.0);
//		glTranslatef(0.15, 0.0, 0);
//
//		glPushMatrix();
//		glScalef(0.1, 0.3, 0.1);
//		glutWireCube(1);
//		glPopMatrix();
//
//		glPopMatrix();
//
//	}
//	// Thumb
//	glPushMatrix();
//
//	glTranslatef(0.06, -0.9, 0.0);
//	glRotatef((GLfloat)fingerBase, 0.0, 0.0, -1.0);
//	glTranslatef(0.15, 0.0, 0);
//	glPushMatrix();
//	glScalef(0.1, 0.3, 0.1);
//	glutWireCube(1);
//	glPopMatrix();
//
//	glTranslatef(-0.15, -0.3, 0);
//	glRotatef((GLfloat)fingerUp, 0.0, 0.0, -1.0);
//	glTranslatef(0.15, 0.0, 0);
//	glPushMatrix();
//	glScalef(0.1, 0.3, 0.1);
//	glutWireCube(1);
//	glPopMatrix();
//	glPopMatrix();
//
//
//	glPopMatrix();
//
//	//----Arm2----
//
//	glPushMatrix();
//
//	/*glTranslatef(-3, -1.4, 0.0);
//	glRotatef((GLfloat)arm2, 0.0, 0.0, 1.0);
//	glTranslatef(1.0, 0.0, 0.0);
//
//	glPushMatrix();
//	glScalef(2.0, 0.6, 1.0);
//	glutWireCube(1.0);
//	glPopMatrix();
//
//
//	glTranslatef(-3.0, 0.0, 0.0);
//	glRotatef((GLfloat)elbow2, 0.0, 0.0, 1.0);
//	glTranslatef(1.0, 0.0, 0.0);
//
//	glPushMatrix();
//	glScalef(2.0, 0.6, 1.0);
//	glutWireCube(1.0);
//	glPopMatrix();*/
//
//	glTranslatef(0.6, -2.3, 0.0);
//	glRotatef((GLfloat)arm2, 0.0, 0.0, 1.0);
//	glTranslatef(1.0, 0.0, 0.0);
//
//
//	glPushMatrix();
//	glScalef(0.5, 1.5, 1.0);
//	glutWireCube(1.0);
//	glPopMatrix();
//
//	glTranslatef(-1.0, -1.5, 0.0);
//	glRotatef((GLfloat)elbow2, 0.0, 0.0, -1.0);
//	glTranslatef(1.0, 0.0, 0.0);
//
//	glPushMatrix();
//	glScalef(0.5, 1.5, 1.0);
//	glutWireCube(1.0);
//	glPopMatrix();
//
//	// 4 fingers
//	for (int i = 0; i < 4; i++)
//	{
//
//		glPushMatrix();
//
//		glTranslatef(0.06, -0.9, 0.45 - 0.3 * i);
//		glRotatef((GLfloat)fingerBase, 0.0, 0.0, 1.0);
//		glTranslatef(0.15, 0.0, 0);
//
//		glPushMatrix();
//		glScalef(0.1, 0.3, 0.1);
//		glutWireCube(1);
//		glPopMatrix();
//
//
//		glTranslatef(-0.15, -0.3, 0);
//		glRotatef((GLfloat)fingerUp, 0.0, 0.0, 1.0);
//		glTranslatef(0.15, 0.0, 0);
//
//		glPushMatrix();
//		glScalef(0.1, 0.3, 0.1);
//		glutWireCube(1);
//		glPopMatrix();
//
//		glPopMatrix();
//
//	}
//	// Thumb
//	glPushMatrix();
//
//	glTranslatef(-0.34, -0.9, 0.0);
//	glRotatef((GLfloat)fingerBase, 0.0, 0.0, -1.0);
//	glTranslatef(0.15, 0.0, 0);
//	glPushMatrix();
//	glScalef(0.1, 0.3, 0.1);
//	glutWireCube(1);
//	glPopMatrix();
//
//	glTranslatef(-0.15, -0.3, 0);
//	glRotatef((GLfloat)fingerUp, 0.0, 0.0, -1.0);
//	glTranslatef(0.15, 0.0, 0);
//	glPushMatrix();
//	glScalef(0.1, 0.3, 0.1);
//	glutWireCube(1);
//	glPopMatrix();
//	glPopMatrix();
//
//
//	glPopMatrix();
//
//
//
//
//
//	//----Leg1----
//
//
//	glPushMatrix();
//
//	glTranslatef(-1.72, -6.0, 0.0);
//	glRotatef((GLfloat)leg1, 0.0, 0.0, 1.0);
//	glTranslatef(1.0, 0.0, 0.0);
//
//
//	glPushMatrix();
//	glScalef(0.6, 2.0, 1.0);
//	glutWireCube(1.0);
//	glPopMatrix();
//
//	glTranslatef(-1.0, -2.0, 0.0);
//	glRotatef((GLfloat)Tibia, 0.0, 0.0, -1.0);
//	glTranslatef(1.0, 0.0, 0.0);
//
//	glPushMatrix();
//	glScalef(0.6, 2.0, 1.0);
//	glutWireCube(1.0);
//	glPopMatrix();
//
//
//	// Foot
//	glPushMatrix();
//
//	glTranslatef(-0.23, -1.6, 0.0);
//	glRotatef((GLfloat)Foot, 0.0, 0.0, 1.0);
//	glTranslatef(0.2, 0.3, 0);
//	glPushMatrix();
//	glScalef(0.6, 0.5, 2.0);
//	glutSolidCube(1);
//	glPopMatrix();
//
//	glPopMatrix();
//
//	glPopMatrix();
//
//	//----Leg2----
//
//	glPushMatrix();
//
//	glTranslatef(-0.32, -6.0, 0.0);
//	glRotatef((GLfloat)leg2, 0.0, 0.0, 1.0);
//	glTranslatef(1.0, 0.0, 0.0);
//
//
//	glPushMatrix();
//	glScalef(0.6, 2.0, 1.0);
//	glutWireCube(1.0);
//	glPopMatrix();
//
//	glTranslatef(-1.0, -2.0, 0.0);
//	glRotatef((GLfloat)Tibia2, 0.0, 0.0, -1.0);
//	glTranslatef(1.0, 0.0, 0.0);
//
//	glPushMatrix();
//	glScalef(0.6, 2.0, 1.0);
//	glutWireCube(1.0);
//	glPopMatrix();
//
//
//	// Foot
//
//	glPushMatrix();
//
//	glTranslatef(-0.23, -1.6, 0.0);
//	glRotatef((GLfloat)Foot2, 0.0, 0.0, 1.0);
//	glTranslatef(0.2, 0.3, 0);
//	glPushMatrix();
//	glScalef(0.6, 0.5, 2.0);
//	glutSolidCube(1);
//	glPopMatrix();
//
//	glPopMatrix();
//
//	glPopMatrix();
//
//	//---------------------------------
//	glPopMatrix();
//
//	glutSwapBuffers();
//}
//
//void reshape (int w , int h)
//{
//	glMatrixMode(GL_PROJECTION);
//	gluPerspective(50.0 , w / (GLfloat) h, 3.0, 90.0);
//	glMatrixMode(GL_MODELVIEW);
//	gluLookAt(2.0, 4.0, 5.0, 0.0, 0.0, 0.0, 0.0, 0.1, 0.0); // observing position

//}

void reshape(int w, int h)
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(85.0, (GLfloat)w / (GLfloat)h, 1.0, 20.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glTranslatef(0.0, 0.0, -5.0);
}


void keyboard(unsigned char key, int x, int y)
{
	switch (key)
	{
	case 's':
		if (shoulder == 90)
			break;
		shoulder = (shoulder + 5) % 360;
		glutPostRedisplay();
		break;
	case 'S':
		if (shoulder == -145)
			break;
		shoulder = (shoulder - 5) % 360;
		glutPostRedisplay();
		break;
	case 'e':
		if (elbow1 == 120)
			break;
		elbow1 = (elbow1 + 5) % 360;
		glutPostRedisplay();
		break;
	case 'E':
		if (elbow1 == 0)
			break;
		elbow1 = (elbow1 - 5) % 360;
		glutPostRedisplay();
		break;
	case 'f':
		if (fingerBase == 60)
			break;
		fingerBase = (fingerBase + 5) % 360;
		glutPostRedisplay();
		break;
	case 'F':
		if (fingerBase == 0)
			break;
		fingerBase = (fingerBase - 5) % 360;
		glutPostRedisplay();
		break;
	case 'g':
		if (fingerUp == 60)
			break;
		fingerUp = (fingerUp + 5) % 360;
		glutPostRedisplay();
		break;
	case 'G':
		if (fingerUp == 0)
			break;
		fingerUp = (fingerUp - 5) % 360;
		glutPostRedisplay();
		break;


	case 'q':
		if (Body_Z == 355)
			break;
		Body_Z = (Body_Z + 5) % 360;
		glutPostRedisplay();
		break;
	case 'Q':
		if (Body_Z == -355)
			break;
		Body_Z = (Body_Z - 5) % 360;
		glutPostRedisplay();
		break;
	case 'w':
		if (Body_Y == 355)
			break;
		Body_Y = (Body_Y + 5) % 360;
		glutPostRedisplay();
		break;
	case 'W':
		if (Body_Y == -355)
			break;
		Body_Y = (Body_Y - 5) % 360;
		glutPostRedisplay();
		break;
	case 'z':
		if (Fumer == -10)
			break;
		Fumer = (Fumer + 5) % 360;
		glutPostRedisplay();
		break;
	case 'Z':
		if (Fumer == -145)
			break;
		Fumer = (Fumer - 5) % 360;
		glutPostRedisplay();
		break;
	case 'x':
		if (Tibia == 120)
			break;
		Tibia = (Tibia + 5) % 360;
		glutPostRedisplay();
		break;
	case 'X':
		if (Tibia == 0)
			break;
		Tibia = (Tibia - 5) % 360;
		glutPostRedisplay();
		break;
	case 'c':
		if (Foot == 30)
			break;
		Foot = (Foot + 5) % 360;
		glutPostRedisplay();
		break;
	case 'C':
		if (Foot == -30)
			break;
		Foot = (Foot - 5) % 360;
		glutPostRedisplay();
		break;

	case 27:
		exit(0);
		break;
	default:
		break;
	}
}


void mouse(int button, int state, int x, int y)
{
	if (button == GLUT_LEFT_BUTTON) {
		if (state == GLUT_DOWN) {
			moving = 1;
			startx = x;
			starty = y;
		}
		if (state == GLUT_UP) {
			moving = 0;
		}
	}
}
void motion(int x, int y)
{
	if (moving) {
		angle = angle + (x - startx);
		angle2 = angle2 + (y - starty);
		startx = x;
		starty = y;
		glutPostRedisplay();
	}
}



#define PI 3.14

double eye[] = { 0.0, 0.0, 5.0 };
double center[] = { 0.0, 0.0, 0.0 };
double up[] = { 0.0, 1.0, 0.0 };
double down[] = { 0.0, -1.0, 0.0 };

void rotatePoint(double a[], double theta, double p[])
{

	double temp[3];
	temp[0] = p[0];
	temp[1] = p[1];
	temp[2] = p[2];

	temp[0] = -a[2] * p[1] + a[1] * p[2];
	temp[1] = a[2] * p[0] - a[0] * p[2];
	temp[2] = -a[1] * p[0] + a[0] * p[1];

	temp[0] *= sin(theta);
	temp[1] *= sin(theta);
	temp[2] *= sin(theta);

	temp[0] += (1 - cos(theta)) * (a[0] * a[0] * p[0] + a[0] * a[1] * p[1] + a[0] * a[2] * p[2]);
	temp[1] += (1 - cos(theta)) * (a[0] * a[1] * p[0] + a[1] * a[1] * p[1] + a[1] * a[2] * p[2]);
	temp[2] += (1 - cos(theta)) * (a[0] * a[2] * p[0] + a[1] * a[2] * p[1] + a[2] * a[2] * p[2]);

	temp[0] += cos(theta) * p[0];
	temp[1] += cos(theta) * p[1];
	temp[2] += cos(theta) * p[2];

	p[0] = temp[0];
	p[1] = temp[1];
	p[2] = temp[2];
}

void crossProduct(double a[], double b[], double c[])
{
	c[0] = a[1] * b[2] - a[2] * b[1];
	c[1] = a[2] * b[0] - a[0] * b[2];
	c[2] = a[0] * b[1] - a[1] * b[0];
}

void normalize(double a[])
{
	double norm;
	norm = a[0] * a[0] + a[1] * a[1] + a[2] * a[2];
	norm = sqrt(norm);
	a[0] /= norm;
	a[1] /= norm;
	a[2] /= norm;
}

// Rotation about vertical direction
void lookRight()
{
	rotatePoint(up, PI / 8, eye);
}

void lookLeft()
{
	//Write your code here
}

// Rotation about horizontal direction

void lookUp()
{
	double horizontal[3];
	double look[] = { center[0] - eye[0], center[1] - eye[1], center[2] - eye[2] };
	crossProduct(up, look, horizontal);
	normalize(horizontal);
	rotatePoint(horizontal, PI / 8, eye);
	rotatePoint(horizontal, PI / 8, up);
}

void lookDown()
{
	//Write your code here
}

// Forward and Backward
void moveForward()
{
	double direction[3];
	direction[0] = center[0] - eye[0];
	direction[1] = center[1] - eye[1];
	direction[2] = center[2] - eye[2];
	float speed = 0.1;
	eye[0] += direction[0] * speed;
	eye[1] += direction[1] * speed;
	eye[2] += direction[2] * speed;

	center[0] += direction[0] * speed;
	center[1] += direction[1] * speed;
	center[2] += direction[2] * speed;
}

void moveBackword()
{
	//Write your code here
}


// mixed display
void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	gluLookAt(eye[0], eye[1], eye[2],
		center[0], center[1], center[2],
		up[0], up[1], up[2]);
	glColor3f(0.0, 1.0, 0.0);



	glPushMatrix();
	//--------------------------------
	glRotatef(angle2, 1.0, 0.0, 0.0);
	glRotatef(angle, 0.0, 1.0, 0.0);
	glTranslatef(-1.0, 0.0, 0.0);
	glRotatef((GLfloat)Body_Z, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)Body_Y, 0.0, 1.0, 0.0);
	glTranslatef(0.0, 0.0, 0.0);

	//----Body----
	glPushMatrix();
	glScalef(2.0, 4.0, 1.0);
	glutWireCube(1.0);
	glPopMatrix();


	glTranslatef(-1, 3.0, 0.0);
	glRotatef((GLfloat)Sphere, 0.0, 0.0, 1.0);
	glTranslatef(1.0, 0.0, 0.0);



	//----Head----

	glPushMatrix();
	glScalef(0.25, 0.5, 0.375);
	glutWireSphere(2.0, 30, 20); // double radius , slices , stacks
	glPopMatrix();



	//----Arm1----

	glPushMatrix();

	/*glTranslatef(1 , -1.4, 0.0);
	glRotatef((GLfloat)arm1, 0.0, 0.0, 1.0);
	glTranslatef(1.0, 0.0, 0.0);*/

	/*glPushMatrix();
	glScalef(2.0, 0.6, 1.0);
	glutWireCube(1.0);
	glPopMatrix();


	glTranslatef(1.0, 0.0, 0.0);
	glRotatef((GLfloat)elbow, 0.0, 0.0, 1.0);
	glTranslatef(1.0, 0.0, 0.0);

	glPushMatrix();
	glScalef(2.0, 0.6, 1.0);
	glutWireCube(1.0);
	glPopMatrix();*/


	glTranslatef(-2.6, -2.3, 0.0);
	glRotatef((GLfloat)arm1, 0.0, 0.0, 1.0);
	glTranslatef(1.0, 0.0, 0.0);


	glPushMatrix();
	glScalef(0.5, 1.5, 1.0);
	glutWireCube(1.0);
	glPopMatrix();

	glTranslatef(-1.0, -1.5, 0.0);
	glRotatef((GLfloat)elbow1, 0.0, 0.0, -1.0);
	glTranslatef(1.0, 0.0, 0.0);

	glPushMatrix();
	glScalef(0.5, 1.5, 1.0);
	glutWireCube(1.0);
	glPopMatrix();


	// 4 fingers
	for (int i = 0; i < 4; i++)
	{

		glPushMatrix();

		glTranslatef(-0.34, -0.9, 0.45 - 0.3 * i);
		glRotatef((GLfloat)fingerBase, 0.0, 0.0, 1.0);
		glTranslatef(0.15, 0.0, 0);

		glPushMatrix();
		glScalef(0.1, 0.3, 0.1);
		glutWireCube(1);
		glPopMatrix();


		glTranslatef(-0.15, -0.3, 0);
		glRotatef((GLfloat)fingerUp, 0.0, 0.0, 1.0);
		glTranslatef(0.15, 0.0, 0);

		glPushMatrix();
		glScalef(0.1, 0.3, 0.1);
		glutWireCube(1);
		glPopMatrix();

		glPopMatrix();

	}
	// Thumb
	glPushMatrix();

	glTranslatef(0.06, -0.9, 0.0);
	glRotatef((GLfloat)fingerBase, 0.0, 0.0, -1.0);
	glTranslatef(0.15, 0.0, 0);
	glPushMatrix();
	glScalef(0.1, 0.3, 0.1);
	glutWireCube(1);
	glPopMatrix();

	glTranslatef(-0.15, -0.3, 0);
	glRotatef((GLfloat)fingerUp, 0.0, 0.0, -1.0);
	glTranslatef(0.15, 0.0, 0);
	glPushMatrix();
	glScalef(0.1, 0.3, 0.1);
	glutWireCube(1);
	glPopMatrix();
	glPopMatrix();


	glPopMatrix();

	//----Arm2----

	glPushMatrix();

	/*glTranslatef(-3, -1.4, 0.0);
	glRotatef((GLfloat)arm2, 0.0, 0.0, 1.0);
	glTranslatef(1.0, 0.0, 0.0);

	glPushMatrix();
	glScalef(2.0, 0.6, 1.0);
	glutWireCube(1.0);
	glPopMatrix();


	glTranslatef(-3.0, 0.0, 0.0);
	glRotatef((GLfloat)elbow2, 0.0, 0.0, 1.0);
	glTranslatef(1.0, 0.0, 0.0);

	glPushMatrix();
	glScalef(2.0, 0.6, 1.0);
	glutWireCube(1.0);
	glPopMatrix();*/

	glTranslatef(0.6, -2.3, 0.0);
	glRotatef((GLfloat)arm2, 0.0, 0.0, 1.0);
	glTranslatef(1.0, 0.0, 0.0);


	glPushMatrix();
	glScalef(0.5, 1.5, 1.0);
	glutWireCube(1.0);
	glPopMatrix();

	glTranslatef(-1.0, -1.5, 0.0);
	glRotatef((GLfloat)elbow2, 0.0, 0.0, -1.0);
	glTranslatef(1.0, 0.0, 0.0);

	glPushMatrix();
	glScalef(0.5, 1.5, 1.0);
	glutWireCube(1.0);
	glPopMatrix();

	// 4 fingers
	for (int i = 0; i < 4; i++)
	{

		glPushMatrix();

		glTranslatef(0.06, -0.9, 0.45 - 0.3 * i);
		glRotatef((GLfloat)fingerBase, 0.0, 0.0, 1.0);
		glTranslatef(0.15, 0.0, 0);

		glPushMatrix();
		glScalef(0.1, 0.3, 0.1);
		glutWireCube(1);
		glPopMatrix();


		glTranslatef(-0.15, -0.3, 0);
		glRotatef((GLfloat)fingerUp, 0.0, 0.0, 1.0);
		glTranslatef(0.15, 0.0, 0);

		glPushMatrix();
		glScalef(0.1, 0.3, 0.1);
		glutWireCube(1);
		glPopMatrix();

		glPopMatrix();

	}
	// Thumb
	glPushMatrix();

	glTranslatef(-0.34, -0.9, 0.0);
	glRotatef((GLfloat)fingerBase, 0.0, 0.0, -1.0);
	glTranslatef(0.15, 0.0, 0);
	glPushMatrix();
	glScalef(0.1, 0.3, 0.1);
	glutWireCube(1);
	glPopMatrix();

	glTranslatef(-0.15, -0.3, 0);
	glRotatef((GLfloat)fingerUp, 0.0, 0.0, -1.0);
	glTranslatef(0.15, 0.0, 0);
	glPushMatrix();
	glScalef(0.1, 0.3, 0.1);
	glutWireCube(1);
	glPopMatrix();
	glPopMatrix();


	glPopMatrix();





	//----Leg1----


	glPushMatrix();

	glTranslatef(-1.72, -6.0, 0.0);
	glRotatef((GLfloat)leg1, 0.0, 0.0, 1.0);
	glTranslatef(1.0, 0.0, 0.0);


	glPushMatrix();
	glScalef(0.6, 2.0, 1.0);
	glutWireCube(1.0);
	glPopMatrix();

	glTranslatef(-1.0, -2.0, 0.0);
	glRotatef((GLfloat)Tibia, 0.0, 0.0, -1.0);
	glTranslatef(1.0, 0.0, 0.0);

	glPushMatrix();
	glScalef(0.6, 2.0, 1.0);
	glutWireCube(1.0);
	glPopMatrix();


	// Foot
	glPushMatrix();

	glTranslatef(-0.23, -1.6, 0.0);
	glRotatef((GLfloat)Foot, 0.0, 0.0, 1.0);
	glTranslatef(0.2, 0.3, 0);
	glPushMatrix();
	glScalef(0.6, 0.5, 2.0);
	glutSolidCube(1);
	glPopMatrix();

	glPopMatrix();

	glPopMatrix();

	//----Leg2----

	glPushMatrix();

	glTranslatef(-0.32, -6.0, 0.0);
	glRotatef((GLfloat)leg2, 0.0, 0.0, 1.0);
	glTranslatef(1.0, 0.0, 0.0);


	glPushMatrix();
	glScalef(0.6, 2.0, 1.0);
	glutWireCube(1.0);
	glPopMatrix();

	glTranslatef(-1.0, -2.0, 0.0);
	glRotatef((GLfloat)Tibia2, 0.0, 0.0, -1.0);
	glTranslatef(1.0, 0.0, 0.0);

	glPushMatrix();
	glScalef(0.6, 2.0, 1.0);
	glutWireCube(1.0);
	glPopMatrix();


	// Foot

	glPushMatrix();

	glTranslatef(-0.23, -1.6, 0.0);
	glRotatef((GLfloat)Foot2, 0.0, 0.0, 1.0);
	glTranslatef(0.2, 0.3, 0);
	glPushMatrix();
	glScalef(0.6, 0.5, 2.0);
	glutSolidCube(1);
	glPopMatrix();

	glPopMatrix();

	glPopMatrix();

	//---------------------------------
	glPopMatrix();

	glutSwapBuffers();
}

//void init(void)
//{
//	glMatrixMode(GL_PROJECTION);
//	gluPerspective(60.0,
//		1.0,
//		1.0, 20.0);
//	glMatrixMode(GL_MODELVIEW);
//}

void reset()
{
	double e[] = { 0.0, 0.0, 5.0 };
	double c[] = { 0.0, 0.0, 0.0 };
	double u[] = { 0.0, 1.0, 0.0 };
	for (int i = 0; i < 3; i++)
	{
		eye[i] = e[i];
		center[i] = c[i];
		up[i] = u[i];
	}
}
void specialKeys(int key, int x, int y)
{
	switch (key)
	{
	case GLUT_KEY_LEFT:
		lookLeft();
		break;
	case GLUT_KEY_RIGHT:
		lookRight();
		break;
	case GLUT_KEY_UP:
		lookUp();
		break;
	case GLUT_KEY_DOWN:
		lookDown();
		break;
	}
	glutPostRedisplay();
}

void keyBoard(unsigned char key, int x, int y)
{
	switch (key)
	{
	case 'f':
		moveForward();
		break;
	case 'b':
		moveBackword();
		break;
	case 'r':
		reset();
		break;
	}
	glutPostRedisplay();
}


int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	//	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);

	glutCreateWindow("Green 3D Teapot");
	glutKeyboardFunc(keyBoard);
	glutSpecialFunc(specialKeys);
	glutDisplayFunc(display);


	glutInitWindowSize(800, 600); // width ,height
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Sphere");
	init();
	glutMouseFunc(mouse);
	glutMotionFunc(motion);
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutKeyboardFunc(keyboard);
	glutMainLoop();

	//glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	/*glutCreateWindow("Green 3D Teapot");
	glutKeyboardFunc(keyBoard);
	glutSpecialFunc(specialKeys);
	glutDisplayFunc(display);*/
	/*init();
	glutMainLoop();*/


	return 0;
}
