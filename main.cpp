#include<windows.h>
#include<GL/glut.h>
#define PI   3.141516
#include<math.h>
float aspect = 1920.0f / 1080.0f;

// Function for making circles - Nijhum
void circleFuncSun(float p1, float q1, float r1, int R1, int G1, int B1)
{
    GLfloat x = p1;
    GLfloat y = q1;
    GLfloat r = r1;

    int triangle = 100;
    float tp = 2 * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(R1, G1, B1);
    glVertex2f(x, y);

    for (int i = 0; i <= triangle; i++)
    {
        float angle = i * tp / triangle;
        glVertex2f(x + (r * cos(angle) / aspect), y + (r * sin(angle)));
    }

    glEnd();
}

// Function for making ovals - Rashed
void circleFunc(float p1, float q1, float r1, int R1, int G1, int B1)
{
    GLfloat x = p1;
    GLfloat y = q1;
    GLfloat r = r1;
    int R = R1;
    int G = G1;
    int B = B1;
    int triangle = 100;
    float tp = 2 * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(R, G, B);
    glVertex2f(x, y);
    for (int i = 0; i <= triangle; i++)
    {
        glVertex2f(x + (r * cos(i * tp / triangle)), y + (r * sin(i * tp / triangle)));
    }
    glEnd();
}

// Function for the objects made by Nijhum
void madeByNijhum() {
    // Tent -----------------------------------------

    // shade 4
    glColor3ub(119, 69, 19);
    glBegin(GL_POLYGON);
    glVertex2f(-0.72f, -0.45f);
    glVertex2f(-0.81f, -0.76f);
    glVertex2f(-0.78f, -0.75f);
    glEnd();

    // shade 1
    glColor3ub(139, 69, 19);
    glBegin(GL_POLYGON);
    glVertex2f(-0.72f, -0.45f);
    glVertex2f(-0.79f, -0.79f);
    glVertex2f(-0.58f, -0.8f);
    glVertex2f(-0.5f, -0.4f);
    glEnd();

    // shade 2
    glColor3ub(159, 69, 19);
    glBegin(GL_POLYGON);
    glVertex2f(-0.5f, -0.4f);
    glVertex2f(-0.58f, -0.79f);
    glVertex2f(-0.5f, -0.77f);
    glEnd();

    // shade 3
    glColor3ub(179, 69, 19);
    glBegin(GL_POLYGON);
    glVertex2f(-0.5f, -0.4f);
    glVertex2f(-0.5f, -0.76f);
    glVertex2f(-0.4f, -0.76f);
    glEnd();

    // pilers
    glLineWidth(2.0f);
    glColor4ub(1, 1, 1, 255);
    glBegin(GL_LINES);
    glVertex2f(-0.4f,   -0.76f); // Piler 1 Start
    glVertex2f(-0.4f,   -0.74f); // Piler 1 End
    glVertex2f(-0.582f, -0.8f);  // Piler 2 Start
    glVertex2f(-0.582f, -0.78f); // Piler 2 End
    glVertex2f(-0.79f, -0.79f);  // Piler 3 Start
    glVertex2f(-0.79f, -0.77f);  // Piler 3 End
    glVertex2f(-0.81f, -0.76f);  // Piler 4 Start
    glVertex2f(-0.81f, -0.74f);  // Piler 4 End
    glEnd();

    // Wood -----------------------------------------
    glEnable(GL_LINE_SMOOTH);
    glHint(GL_LINE_SMOOTH_HINT, GL_NICEST);
    glLineWidth(10.0f);
    glColor4ub(139, 69, 19, 255);
    glBegin(GL_LINES);
    glVertex2f(-0.2f, -0.85f); // Line 1 Start
    glVertex2f(-0.1f, -0.75f); // Line 1 End
    glVertex2f(-0.2f, -0.75f); // Line 2 Start
    glVertex2f(-0.1f, -0.85f); // Line 2 End
    glEnd();

    // log ---------------------------------
    glBegin(GL_POLYGON);
    glColor3ub(101, 67, 33);
    glVertex2f(-0.4f, -0.60f);
    glVertex2f(-0.395f, -0.68f);
    glVertex2f(-0.22f, -0.65f);
    glVertex2f(-0.225f, -0.57f);
    glEnd();

    // log shade 1 ---------------------------
    glBegin(GL_POLYGON);
    glColor3ub(150, 75, 0);
    glVertex2f(-0.4f, -0.60f);
    glVertex2f(-0.395f, -0.68f);
    glVertex2f(-0.394f, -0.65f);
    glVertex2f(-0.397f, -0.68f);
    glVertex2f(-0.397f, -0.60f);
    glEnd();

    // log shade 2 ---------------------------
    glBegin(GL_POLYGON);
    glColor3ub(150, 75, 0);
    glVertex2f(-0.225f, -0.60f);
    glVertex2f(-0.221f, -0.65f);
    glVertex2f(-0.224f,  -0.64f);
    glVertex2f(-0.223f, -0.65f);
    glVertex2f(-0.222f, -0.57f);
    glEnd();

    glLineWidth(8.0f);
    glColor4ub(101, 67, 33, 255);
    glBegin(GL_LINES);
    glVertex2f(-0.35f, -0.60f); // Start
    glVertex2f(-0.33f, -0.57f); // End
    glEnd();

}

