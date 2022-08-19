
// Examen final de la serie de tutoriales de programación de u5a6i
// #6 programación de Arduino desde 0, bucle for

// Necesitarás abrir el serial monitor de tu proyecto arduino.
// - puedes hacer ctrl + shift + m
// - o ir a herramientas ( tools ) y elegir monitor serial ( serial monitor )

int puntuacionTotal = 0;

void setup()
{
  Serial.begin(9600);
  Serial.println("\n\n\n");
  Serial.println(" Examen final del bucle for.");
  Serial.println(" Respuestas posibles: valor numérico");
  Serial.println(" Mira en cada pregunta el trozo de código que está entre <código> y </código>\n\n");

  // Empieza el test
  puntuacionTotal = pregunta_1(puntuacionTotal);
  puntuacionTotal = pregunta_2(puntuacionTotal);
  puntuacionTotal = pregunta_3(puntuacionTotal);
  puntuacionTotal = pregunta_4(puntuacionTotal);
  puntuacionTotal = pregunta_5(puntuacionTotal);
  puntuacionTotal = pregunta_6(puntuacionTotal);
  puntuacionTotal = pregunta_7(puntuacionTotal);
  puntuacionTotal = pregunta_8(puntuacionTotal);
  puntuacionTotal = pregunta_9(puntuacionTotal);
  puntuacionTotal = pregunta_10(puntuacionTotal);

  // Pintamos el resultado
  Serial.println("");
  Serial.print("Puntuación final: ");
  Serial.print(puntuacionTotal);
  Serial.println("/10 puntos");
}

void loop()
{
}

int pregunta_1(int puntuacion) // Valor final de i (dentro del bucle, la última vuelta que entra) para => for( int i = 0; i < 10 ; i++ )
{
  Serial.print("1) Respuesta: ");

  //----------------------------<código>
  for (int i = 0; i < 10; i++)
  {
  }
  //----------------------------</código>

  // esperamos a que tenga datos que leer
  while (Serial.available() <= 0)
    ;

  String incomingString = Serial.readString();
  Serial.println(incomingString);

  if (incomingString.compareTo("9\n") == 0) // el \n es porque al enviar, se le añade un salto de línea
  {
    pintarCorrecto();
    puntuacion++;
  }
  else
  {
    Serial.println("Incorrecto, La i se incrementa de 1 en 1, del 0 al 9 ( como es menor a 10, nunca llegará a entrar en 10).");
    Serial.println("");
  }
  return puntuacion;
}

int pregunta_2(int puntuacion) // Valor final de i (dentro del bucle, la última vuelta que entra) para => for( int i = 0; i < 10 ; i+= 2 )
{
  Serial.print("2) Respuesta: ");

  //----------------------------<código>
  for (int i = 0; i < 10; i += 2)
  {
  }
  //----------------------------</código>

  // esperamos a que tenga datos que leer
  while (Serial.available() <= 0)
    ;

  String incomingString = Serial.readString();
  Serial.println(incomingString);

  if (incomingString.compareTo("8\n") == 0) // el \n es porque al enviar, se le añade un salto de línea
  {
    pintarCorrecto();
    puntuacion++;
  }
  else
  {
    Serial.println("Incorrecto. La 'i' se incrementa de 2 en 2 y hay un < 10.");
    Serial.println("");
  }
  return puntuacion;
}

int pregunta_3(int puntuacion) // Valor final de i (dentro del bucle, la última vuelta que entra) para => for( int i = 1; i < 10 ; i*= 2 )
{
  Serial.print("3) Respuesta (esta tiene trampa, la i empieza valiendo 1 porque si valiese 0, quedaría atrapado dentro del for, ya que 0*num=0): ");

  //----------------------------<código>
  for (int i = 1; i < 10; i *= 2)
  {
    Serial.print("\ni: ");
    Serial.println(i);
  }
  //----------------------------</código>

  // esperamos a que tenga datos que leer
  while (Serial.available() <= 0)
    ;

  String incomingString = Serial.readString();
  Serial.println(incomingString);

  if (incomingString.compareTo("8\n") == 0) // el \n es porque al enviar, se le añade un salto de línea
  {
    pintarCorrecto();
    puntuacion++;
  }
  else
  {
    Serial.println("Incorrecto, La i se va multiplicando x2 y hay un <10.");
    Serial.println("");
  }
  return puntuacion;
}

int pregunta_4(int puntuacion) // Valor final de i (dentro del bucle, la última vuelta que entra) para => for( int i = 0; i <= 10 ; i++ )
{
  Serial.print("4) Respuesta: ");

  //----------------------------<código>
  for (int i = 0; i <= 10; i++)
  {
  }
  //----------------------------</código>

  // esperamos a que tenga datos que leer
  while (Serial.available() <= 0)
    ;

  String incomingString = Serial.readString();
  Serial.println(incomingString);

  if (incomingString.compareTo("10\n") == 0) // el \n es porque al enviar, se le añade un salto de línea
  {
    pintarCorrecto();
    puntuacion++;
  }
  else
  {
    Serial.println("Incorrecto, tiene un <= a 10, en 10 entra.");
    Serial.println("");
  }
  return puntuacion;
}

