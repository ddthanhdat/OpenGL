#include "glwidget.h"

GLWidget::GLWidget(QWidget *parent) :
    QGLWidget(parent)
{
}
void GLWidget::initializeGL(){
    glEnable(GL_COLOR_BUFFER_BIT);
    glClearColor(0,0,0,0);
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(4);
    glOrtho(-2.0, 5.0, -2.0, 5.0, -2.0, 5.0);

}

void GLWidget::paintGL(){
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1,0,0);

    glBegin(GL_TRIANGLES);
        glVertex3f(-0.5,-0.5,0);
        glColor3f(0,1,0);
        glVertex3f(2,-0.5,0);
        glColor3f(0,0,1);
        glVertex3f(0,1,0);


    glEnd();
    glColor3f(1,0,0);
    glBegin(GL_POINTS);
        for(int i=0;i<20;i++){
            glVertex3f(0,i/2.0,0);
            glVertex3f(i/2.0,0,0);
            glVertex3f(0,0,i/2.0);
        }
    glEnd();
}
void GLWidget::resize(int w, int h){
    glViewport(0,0,w,h);
}
