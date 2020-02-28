
#include <windows.h>
#include <GL/glut.h>
#include<math.h>>
# define PI           3.14159265358979323846

void display()
 {

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_QUADS);//FIEld
    glColor3ub(0, 153, 0);
    glVertex2f(-.6,1);
    glVertex2f(-.6,-1);
    glVertex2f(.6,-1);
    glVertex2f(.6,1);
    glEnd();
	glFlush();

	    glBegin(GL_QUADS);//FIEld
    glColor3ub(153, 77, 0);
    glVertex2f(-1,-.42);
    glVertex2f(1,-.42);
    glVertex2f(1,-1);
    glVertex2f(-1,-1);
    glEnd();
	glFlush();

    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-1,-.42);
    glVertex2f(1,-.42);
    glEnd();
	glFlush();


	    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
        glVertex2f(0,-0.42);
    glVertex2f(0.01,-0.42);
    glVertex2f(0.01,-1);
        glVertex2f(0,-1);
    glEnd();
	glFlush();

    glBegin(GL_QUADS);//pitch
    glColor3ub(153, 92, 0);
    glVertex2f(-.04,.5);
    glVertex2f(.03,.5);
    glVertex2f(.03,0);
    glVertex2f(-.04,0);
    glEnd();
	glFlush();


    glBegin(GL_LINES);//pitch
    glColor3ub(255,255,255);
    glVertex2f(-.048,.07);
    glVertex2f(.038,.07);
    glEnd();
	glFlush();

    glBegin(GL_LINES);//pitch
    glColor3ub(255,255,255);
    glVertex2f(-.032,.07);
    glVertex2f(-.032,0);
    glEnd();
	glFlush();

    glBegin(GL_LINES);//pitch
    glColor3ub(255,255,255);
    glVertex2f(0.023,.07);
    glVertex2f(0.023,0);
    glEnd();
	glFlush();

	    glBegin(GL_LINES);//pitch
    glColor3ub(255,255,255);
    glVertex2f(-.048,.44);
    glVertex2f(.038,.44);
    glEnd();
	glFlush();

    glBegin(GL_LINES);//pitch
    glColor3ub(255,255,255);
    glVertex2f(-.032,.44);
    glVertex2f(-.032,0.5);
    glEnd();
	glFlush();

    glBegin(GL_LINES);//pitch
    glColor3ub(255,255,255);
    glVertex2f(0.023,.44);
    glVertex2f(0.023,0.5);
    glEnd();
	glFlush();

    glBegin(GL_LINES);//Goal Post
    glColor3ub(255,255,255);
    glVertex2f(-.08,-.42);
    glVertex2f(-.08,-.26);
    glEnd();
	glFlush();

    glBegin(GL_LINES);//Goal Post
    glColor3ub(255,255,255);
    glVertex2f(-.08,-.26);
    glVertex2f(.08,-.26);
    glEnd();
	glFlush();

    glBegin(GL_LINES);//Goal Post
    glColor3ub(255,255,255);
    glVertex2f(.08,-.42);
    glVertex2f(.08,-.26);
    glEnd();
	glFlush();

	    glBegin(GL_LINES);//Goal Post
    glColor3ub(255,255,255);
    glVertex2f(-.04,-.42);
    glVertex2f(-.04,-.35);
    glEnd();
	glFlush();

    glBegin(GL_LINES);//Goal Post
    glColor3ub(255,255,255);
    glVertex2f(-.04,-.35);
    glVertex2f(.04,-.35);
    glEnd();
	glFlush();

    glBegin(GL_LINES);//Goal Post
    glColor3ub(255,255,255);
    glVertex2f(.04,-.35);
    glVertex2f(.04,-.42);
    glEnd();
	glFlush();

    glBegin(GL_LINES);//Goal Post round
    glColor3ub(255,255,255);
    glVertex2f(-.045,-.26);
    glVertex2f(-.019,-.22);
    glEnd();
	glFlush();

    glBegin(GL_LINES);//Goal Post round
    glColor3ub(255,255,255);
    glVertex2f(0.029,-.22);
    glVertex2f(-.019,-.22);
    glEnd();
	glFlush();

    glBegin(GL_LINES);//Goal Post round
    glColor3ub(255,255,255);
    glVertex2f(0.029,-.22);
    glVertex2f(0.05,-.26);
    glEnd();
	glFlush();


		GLfloat x=-.2f; GLfloat y=-.2f; GLfloat radius =.006f;
	int i;
	int lineAmount = 100;
	GLfloat twicePi = 2.0f * PI;
	int triangleAmount = 20;
    x=0.0f,y=-.3f;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
                glColor3ub(255,255,255);
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glFlush();





	 glBegin(GL_LINES);//2nd Goal Post
    glColor3ub(255,255,255);
    glVertex2f(-.08,1);
    glVertex2f(-.08,.84);
    glEnd();
	glFlush();

    glBegin(GL_LINES);//2nd goal Post
    glColor3ub(255,255,255);
    glVertex2f(-.08,.84);
    glVertex2f(.08,.84);
    glEnd();
	glFlush();


    glBegin(GL_LINES);//2nd Goal Post
    glColor3ub(255,255,255);
    glVertex2f(.08,1);
    glVertex2f(.08,.84);
    glEnd();
	glFlush();


	    glBegin(GL_LINES);//2nd Goal Post
    glColor3ub(255,255,255);
    glVertex2f(-.04,1);
    glVertex2f(-.04,.93);
    glEnd();
	glFlush();


    glBegin(GL_LINES);//2nd Goal Post
    glColor3ub(255,255,255);
    glVertex2f(-.04,.93);
    glVertex2f(.04,.93);
    glEnd();
	glFlush();


    glBegin(GL_LINES);//2nd Goal Post
    glColor3ub(255,255,255);
    glVertex2f(.04,.93);
    glVertex2f(.04,1);
    glEnd();
	glFlush();


    glBegin(GL_LINES);//2nd Goal Post round
    glColor3ub(255,255,255);
    glVertex2f(-.045,.84);
    glVertex2f(-.019,.8);
    glEnd();
	glFlush();


    glBegin(GL_LINES);//2nd Goal Post round
    glColor3ub(255,255,255);
    glVertex2f(0.029,.8);
    glVertex2f(-.019,.8);
    glEnd();
	glFlush();


    glBegin(GL_LINES);//2nd Goal Post round
    glColor3ub(255,255,255);
    glVertex2f(0.029,.8);
    glVertex2f(0.05,.84);
    glEnd();
	glFlush();



    x=-.2f;  y=-.2f;  radius =.006f;
	 i;
	 lineAmount = 100;
    twicePi = 2.0f * PI;
	 triangleAmount = 20;
    x=0.0f,y=.89f;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
                glColor3ub(255,255,255);
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glFlush();


    glBegin(GL_LINES);//tennis
    glColor3ub(255,255,255);
    glVertex2f(0.06,-.46);
    glVertex2f(0.95,-.46);
    glEnd();
	glFlush();

	   glBegin(GL_LINES);//tennis
    glColor3ub(255,255,255);
    glVertex2f(0.06,-.46);
    glVertex2f(0.06,-.97);
    glEnd();
	glFlush();

	   glBegin(GL_LINES);//tennis
    glColor3ub(255,255,255);
    glVertex2f(0.95,-.97);
    glVertex2f(0.95,-.46);
    glEnd();
	glFlush();

	   glBegin(GL_LINES);//tennis
    glColor3ub(255,255,255);
    glVertex2f(0.06,-.97);
    glVertex2f(0.95,-.97);
    glEnd();
	glFlush();

	    glBegin(GL_LINES);//tennis
    glColor3ub(255,255,255);
    glVertex2f(0.06,-.48);
    glVertex2f(0.95,-.48);
    glEnd();
	glFlush();

		   glBegin(GL_LINES);//tennis
    glColor3ub(255,255,255);
    glVertex2f(0.06,-.95);
    glVertex2f(0.95,-.95);
    glEnd();
	glFlush();

	  glBegin(GL_LINES);//tennis
    glColor3ub(255,255,255);
    glVertex2f(0.95,-.71);
    glVertex2f(0.93,-.71);
    glEnd();
	glFlush();

    glBegin(GL_LINES);//tennis
    glColor3ub(255,255,255);
    glVertex2f(0.06,-.71);
    glVertex2f(0.08,-.71);
    glEnd();
	glFlush();


	  glBegin(GL_LINES);//tennis
    glColor3ub(255,255,255);
    glVertex2f(0.8,-.95);
    glVertex2f(0.8,-.48);
    glEnd();
	glFlush();

    glBegin(GL_LINES);//tennis
    glColor3ub(255,255,255);
    glVertex2f(0.21,-.95);
    glVertex2f(0.21,-.48);
    glEnd();
	glFlush();


	 glBegin(GL_LINES);//tennis
    glColor3ub(255,255,255);
    glVertex2f(0.21,-.715);
    glVertex2f(0.8,-.715);
    glEnd();
	glFlush();

    glBegin(GL_QUADS);//tennis
    glColor3ub(255,255,255);
    glVertex2f(0.5,-.43);
    glVertex2f(0.495,-.43);
     glVertex2f(0.495,-.995);
    glVertex2f(0.5,-.995);
    glEnd();
	glFlush();

    glBegin(GL_TRIANGLES);//tennis
    glColor3ub(0,0,0);
    glVertex2f(0.519,-.98);
    glVertex2f(0.52,-.991);
    glVertex2f(0.493,-.995);
    glEnd();
	glFlush();

    glBegin(GL_TRIANGLES);//tennis
    glColor3ub(0,0,0);
    glVertex2f(0.493,-.43);
    glVertex2f(0.52,-.435);
    glVertex2f(0.52,-.45);
    glEnd();
	glFlush();

	 glBegin(GL_LINES);//tennis
    glColor3ub(0,0,0);
    glVertex2f(0.504,-.43);
    glVertex2f(0.504,-.995);
    glEnd();
	glFlush();



			 glBegin(GL_LINES);//tennis
    glColor3ub(0,0,0);
    glVertex2f(0.509,-.436);
    glVertex2f(0.509,-.995);
    glEnd();
	glFlush();

			 glBegin(GL_LINES);//tennis
    glColor3ub(0,0,0);
    glVertex2f(0.513,-.438);
    glVertex2f(0.513,-.995);
    glEnd();
	glFlush();

			 glBegin(GL_LINES);//tennis
    glColor3ub(0,0,0);
    glVertex2f(0.517,-.44);
    glVertex2f(0.517,-.995);
    glEnd();
	glFlush();

        glBegin(GL_LINES);//tennis
    glColor3ub(0,0,0);
    glVertex2f(0.5,-.45);
    glVertex2f(0.52,-.46);
    glEnd();
	glFlush();

    glBegin(GL_LINES);//tennis
    glColor3ub(0,0,0);
    glVertex2f(0.5,-.48);
    glVertex2f(0.52,-.49);
    glEnd();
	glFlush();

    glBegin(GL_LINES);//tennis
    glColor3ub(0,0,0);
    glVertex2f(0.5,-.51);
    glVertex2f(0.52,-.52);
    glEnd();
	glFlush();


    glBegin(GL_LINES);//tennis
    glColor3ub(0,0,0);
    glVertex2f(0.5,-.54);
    glVertex2f(0.52,-.55);
    glEnd();
	glFlush();

    glBegin(GL_LINES);//tennis
    glColor3ub(0,0,0);
    glVertex2f(0.5,-.57);
    glVertex2f(0.52,-.58);
    glEnd();
	glFlush();

    glBegin(GL_LINES);//tennis
    glColor3ub(0,0,0);
    glVertex2f(0.5,-.60);
    glVertex2f(0.52,-.61);
    glEnd();
	glFlush();

    glBegin(GL_LINES);//tennis
    glColor3ub(0,0,0);
    glVertex2f(0.5,-.64);
    glVertex2f(0.52,-.65);
    glEnd();
	glFlush();

    glBegin(GL_LINES);//tennis
    glColor3ub(0,0,0);
    glVertex2f(0.5,-.68);
    glVertex2f(0.52,-.69);
    glEnd();
	glFlush();

    glBegin(GL_LINES);//tennis
    glColor3ub(0,0,0);
    glVertex2f(0.5,-.72);
    glVertex2f(0.52,-.73);
    glEnd();
	glFlush();

    glBegin(GL_LINES);//tennis
    glColor3ub(0,0,0);
    glVertex2f(0.5,-.77);
    glVertex2f(0.52,-.78);
    glEnd();
	glFlush();

    glBegin(GL_LINES);//tennis
    glColor3ub(0,0,0);
    glVertex2f(0.5,-.83);
    glVertex2f(0.52,-.84);
    glEnd();
	glFlush();

    glBegin(GL_LINES);//tennis
    glColor3ub(0,0,0);
    glVertex2f(0.5,-.88);
    glVertex2f(0.52,-.89);
    glEnd();
	glFlush();

    glBegin(GL_LINES);//tennis
    glColor3ub(0,0,0);
    glVertex2f(0.5,-.93);
    glVertex2f(0.52,-.94);
    glEnd();
	glFlush();

    glBegin(GL_LINES);//tennis
    glColor3ub(0,0,0);
    glVertex2f(0.5,-.97);
    glVertex2f(0.52,-.96);
    glEnd();
	glFlush();


	 glBegin(GL_LINES);//Basket ball
    glColor3ub(255,255,255);
    glVertex2f(-.97,-.44);
    glVertex2f(-0.04,-.44);
    glEnd();
	glFlush();

		 glBegin(GL_LINES);//Basket ball
    glColor3ub(255,255,255);
    glVertex2f(-.97,-.44);
    glVertex2f(-0.97,-.976);
    glEnd();
	glFlush();
		 glBegin(GL_LINES);//Basket ball
    glColor3ub(255,255,255);
    glVertex2f(-.04,-.976);
    glVertex2f(-0.04,-.44);
    glEnd();
	glFlush();

			 glBegin(GL_LINES);//Basket ball
    glColor3ub(255,255,255);
    glVertex2f(-.04,-.976);
    glVertex2f(-0.97,-.976);
    glEnd();
	glFlush();

				 glBegin(GL_LINES);//Basket ball
    glColor3ub(255,255,255);
    glVertex2f(-.505,-.44);
    glVertex2f(-0.505,-.976);
    glEnd();
	glFlush();



	 x=-.505f;  y=-.708f;  radius =.07f;
     i;
    lineAmount = 100;
		 twicePi = 2.0f * PI;

	glBegin(GL_LINE_LOOP);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	glFlush();



	 glBegin(GL_LINES);//Basket ball
    glColor3ub(255,255,255);
    glVertex2f(-.97,-.47);
    glVertex2f(-0.89,-.47);
    glEnd();
	glFlush();

		 glBegin(GL_LINES);//Basket ball
    glColor3ub(255,255,255);
    glVertex2f(-.97,-.94);
    glVertex2f(-0.89,-.94);
    glEnd();
	glFlush();

		 glBegin(GL_LINES);//Basket ball
    glColor3ub(255,255,255);
    glVertex2f(-.89,-.47);
    glVertex2f(-0.77,-.59);
    glEnd();
	glFlush();

			 glBegin(GL_LINES);//Basket ball
    glColor3ub(255,255,255);
    glVertex2f(-.77,-.79);
    glVertex2f(-0.77,-.59);
    glEnd();
	glFlush();
			 glBegin(GL_LINES);//Basket ball
    glColor3ub(255,255,255);
    glVertex2f(-.77,-.79);
    glVertex2f(-.89,-.94);
    glEnd();
	glFlush();

		 glBegin(GL_LINES);//Basket ball k
    glColor3ub(255,255,255);
    glVertex2f(-.97,-.63);
    glVertex2f(-0.87,-.63);
    glEnd();
	glFlush();


		 glBegin(GL_LINES);//Basket ball k
    glColor3ub(255,255,255);
    glVertex2f(-.87,-.63);
    glVertex2f(-0.87,-.79);
    glEnd();
	glFlush();

    glBegin(GL_LINES);//Basket ball k
    glColor3ub(255,255,255);
    glVertex2f(-.87,-.63);
    glVertex2f(-0.83,-.676);
    glEnd();
	glFlush();

	    glBegin(GL_LINES);//Basket ball k
    glColor3ub(255,255,255);
    glVertex2f(-.83,-.676);
    glVertex2f(-0.83,-.75);
    glEnd();
	glFlush();

		    glBegin(GL_LINES);//Basket ball k
    glColor3ub(255,255,255);
    glVertex2f(-.87,-.79);
    glVertex2f(-0.83,-.75);
    glEnd();
	glFlush();


			 glBegin(GL_LINES);//Basket ball k
    glColor3ub(255,255,255);
    glVertex2f(-.97,-.79);
    glVertex2f(-0.87,-.79);
    glEnd();
	glFlush();

				 glBegin(GL_LINES);//Basket ball k
    glColor3ub(255,255,255);
    glVertex2f(-.94,-.68);
    glVertex2f(-0.94,-.73);
    glEnd();
	glFlush();

							 glBegin(GL_LINES);//Basket ball k
    glColor3ub(255,255,255);
    glVertex2f(-.94,-.705);
    glVertex2f(-0.926,-.705);
    glEnd();
	glFlush();

		 x=-.91f;  y=-.705f;  radius =.016f;
     i;
    lineAmount = 100;
		 twicePi = 2.0f * PI;

	glBegin(GL_LINE_LOOP);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	glFlush();

















	 glBegin(GL_LINES);//Basket ball
    glColor3ub(255,255,255);
    glVertex2f(-.04,-.47);
    glVertex2f(-0.12,-.47);
    glEnd();
	glFlush();

		 glBegin(GL_LINES);//Basket ball
    glColor3ub(255,255,255);
    glVertex2f(-.04,-.94);
    glVertex2f(-0.12,-.94);
    glEnd();
	glFlush();



		 glBegin(GL_LINES);//Basket ball
    glColor3ub(255,255,255);
    glVertex2f(-.12,-.47);
    glVertex2f(-0.24,-.59);
    glEnd();
	glFlush();

			 glBegin(GL_LINES);//Basket ball
    glColor3ub(255,255,255);
    glVertex2f(-.24,-.79);
    glVertex2f(-0.24,-.588);
    glEnd();
	glFlush();

			 glBegin(GL_LINES);//Basket ball
    glColor3ub(255,255,255);
    glVertex2f(-.24,-.79);
    glVertex2f(-.12,-.94);
    glEnd();
	glFlush();

	 glBegin(GL_LINES);//Basket ball k
    glColor3ub(255,255,255);
    glVertex2f(-.04,-.63);
    glVertex2f(-0.14,-.63);
    glEnd();
	glFlush();

		 glBegin(GL_LINES);//Basket ball k
    glColor3ub(255,255,255);
    glVertex2f(-.14,-.63);
    glVertex2f(-0.14,-.79);
    glEnd();
	glFlush();

	    glBegin(GL_LINES);//Basket ball k
    glColor3ub(255,255,255);
    glVertex2f(-.14,-.63);
    glVertex2f(-0.18,-.676);
    glEnd();
	glFlush();

	    glBegin(GL_LINES);//Basket ball k
    glColor3ub(255,255,255);
    glVertex2f(-.18,-.676);
    glVertex2f(-0.18,-.75);
    glEnd();
	glFlush();

		    glBegin(GL_LINES);//Basket ball k
    glColor3ub(255,255,255);
    glVertex2f(-.14,-.79);
    glVertex2f(-0.18,-.75);
    glEnd();
	glFlush();

			 glBegin(GL_LINES);//Basket ball k
    glColor3ub(255,255,255);
    glVertex2f(-.04,-.79);
    glVertex2f(-0.14,-.79);
    glEnd();
	glFlush();

					 glBegin(GL_LINES);//Basket ball k
    glColor3ub(255,255,255);
    glVertex2f(-.07,-.68);
    glVertex2f(-0.07,-.73);
    glEnd();
	glFlush();

						 glBegin(GL_LINES);//Basket ball k
    glColor3ub(255,255,255);
    glVertex2f(-.07,-.705);
    glVertex2f(-0.085,-.705);
    glEnd();
	glFlush();


			 x=-.1f;  y=-.705f;  radius =.016f;
     i;
    lineAmount = 100;
		 twicePi = 2.0f * PI;

	glBegin(GL_LINE_LOOP);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	glFlush();


    glBegin(GL_QUADS);//gallary
    glColor3ub(0, 0, 128);
    glVertex2f(-0.915,0.2);
    glVertex2f(-0.9,-0.2);
    glVertex2f(-0.96,-0.2);
    glVertex2f(-0.97,0.2);
    glEnd();
	glFlush();

	    glBegin(GL_QUADS);
    glColor3ub(0, 0, 128);
    glVertex2f(-0.89,0.47);
    glVertex2f(-0.915,0.2);
    glVertex2f(-0.97,0.2);
    glVertex2f(-0.96,0.48);
    glEnd();
	glFlush();


	    glBegin(GL_QUADS);
    glColor3ub(0, 0, 128);
    glVertex2f(-0.815,0.26);
    glVertex2f(-0.8,-0.18);
    glVertex2f(-0.86,-0.18);
    glVertex2f(-0.87,0.26);
    glEnd();
	glFlush();

	    glBegin(GL_QUADS);
    glColor3ub(0, 0, 128);
    glVertex2f(-0.79,0.44);
    glVertex2f(-0.815,0.2);
    glVertex2f(-0.87,0.2);
    glVertex2f(-0.86,0.45);
    glEnd();
	glFlush();


		    glBegin(GL_QUADS);
    glColor3ub(0, 0, 128);
    glVertex2f(-0.715,0.2);
    glVertex2f(-0.7,-0.16);
    glVertex2f(-0.76,-0.16);
    glVertex2f(-0.77,0.2);
    glEnd();
	glFlush();

	    glBegin(GL_QUADS);
    glColor3ub(0, 0, 128);
    glVertex2f(-0.69,0.41);
    glVertex2f(-0.715,0.2);
    glVertex2f(-0.77,0.2);
    glVertex2f(-0.76,0.42);
    glEnd();
	glFlush();


			    glBegin(GL_QUADS);
    glColor3ub(0, 0, 128);
    glVertex2f(-0.64,0.2);
    glVertex2f(-0.63,-0.14);
    glVertex2f(-0.675,-0.14);
    glVertex2f(-0.69,0.2);
    glEnd();
	glFlush();

	    glBegin(GL_QUADS);
    glColor3ub(0, 0, 128);
    glVertex2f(-0.63,0.37);
    glVertex2f(-0.64,0.2);
    glVertex2f(-0.69,0.2);
    glVertex2f(-0.672,.38);
    glEnd();
	glFlush();


		    glBegin(GL_QUADS);//stairs
    glColor3ub(194,194,163);
    glVertex2f(-0.93,0.8);
    glVertex2f(-0.93,0.55);
    glVertex2f(-0.97,0.55);
    glVertex2f(-0.97,0.8);
    glEnd();
	glFlush();

			    glBegin(GL_QUADS);//stairs
    glColor3ub(77,77,51);
    glVertex2f(-0.89,0.795);
    glVertex2f(-0.89,0.555);
    glVertex2f(-0.93,0.555);
    glVertex2f(-0.93,0.795);
    glEnd();
	glFlush();

				    glBegin(GL_QUADS);//stairs