// Function for Watch Tower - Wakil
void drawWatchTower() {
    glBegin(GL_QUADS);
        glColor3f(0.45f, 0.28f, 0.14f);
        glVertex2f(0.73f, -0.1f);  glVertex2f(0.75f, -0.1f);
        glVertex2f(0.75f, 0.15f);  glVertex2f(0.73f, 0.15f);

        glColor3f(0.35f, 0.20f, 0.10f);
        glVertex2f(0.85f, -0.1f);  glVertex2f(0.87f, -0.1f);
        glVertex2f(0.87f, 0.15f);  glVertex2f(0.85f, 0.15f);
    glEnd();

    glColor3f(0.40f, 0.25f, 0.12f);
    glBegin(GL_QUADS);
        glVertex2f(0.72f, -0.05f); glVertex2f(0.88f, -0.05f);
        glVertex2f(0.88f, -0.03f); glVertex2f(0.72f, -0.03f);

        glVertex2f(0.72f, 0.05f);  glVertex2f(0.88f, 0.05f);
        glVertex2f(0.88f, 0.07f);  glVertex2f(0.72f, 0.07f);
    glEnd();

    glLineWidth(3.0f);
    glColor3f(0.25f, 0.15f, 0.08f);
    glBegin(GL_LINES);
        glVertex2f(0.75f, -0.03f); glVertex2f(0.85f, 0.05f);
        glVertex2f(0.75f, 0.05f);  glVertex2f(0.85f, -0.03f);
        glVertex2f(0.75f, 0.07f);  glVertex2f(0.85f, 0.14f);
        glVertex2f(0.75f, 0.14f);  glVertex2f(0.85f, 0.07f);
    glEnd();

    glColor3f(0.30f, 0.18f, 0.08f);
    glBegin(GL_QUADS);
        glVertex2f(0.70f, 0.13f); glVertex2f(0.90f, 0.13f);
        glVertex2f(0.90f, 0.15f); glVertex2f(0.70f, 0.15f);
    glEnd();

    glColor3f(0.55f, 0.38f, 0.22f);
    glBegin(GL_QUADS);
        glVertex2f(0.70f, 0.15f); glVertex2f(0.90f, 0.15f);
        glVertex2f(0.90f, 0.17f); glVertex2f(0.70f, 0.17f);
    glEnd();

    glColor3f(0.40f, 0.25f, 0.12f);
    glLineWidth(1.5f);
    glBegin(GL_LINES);
        for(float x = 0.71f; x <= 0.89f; x += 0.025f) {
            glVertex2f(x, 0.17f); glVertex2f(x, 0.22f);
        }
        glVertex2f(0.70f, 0.22f); glVertex2f(0.90f, 0.22f);
    glEnd();

    glBegin(GL_QUADS);
        glColor3f(0.45f, 0.28f, 0.14f);
        glVertex2f(0.72f, 0.22f); glVertex2f(0.74f, 0.22f);
        glVertex2f(0.74f, 0.25f); glVertex2f(0.72f, 0.25f);

        glColor3f(0.35f, 0.20f, 0.10f);
        glVertex2f(0.86f, 0.22f); glVertex2f(0.88f, 0.22f);
        glVertex2f(0.88f, 0.25f); glVertex2f(0.86f, 0.25f);
    glEnd();

    glBegin(GL_TRIANGLES);
        glColor3f(0.45f, 0.22f, 0.12f);
        glVertex2f(0.68f, 0.25f);
        glVertex2f(0.80f, 0.25f);
        glVertex2f(0.80f, 0.30f);

        glColor3f(0.30f, 0.12f, 0.05f);
        glVertex2f(0.80f, 0.25f);
        glVertex2f(0.92f, 0.25f);
        glVertex2f(0.80f, 0.30f);
    glEnd();

    glColor3f(0.20f, 0.12f, 0.05f);
    glLineWidth(2.0f);
    glBegin(GL_LINES);
        glVertex2f(0.76f, -0.1f); glVertex2f(0.76f, 0.15f);
        glVertex2f(0.79f, -0.1f); glVertex2f(0.79f, 0.15f);

        for(float y = -0.08f; y < 0.15f; y += 0.025f) {
            glVertex2f(0.76f, y); glVertex2f(0.79f, y);
        }
    glEnd();
}

