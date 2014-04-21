/*

 C++ przez OpenGL - szablon do æwiczeñ laboratoryjnych
 (C) Micha³ Turek.

*/

#ifdef _RYSOWANIE

	system("cls");
	std::cout << "kameraX " << kameraX << std::endl;
	std::cout << "kameraZ " << kameraY << std::endl;
	std::cout << "kameraZ " << kameraZ << std::endl;
	/******************* SZABLON **************************/
	glPushMatrix();
		glClearColor(0.2, 0.2, 1.0, 0.0);			
		glShadeModel(GL_SMOOTH);					
		glEnable(GL_TEXTURE_2D);
		glEnable(GL_DEPTH_TEST); 
		glPolygonMode (GL_FRONT, GL_FILL); 
		glEnable(GL_LIGHTING);
		GLfloat  ambient[4] = {0.2, 0.2, 0.2,1};
		glLightModelfv(GL_LIGHT_MODEL_AMBIENT,ambient); 

		GLfloat  ambientLight0[4] = {0,0,0,1};
		GLfloat  specularLight0[4] = {0.3,0.3,0.3,1};
		GLfloat  diffuseLight0[4] = {0.3,0.3,0.3,1};
		GLfloat	 lightPos0[4] = {100,100,100,1};
		glLightfv(GL_LIGHT0,GL_POSITION,lightPos0);
		glLightfv(GL_LIGHT0,GL_AMBIENT,ambientLight0);
		glLightfv(GL_LIGHT0,GL_SPECULAR,specularLight0);
		glLightfv(GL_LIGHT0,GL_DIFFUSE,diffuseLight0);
		glEnable(GL_LIGHT0); 

		GLfloat  ambientLight1[4] = {0,0,0,1};
		GLfloat  specularLight1[4] = {0.3,0.3,0.3,1};
		GLfloat  diffuseLight1[4] = {0.3,0.3,0.3,1};
		GLfloat	 lightPos1[4] = {-100,100,-100,1};
		glLightfv(GL_LIGHT1,GL_POSITION,lightPos1);
		glLightfv(GL_LIGHT1,GL_AMBIENT,ambientLight1);
		glLightfv(GL_LIGHT1,GL_SPECULAR,specularLight1);
		glLightfv(GL_LIGHT1,GL_DIFFUSE,diffuseLight1);
		glEnable(GL_LIGHT1);

		
		GLfloat  ambientLight2[4] = {0,0,0,1};
		GLfloat  specularLight2[4] = {0.3,0.3,0.3,1};
		GLfloat  diffuseLight2[4] = {0.3,0.3,0.3,1};
		GLfloat	 lightPos2[4] = {-100,100,100,1};
		glLightfv(GL_LIGHT2,GL_POSITION,lightPos2);
		glLightfv(GL_LIGHT2,GL_AMBIENT,ambientLight2);
		glLightfv(GL_LIGHT2,GL_SPECULAR,specularLight2);
		glLightfv(GL_LIGHT2,GL_DIFFUSE,diffuseLight2);
		glEnable(GL_LIGHT2);
	
		
		GLfloat  ambientLight3[4] = {0,0,0,1};
		GLfloat  specularLight3[4] = {0.3,0.3,0.3,1};
		GLfloat  diffuseLight3[4] = {0.3,0.3,0.3,1};
		GLfloat	 lightPos3[4] = {100,100,-100,1};
		glLightfv(GL_LIGHT3,GL_POSITION,lightPos3);
		glLightfv(GL_LIGHT3,GL_AMBIENT,ambientLight3);
		glLightfv(GL_LIGHT3,GL_SPECULAR,specularLight3);
		glLightfv(GL_LIGHT3,GL_DIFFUSE,diffuseLight3);
		glEnable(GL_LIGHT3);

	glPopMatrix();
	

	// TEREN
	// Tekstura podloza jest zapisana w pliku "data/podloze.bmp", definiowana bezpoœrednio w 3ds. 
	// Wymagany format pliku: bmp, 24 bity na pixel.
	glPushMatrix();
		glTranslatef(0,1,0);
		rysujModel("niebo"); //
		rysujModel("podloga"); //
		rysujModel("sciany"); //
	glPopMatrix();

	// MODELE 3ds:
	// Modele 3ds znajdujace sie w katalogu /data s¹ autoamtycznie ladowane i rejestrowane pod nazwami zbieznymi z nazwami plikow
	// Aby narysowaæ model nalezy wywo³aæ funkcjê: rysujModel ("nazwa_modelu");
	// Nazwa_modelu mo¿e byæ podana literemi du¿ymi lub ma³ymi, z rozszerzeniem pliku lub bez.
	

	
	glPushMatrix();
		glTranslatef(-149,50,-133);
		glRotatef(-33,0,1,0);
		rysujModel ("most");
	glPopMatrix();

	
	for (int a = 0; a<15; a++){
		glPushMatrix();
		glTranslatef(   drzewa1[a][0], drzewa1[a][1]   ,   drzewa1[a][2]  );
		glRotatef(drzewa1[a][3],0,1,0);
		rysujModel ("drzewko1");
		glPopMatrix();
	
		
	}

	for (int a = 0; a<18; a++){
		glPushMatrix();
		glTranslatef(   lawki[a][0], lawki[a][1]   ,   lawki[a][2]  );
		glRotatef(lawki[a][3],0,1,0);
		rysujModel ("stolik");
		glPopMatrix();
	}

	for (int a = 0; a<18; a++){
		glPushMatrix();
		glTranslatef(   stolki[a][0], stolki[a][1]   ,   stolki[a][2]  );
		glRotatef(lawki[a][3],0,1,0);
		rysujModel ("fotel");
		glPopMatrix();
	}

	glPushMatrix();
	glTranslatef(   segregator[0], segregator[1]   ,   segregator[2]  );
	glRotatef(segregator[3],0,1,0);
	rysujModel ("segregator");
	glPopMatrix();

	glPushMatrix();
	glTranslatef(   telefon[0], telefon[1]   ,   telefon[2]  );
	glRotatef(telefon[3],0,1,0);
	rysujModel ("telefon");
	glPopMatrix();

	
	glPushMatrix();
	glTranslatef(   kubki[0], kubki[1]   ,   kubki[2]  );
	glRotatef(kubki[3],0,1,0);
	rysujModel ("kubki");
	glPopMatrix();
 

	/******************************************************/


#undef _RYSOWANIE
#endif
