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
    glutInit(&argc, argv);                    // ������������� GLUT
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA); // ��������� ����� GLUT, ��������� ������� �����������, ������ �����
    // ������ ��������� ���� � ������� ���, ���� ���������
    glutInitWindowSize(1024, 768);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Tutorial 01");

    // ���������� ������� ��������� ������, ������� ������������ 1 ����
    glutDisplayFunc(RenderSceneCB); 
    InitializeGlutCallbacks();

    glClearColor(0.0f, 0.0f, 0.0f, 0.0f); // ������������� ����, ������� ����� ����������� �� ����� ������� ������ �����

    glutMainLoop(); // ����, � ������� GLUT ������� ������� �� ������� ������� � �������� �� ����� ������� ��������� ������

  
    glClear(GL_COLOR_BUFFER_BIT);   // ������� ������ �����
    glutSwapBuffers(); // ������ ������� ����� � ����� ����� ������� 

    return 0;
}