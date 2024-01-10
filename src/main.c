#include <GLFW/glfw3.h>
#include <windows.h>
#include "func.h"


int main(void)
{
    GLFWwindow* window;

    /* Initialize the library */
    if (!glfwInit())
        return -1;

    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    glClearColor(0.0f, 0.12f, 0.9f, 1.0f);

    /* Loop until the user closes the window */
        // glColor3f(1.0f, 0.0f, 0.5f);
        // glBegin(GL_POLYGON);
        // glVertex3f(-0.2f, 0.8f, 0.0f);
        // glVertex3f(-0.2f, 0.2f, 0.0f);
        // glVertex3f(-0.8f, 0.2f, 0.0f);
        // glVertex3f(-0.8f, 0.8f, 0.0f);
    while (!glfwWindowShouldClose(window))
    {
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

        /* Swap front and back buffers */
        glfwSwapBuffers(window);
        
        // static char x = 0, y = 0, z = 0;
        // glClearColor(x, y, z, 1);

        glEnd();

        /* Poll for and process events */
        glfwPollEvents();

        // x++;
        // y+=2;
        // z+=3;
        // Sleep(20);
    }

    glfwTerminate();

    print();
    return 0;
}