glColor3ub(194,194,163);
    glVertex2f(-0.85,0.79);
    glVertex2f(-0.85,0.56);
    glVertex2f(-0.89,0.56);
    glVertex2f(-0.89,0.79);
    glEnd();
	glFlush();


				    glBegin(GL_QUADS);//stairs
    glColor3ub(77,77,51);
    glVertex2f(-0.81,0.785);
    glVertex2f(-0.81,0.565);
    glVertex2f(-0.85,0.565);
    glVertex2f(-0.85,0.785);
    glEnd();
	glFlush();

					    glBegin(GL_QUADS);//stairs
glColor3ub(194,194,163);
    glVertex2f(-0.77,0.78);
    glVertex2f(-0.77,0.57);
    glVertex2f(-0.81,0.57);
    glVertex2f(-0.81,0.78);
    glEnd();
	glFlush();

						    glBegin(GL_QUADS);//stairs
    glColor3ub(77,77,51);
    glVertex2f(-0.73,0.78);
    glVertex2f(-0.73,0.57);
    glVertex2f(-0.77,0.57);
    glVertex2f(-0.77,0.78);
    glEnd();
	glFlush();

							    glBegin(GL_QUADS);//stairs
glColor3ub(194,194,163);
    glVertex2f(-0.69,0.78);
    glVertex2f(-0.69,0.57);
    glVertex2f(-0.73,0.57);
    glVertex2f(-0.73,0.78);
    glEnd();
	glFlush();

								    glBegin(GL_QUADS);//stairs
    glColor3ub(77,77,51);
    glVertex2f(-0.65,0.775);
    glVertex2f(-0.65,0.575);
    glVertex2f(-0.69,0.575);
    glVertex2f(-0.69,0.775);
    glEnd();
	glFlush();
									    glBegin(GL_QUADS);//stairs