int pregunta_5(int puntuacion) // Valor final de i (dentro del bucle, la última vuelta que entra) para => for( int i = 1; i <= 10 ; i++ )
{
  Serial.print("5) Respuesta: ");

  //----------------------------<código>
  for (int i = 1; i <= 10; i += 2)
  {
  }
  //----------------------------</código>

  // esperamos a que tenga datos que leer
  while (Serial.available() <= 0)
    ;

  String incomingString = Serial.readString();
  Serial.println(incomingString);

  if (incomingString.compareTo("9\n") == 0) // el \n es porque al enviar, se le añade un salto de línea
  {
    pintarCorrecto();
    puntuacion++;
  }
  else
  {
    Serial.println("Incorrecto, va del 0 al 10 (incluído). Suma de 2 en 2.");
    Serial.println("");
  }
  return puntuacion;
}

int pregunta_6(int puntuacion) // Valor final de i (dentro del bucle, la última vuelta que entra) para => for( int i = 12; i > 3 ; i-- )
{
  Serial.print("6) Respuesta: ");

  //----------------------------<código>
  for (int i = 12; i > 3; i--)
  {
  }
  //----------------------------</código>

  // esperamos a que tenga datos que leer
  while (Serial.available() <= 0)
    ;

  String incomingString = Serial.readString();
  Serial.println(incomingString);

  if (incomingString.compareTo("4\n") == 0) // el \n es porque al enviar, se le añade un salto de línea
  {
    pintarCorrecto();
    puntuacion++;
  }
  else
  {
    Serial.println("Incorrecto. Ha de ser mayor a 3.");
    Serial.println("");
  }
  return puntuacion;
}

int pregunta_7(int puntuacion) // Valor final de i (dentro del bucle, la última vuelta que entra) para => for( int i = 12; i >= 1 ; i -= 2 )
{
  Serial.print("7) Respuesta: ");

  //----------------------------<código>
  for (int i = 12; i >= 1; i -= 2)
  {
  }
  //----------------------------</código>

  // esperamos a que tenga datos que leer
  while (Serial.available() <= 0)
    ;

  String incomingString = Serial.readString();
  Serial.println(incomingString);

  if (incomingString.compareTo("2\n") == 0) // el \n es porque al enviar, se le añade un salto de línea
  {
    pintarCorrecto();
    puntuacion++;
  }
  else
  {
    Serial.println("Incorrecto.");
    Serial.println("");
  }
  return puntuacion;
}

int pregunta_8(int puntuacion) // Valor final de i (fuera del bucle, la última vuelta que entra) para => for( int i = 10; i > 11; i -= 3, i+=1 )
{
  Serial.print("8) Respuesta (este no lo verás, es sólo para confundir un poco :P ): ");

  //----------------------------<código>
  int i = 10;
  for (; i > 11; i -= 3, i += 1)
  {
  }
  //----------------------------</código>

  // esperamos a que tenga datos que leer
  while (Serial.available() <= 0)
    ;

  String incomingString = Serial.readString();
  Serial.println(incomingString);

  if (incomingString.compareTo("10\n") == 0) // el \n es porque al enviar, se le añade un salto de línea
  {
    pintarCorrecto();
    puntuacion++;
  }
  else
  {
    Serial.println("Incorrecto, valdría 10 porque la condición para entrar no se da (Esto te ocurrirá).");
    Serial.println("");
  }
  return puntuacion;
}

int pregunta_9(int puntuacion) // Valor final de i (dentro del bucle, la última vuelta que entra) para => for( int i = 10; i > 3; i -= 3, i+=1 )
{
  Serial.print("9) Respuesta (este no lo verás, es sólo para confundir un poco :P ): ");

  //----------------------------<código>
  for (int i = 10; i > 3; i -= 3, i += 1)
  {
  }
  //----------------------------</código>

  // esperamos a que tenga datos que leer
  while (Serial.available() <= 0)
    ;

  String incomingString = Serial.readString();
  Serial.println(incomingString);

  if (incomingString.compareTo("4\n") == 0) // el \n es porque al enviar, se le añade un salto de línea
  {
    pintarCorrecto();
    puntuacion++;
  }
  else
  {
    Serial.println("Incorrecto, se resta de 2 en 2 (-3+1).");
    Serial.println("");
  }
  return puntuacion;
}

int pregunta_10(int puntuacion) // Valor final de i (dentro del bucle, la última vuelta que entra) para => for( int i = 10; i > 6; i -= 3, i+=1 )
{
  Serial.print("10) Respuesta (este no lo verás, es sólo para confundir un poco :P ): ");

  //----------------------------<código>
  for (int i = 10; i > 6; i -= 3, i += 1)
  {
  }
  //----------------------------</código>

  // esperamos a que tenga datos que leer
  while (Serial.available() <= 0)
    ;

  String incomingString = Serial.readString();
  Serial.println(incomingString);

  if (incomingString.compareTo("8\n") == 0) // el \n es porque al enviar, se le añade un salto de línea
  {
    pintarCorrecto();
    puntuacion++;
  }
  else
  {
    Serial.println("Incorrecto.");
    Serial.println("");
  }
  return puntuacion;
}

void pintarCorrecto()
{
  Serial.println("Correcto!");
  Serial.println("");
}