#include <GL/glut.h>

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    // ----- CASCO DO BARCO (vermelho) -----
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(210, 150);  // canto inferior esquerdo
    glVertex2f(430, 150);  // canto inferior direito
    glVertex2f(490, 200);  // topo direito
    glVertex2f(150, 200);  // topo esquerdo
    glEnd();

    // ----- VELA (cinza) -----
    glColor3f(0.8, 0.8, 0.8);
    glBegin(GL_TRIANGLES);
    glVertex2f(320, 380);  // topo (preso no mastro)
    glVertex2f(250, 250);  // base esquerda
    glVertex2f(450, 250);  // base direita
    glEnd();

    // ----- MASTRO (marrom) -----
    glColor3f(0.5, 0.25, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(315, 200);  // base esquerda
    glVertex2f(325, 200);  // base direita
    glVertex2f(325, 380);  // topo direito
    glVertex2f(315, 380);  // topo esquerdo
    glEnd();



    // ----- BANDEIRA (azul) -----
    glColor3f(0.0, 0.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(310, 370);  // canto esquerdo inferior
    glVertex2f(350, 370);  // canto direito inferior
    glVertex2f(350, 390);  // canto direito superior
    glVertex2f(310, 390);  // canto esquerdo superior
    glEnd();

    glFlush();
    glutSwapBuffers();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowSize(640, 480);
    glutCreateWindow("Barco - OpenGL");

    // Coordenadas do sistema 2D
    gluOrtho2D(0, 640, 0, 480);

    // Cor de fundo (amarelado claro)
    glClearColor(1.0, 0.97, 0.86, 1.0);

    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