glColor3ub(194,194,163);
    glVertex2f(-0.61,0.77);
    glVertex2f(-0.61,0.58);
    glVertex2f(-0.65,0.58);
    glVertex2f(-0.65,0.77);
    glEnd();
	glFlush();



    glBegin(GL_QUADS);//galllary
    glColor3ub(0,0,128);
    glVertex2f(-0.93,0.99);
    glVertex2f(-0.93,0.85);
    glVertex2f(-0.97,0.85);
    glVertex2f(-0.97,0.99);
    glEnd();
	glFlush();

	    glBegin(GL_QUADS);//galllary
    glColor3ub(0,0,128);
    glVertex2f(-0.86,0.99);
    glVertex2f(-0.86,0.85);
    glVertex2f(-0.9,0.85);
    glVertex2f(-0.9,0.99);
    glEnd();
	glFlush();


		    glBegin(GL_QUADS);//galllary
    glColor3ub(0,0,128);
    glVertex2f(-0.79,0.99);
    glVertex2f(-0.79,0.85);
    glVertex2f(-0.83,0.85);
    glVertex2f(-0.83,0.99);
    glEnd();
	glFlush();

			    glBegin(GL_QUADS);//galllary
    glColor3ub(0,0,128);
    glVertex2f(-0.71,0.99);
    glVertex2f(-0.71,0.85);
    glVertex2f(-0.75,0.85);
    glVertex2f(-0.75,0.99);
    glEnd();
	glFlush();

				    glBegin(GL_QUADS);//galllary
    glColor3ub(0,0,128);
    glVertex2f(-0.62,0.99);
    glVertex2f(-0.62,0.85);
    glVertex2f(-0.66,0.85);
    glVertex2f(-0.66,0.99);
    glEnd();
	glFlush();


	    glBegin(GL_QUADS);//Flag
    glColor3ub(0, 51, 18);
    glVertex2f(0.97,0.97);
    glVertex2f(0.97,-0.39);
    glVertex2f(0.63,-0.39);
    glVertex2f(0.63,0.97);
    glEnd();
	glFlush();

				 x=-.2f;  y=-.2f; radius =.1f;
	i;
	lineAmount = 100;
	twicePi = 2.0f * PI;
	 triangleAmount = 20;
    x=.8f,y=0.3f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(255,0,0);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
                glColor3ub(255,0,0);
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glFlush();




	    glBegin(GL_LINES);//gallary
    glColor3ub(255,255,255);
    glVertex2f(-1,-0.1);
    glVertex2f(-0.6,-0.1);
    glEnd();
	glFlush();

		    glBegin(GL_LINES);//gallary
    glColor3ub(255,255,255);
    glVertex2f(-1,0);
    glVertex2f(-0.6,0);
    glEnd();
	glFlush();

			    glBegin(GL_LINES);//gallary
    glColor3ub(255,255,255);
    glVertex2f(-1,0.1);
    glVertex2f(-0.6,0.1);
    glEnd();
	glFlush();
				    glBegin(GL_LINES);//gallary
    glColor3ub(255,255,255);
    glVertex2f(-1,0.2);
    glVertex2f(-0.6,0.2);
    glEnd();
	glFlush();

					    glBegin(GL_LINES);//gallary
    glColor3ub(255,255,255);
    glVertex2f(-1,0.3);
    glVertex2f(-0.6,0.3);
    glEnd();
	glFlush();

						    glBegin(GL_LINES);//gallary
    glColor3ub(255,255,255);
    glVertex2f(-1,0.4);
    glVertex2f(-0.6,0.4);
    glEnd();
	glFlush();

							    glBegin(GL_LINES);//gallary
    glColor3ub(255,255,255);
    glVertex2f(-1,0.89);
    glVertex2f(-0.6,0.89);
    glEnd();
	glFlush();

								    glBegin(GL_LINES);//gallary
    glColor3ub(255,255,255);
    glVertex2f(-1,0.95);
    glVertex2f(-0.6,0.95);
    glEnd();
	glFlush();







}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Test");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}

