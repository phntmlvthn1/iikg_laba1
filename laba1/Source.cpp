#include <GL/freeglut.h>

static void RenderSceneCB()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glutSwapBuffers();
}

static void InitializeGlutCallbacks()
{
    glutDisplayFunc(RenderSceneCB);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);                    // инициализация GLUT
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA); // настройка опций GLUT, включение двойной буферизации, буфера цвета
    // задаем параметры окна и создаем его, даем заголовок
    glutInitWindowSize(1024, 768);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Tutorial 01");

    // используем функцию обратного вызова, который отрисовывает 1 кадр
    glutDisplayFunc(RenderSceneCB); 
    InitializeGlutCallbacks();

    glClearColor(0.0f, 0.0f, 0.0f, 0.0f); // устанавливаем цвет, который будет использован во время очистки буфера кадра

    glutMainLoop(); // цикл, в котором GLUT ожидает событий от оконной системы и передает их через функции обратного вызова

  
    glClear(GL_COLOR_BUFFER_BIT);   // очистка буфера кадра
    glutSwapBuffers(); // меняем фоновый буфер и буфер кадра местами 

    return 0;
}