// Rittik -----------------------------------------------------

int mode = 0; // 0 = Day, 1 = Monsoon
float rainY[200];
void keyboard(unsigned char key, int x, int y) {

    switch(key) {
        case '1':
            mode = 0; // Day
            break;

        case '2':
            mode = 1; // Monsoon
            break;
    }

    glutPostRedisplay();
}

void drawCircle(float p1, float q1, float r1) {
    int i;
    int n = 40;
    float tp = 2 * PI;

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(p1, q1);

    for(i=0;i<=n;i++) {
        glVertex2f(p1 + r1*cos(i*tp/n), q1 + r1*sin(i*tp/n));
    }

    glEnd();
}
void drawTriangle(float x1,float y1,float x2,float y2,float x3,float y3){
    glBegin(GL_TRIANGLES);
    glVertex2f(x1,y1);
    glVertex2f(x2,y2);
    glVertex2f(x3,y3);
    glEnd();
}
void drawTree(float x, float y, float s) {

//left branch end
glColor3ub(110, 130, 40);//left shadow
drawCircle(x - 0.10*s, y + 0.35*s, 0.13*s);
  // leaves
glColor3ub(130, 150, 40);

// main trunk
drawCircle(x - 0.01*s, y + 0.56*s, 0.13*s);

drawCircle(x + 0.10*s, y + 0.49*s, 0.10*s);

drawCircle(x - 0.08*s, y + 0.38*s, 0.13*s);

// right branch
drawCircle(x + 0.08*s + 0.02*s, y + 0.35*s, 0.13*s);

// main trunk
    glColor3ub(139,69,19);
    drawTriangle(
        x, y + 0.5*s,
        x - 0.02*s, y,
        x + 0.02*s, y
    );

    float midY = y + 0.2*s;
// right branch
    drawTriangle(
    x, midY + 0.03*s,
    x, midY - 0.03*s,
    x + 0.08*s, y + 0.35*s
);

// left branch
    drawTriangle(
    x, midY + 0.03*s,
    x, midY - 0.03*s,
    x - 0.08*s, y + 0.33*s
);

}

void drawScene() {

    // curved road
    glColor3ub( 	214, 138, 89);
    glBegin(GL_POLYGON);

    glVertex2f(0.30, -1.0);
    glVertex2f(0.10, -1.0);
    glVertex2f(0.7, -0.1);
    glVertex2f(0.9, -0.1);
   /*
    glVertex2f(0.33, -0.9);
    glVertex2f(0.36, -0.8);
    glVertex2f(0.40, -0.7);
    glVertex2f(0.44, -0.6);
    glVertex2f(0.48, -0.5);
    glVertex2f(0.52, -0.4);
    glVertex2f(0.56, -0.3);
    glVertex2f(0.58, -0.25);
    glVertex2f(0.60, -0.2);

    glVertex2f(0.70, -0.2);
    glVertex2f(0.66, -0.25);
    glVertex2f(0.62, -0.4);
    glVertex2f(0.60, -0.5);
    glVertex2f(0.57, -0.6);
    glVertex2f(0.53, -0.7);
    glVertex2f(0.48, -0.8);
    glVertex2f(0.43, -0.9);
    glVertex2f(0.38, -1.0);
*/
    glEnd();

    // trees
    drawTree(0.11,-0.5,0.75);
    drawTree(0.45,-0.2,0.5);
    drawTree(0.95,-0.9,0.9);
    drawTree(-0.97,-0.75,1.25);
    drawTree(-0.5,-0.35,0.45);
    drawTree(-0.5,0.19,0.15);
    drawTree(-0.4,0.14,0.15);
    drawTree(-0.15,0.19,0.11);
    drawTree(0.1,0.12,0.15);
    drawTree(0.4,0.4,0.11);
}

