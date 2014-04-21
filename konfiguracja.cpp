/*
 C++ przez OpenGL - szablon do æwiczeñ laboratoryjnych
 (C) Micha³ Turek.
*/

#ifdef _KONFIGURACJA
	/******************* SZABLON **************************/

	// KONFIGURACJA	WYSWIETLANIA
	oknoSzerkosc=800;
	oknoWysokosc=600;
	oknoFullScreen = false;
	// KONFIGURACJA	KAMERY
	
	ustalObszar (500);						// promien obszaru (kola), po jakim kamera mo¿e sie poruszaæ

	//wymiary terenu: (-200,-200) - (200,200)

	// Funkcja rejestruj¹ca przeszkody - kolejne parametry to X1, Z1, X2, Z2 prostok¹ta, który jest dodatkowo zabroniony dla kamery
	
	// blokady terenu (sciany)
	rejestrujPrzeszkode(60,95,-60,110);	
	rejestrujPrzeszkode(60,-95,-60,-110);	
	rejestrujPrzeszkode(45,-110, 60,110);	
	rejestrujPrzeszkode(-45,-110,-60,110);	
	
	/******************************************************/

#undef _KONFIGURACJA
#endif
