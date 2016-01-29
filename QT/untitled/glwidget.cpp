#include "glwidget.h"

GLWidget::GLWidget(QWidget *parent) :
    QGLWidget(parent)
{
}
void GLWidget::initializeGL(){

}
void GLWidget::paintGL(){
    glClearColor(0,0,0,0);
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_TRIANGLES);
        glVertex3f(-0.5,-0.5,0);
        glVertex3f(0.5,-0.5,0);
        glVertex3f(0,0.5,0);
    glEnd();

}
void GLWidget::resize(int w, int h){

}