void init() {
    glClearColor(0.0, 0.0, 0.0, 1.0); // background color (black)

    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(-1, 1, -1, 1); // coordinate system
    for(int i=0;i<200;i++){
    rainY[i] = (rand()%200)/100.0 - 1; // -1 to 1
}
}


void update(int value) {

    for(int i=0;i<200;i++){
        rainY[i] -= 0.02;

        if(rainY[i] < -1)
            rainY[i] = 1;
    }

    glutPostRedisplay();
    glutTimerFunc(16, update, 0);
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);


    /* Sun - Rashed */
    circleFuncSun(0.88f, 0.88f, 0.1f, 255, 255, 0);


    /* Clouds - Rashed */

    // Cloud 1 - Rashed

    /*
    circleFuncSun(-0.58f, 0.88f, 0.08f, 255, 255, 255);
    circleFuncSun(-0.53f, 0.82f, 0.06f, 255, 255, 255);
    circleFuncSun(-0.49f, 0.77f, 0.045f, 255, 255, 255);
    circleFuncSun(-0.525f, 0.76f, 0.049f, 255, 255, 255);
    circleFuncSun(-0.565f, 0.742f, 0.058f, 255, 255, 255);
    circleFuncSun(-0.61f, 0.748f, 0.075f, 255, 255, 255);
    circleFuncSun(-0.66f, 0.742f, 0.058f, 255, 255, 255);
    circleFuncSun(-0.69f, 0.72f, 0.025f, 255, 255, 255);
    circleFuncSun(-0.71f, 0.745f, 0.045f, 255, 255, 255);
    circleFuncSun(-0.695f, 0.79f, 0.025f, 255, 255, 255);
    circleFuncSun(-0.67f, 0.81f, 0.045f, 255, 255, 255);
    circleFuncSun(-0.63f, 0.83f, 0.06f, 255, 255, 255);
    circleFuncSun(-0.58f, 0.78f, 0.06f, 255, 255, 255);
    */

    // Cloud 2 - Rashed
    circleFunc(0.03f, 0.75f, 0.04f, 255, 255, 255); //left up
    circleFunc(0.115f, 0.79f, 0.07f, 102, 178, 255); // top big copy
    circleFunc(0.10f, 0.79f, 0.07f, 255, 255, 255); // top big
    circleFunc(0.19f, 0.80f, 0.03f, 102, 178, 255); // top small copy
    circleFunc(0.18f, 0.80f, 0.03f, 255, 255, 255); // top small
    circleFunc(0.21f, 0.75f, 0.05f, 102, 178, 255); // right copy
    circleFunc(0.20f, 0.75f, 0.05f, 255, 255, 255); // right
    circleFunc(0.12f, 0.73f, 0.06f, 255, 255, 255); // 2nd top
    circleFunc(0.06f, 0.71f, 0.03f, 255, 255, 255); // left bottom

    // Cloud 3 - Rashed
    circleFunc(0.66f, 0.80f, 0.03f, 255, 255, 255);
    circleFunc(0.73f, 0.81f, 0.06f, 102, 178, 255); //top copy
    circleFunc(0.72f, 0.81f, 0.06f, 255, 255, 255); //top
    circleFunc(0.79f, 0.79f, 0.04f, 102, 178, 255); // right copy
    circleFunc(0.78f, 0.79f, 0.04f, 255, 255, 255); // right
    circleFunc(0.72f, 0.78f, 0.05f, 255, 255, 255);
    circleFunc(0.678f, 0.77f, 0.02f, 255, 255, 255);

    // Cloud 4 - Rashed
    circleFunc(-0.14f, 0.82f, 0.03f, 255, 255, 255);
    circleFunc(-0.07f, 0.84f, 0.06f, 102, 178, 255); // top copy
    circleFunc(-0.08f, 0.84f, 0.06f, 255, 255, 255); // top
    circleFunc(-0.01f, 0.81f, 0.04f, 102, 178, 255); //right copy
    circleFunc(-0.02f, 0.81f, 0.04f, 255, 255, 255); //right
    circleFunc(-0.08f, 0.80f, 0.05f, 255, 255, 255);
    circleFunc(-0.122f, 0.79f, 0.02f, 255, 255, 255);

    // Cloud 5 - Rashed
    circleFunc(-0.57f, 0.88f, 0.08f, 102, 178, 255); //top copy
    circleFunc(-0.58f, 0.88f, 0.08f, 255, 255, 255); //top
    circleFunc(-0.51f, 0.82f, 0.06f, 102, 178, 255); //right 1 copy
    circleFunc(-0.52f, 0.82f, 0.06f, 255, 255, 255); //right 1
    circleFunc(-0.45f, 0.77f, 0.045f, 102, 178, 255); //right 2 copy
    circleFunc(-0.46f, 0.77f, 0.045f, 255, 255, 255); //right 2
    circleFunc(-0.515f, 0.76f, 0.049f, 102, 178, 255); // bottom 1 copy
    circleFunc(-0.525f, 0.76f, 0.049f, 255, 255, 255); // bottom 1
    circleFunc(-0.58f, 0.742f, 0.058f, 255, 255, 255);
    circleFunc(-0.67f, 0.742f, 0.058f, 255, 255, 255);
    circleFunc(-0.71f, 0.745f, 0.045f, 255, 255, 255);
    circleFunc(-0.695f, 0.79f, 0.025f, 255, 255, 255);
    circleFunc(-0.66f, 0.82f, 0.05f, 255, 255, 255);
    circleFunc(-0.58f, 0.78f, 0.06f, 255, 255, 255);


    /* Mountains - Nahin */

    //BACK MOUNTAIN
      glColor3ub(120,200,120);
      glBegin(GL_POLYGON);
      glVertex2f(-0.3f, 0.0f);
      glVertex2f(-0.1f, 0.25f);
      glVertex2f(0.1f, 0.45f);
      glVertex2f(0.3f, 0.6f);
      glVertex2f(0.5f, 0.45f);
      glVertex2f(0.7f, 0.25f);
      glVertex2f(0.9f, 0.0f);
      glEnd();

      //MIDDLE MOUNTAIN
      glColor3ub(110,190,110);
      glBegin(GL_POLYGON);
      glVertex2f(-0.6f, 0.0f);
      glVertex2f(-0.45f, 0.2f);
      glVertex2f(-0.3f, 0.35f);
      glVertex2f(-0.15f, 0.2f);
      glVertex2f(0.0f, 0.0f);
      glEnd();


      //LEFT MOUNTAIN
      glColor3ub(100,180,100);
      glBegin(GL_POLYGON);
      glVertex2f(-1.0f, 0.0f);
      glVertex2f(-0.85f, 0.25f);
      glVertex2f(-0.7f, 0.45f);
      glVertex2f(-0.55f, 0.3f);
      glVertex2f(-0.4f, 0.0f);
      glEnd();


       //RIGHT MOUNTAIN (SMOOTH)
       glColor3ub(90,170,90);
       glBegin(GL_POLYGON);
       glVertex2f(0.2f, 0.0f);
       glVertex2f(0.4f, 0.3f);
       glVertex2f(0.6f, 0.5f);
       glVertex2f(0.8f, 0.3f);
       glVertex2f(1.0f, 0.0f);
       glEnd();

    // GROUND
    glColor3ub(19,109,21); // green ground
    glBegin(GL_QUADS);
    glVertex2f(-1.0f, 0.0f);   // top left
    glVertex2f( 1.0f, 0.0f);   // top right
    glVertex2f( 1.0f,-1.0f);   // bottom right
    glVertex2f(-1.0f,-1.0f);   // bottom left
    glEnd();

    drawWatchTower();

    madeByNijhum();

    switch(mode) {

        case 0: // Day
            glClearColor(0.6, 0.9, 1.0, 1.0);

            glColor3f(0.6, 0.9, 0.6); // bright grass
            drawScene();
            break;

        case 1: // Monsoon
            glClearColor(0.4, 0.5, 0.6, 1.0);

            glColor3ub(80,120,40); // dark grass
            drawScene();

            // rain
            glColor3ub(180,180,255);
            glBegin(GL_LINES);
            for(int i=0;i<200;i++){
                float x = -1 + (i * 0.01);
                glVertex2f(x, rainY[i]);
                glVertex2f(x+0.02, rainY[i]-0.1);
            }
            glEnd();

            break;
    }

    glFlush();
}


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1920, 1080);
    glutCreateWindow("Dynamic Camping Scenario");
    glClearColor(0.0, 0.0, 1.0, 1.0); // blue background

    init(); // call init

    glutDisplayFunc(display);

    glutKeyboardFunc(keyboard);
    glutTimerFunc(0, update, 0);

    glutMainLoop();
    return 0;
}
