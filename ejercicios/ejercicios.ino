
// Ejercicios de la serie de tutoriales de programación de u5a6i
// #6 programación de Arduino desde 0, bucle for

// Necesitarás abrir el serial monitor de tu proyecto arduino.
// - puedes hacer ctrl + shift + m
// - o ir a herramientas ( tools ) y elegir monitor serial ( serial monitor )

// Antes de ejecutar, intenta descubrir qué valor dará ( todos los valores son un número )

void setup()
{
  Serial.begin(9600);
  Serial.print("Ejercicio 1:\n");    print_ejercicio_1(/* for(int i = 0; i < 10; i++) */);        // Mi respuesta:
  Serial.print("Ejercicio 2:\n");    print_ejercicio_2(/* for(int i = 1; i < 30; i+=2) */);       // Mi respuesta:
  Serial.print("Ejercicio 3:\n");    print_ejercicio_3(/* for(int i = 1; i < 3; i*=3) */);        // Mi respuesta:
  Serial.print("Ejercicio 4:\n");    print_ejercicio_4(/* for(int i = 10; i >= 0; i--) */);       // Mi respuesta:
  Serial.print("Ejercicio 5:\n");    print_ejercicio_5(/* for(int i = 4; i < 12; i+=5, i-=1) */); // Mi respuesta:
  Serial.print("Ejercicio 6:\n");    print_ejercicio_6(/* for(int i = 0; i < 10; i++) */);        // Mi respuesta:
  Serial.print("Ejercicio 7:\n");    print_ejercicio_7(/* for(int i = 8; i > 5; i-=2) */);        // Mi respuesta:
  Serial.print("Ejercicio 8:\n");    print_ejercicio_8(/* for(int i = 0; i < 10; i++) */);        // Mi respuesta:
  Serial.print("Ejercicio 9:\n");    print_ejercicio_9(/* for(int i = 0; i < 7; i+=6) */);        // Mi respuesta:
  Serial.print("Ejercicio 10:\n");  print_ejercicio_10(/* for(int i = 0; i < 10; i++) */);        // Mi respuesta:
  Serial.print("Ejercicio 11:\n");  print_ejercicio_11(/* for(int i = 10; i < 10; i++) */);       // Mi respuesta:
  Serial.print("Ejercicio 12:\n");  print_ejercicio_12(/* for(int i = 0; i < 10; i++) */);        // Mi respuesta:
  Serial.print("Ejercicio 13:\n");  print_ejercicio_13(/* for(int i = 0; i < 10; i++) */);        // Mi respuesta:
  Serial.print("Ejercicio 14:\n");  print_ejercicio_14(/* for(int i = 10; i > 8; i--) */);        // Mi respuesta:
  Serial.print("Ejercicio 15:\n");  print_ejercicio_15(/* for(int i = 0; i < 10; i+=4) */);       // Mi respuesta:
  Serial.print("Ejercicio 16:\n");  print_ejercicio_16(/* for(int i = 1; i < 10; i++) */);        // Mi respuesta:
  Serial.print("Ejercicio 17:\n");  print_ejercicio_17(/* for(int i = 6; i < 9; i++) */);         // Mi respuesta:
  Serial.print("Ejercicio 18:\n");  print_ejercicio_18(/* for(int i = 0; i < 13; i++) */);        // Mi respuesta:
  Serial.print("Ejercicio 19:\n");  print_ejercicio_19(/* for(int i = 0; i < 10; i+=3) */);       // Mi respuesta:
  Serial.print("Ejercicio 20:\n");  print_ejercicio_20(/* for(int i = 13; i > 6; i-=2) */);       // Mi respuesta:
}

void loop()
{
}

void print_ejercicio_1()
{
  for (int i = 0; i < 10; i++)
  {
    Serial.println(i);
  }
  Serial.println("------------\n");
}

void print_ejercicio_2()
{
  for (int i = 1; i < 30; i += 2)
  {
    Serial.println(i);
  }
  Serial.println("------------\n");
}

void print_ejercicio_3()
{
  for (int i = 1; i < 3; i *= 3)
  {
    Serial.println(i);
  }
  Serial.println("------------\n");
}

void print_ejercicio_4()
{
  for (int i = 10; i >= 0; i--)
  {
    Serial.println(i);
  }
  Serial.println("------------\n");
}

void print_ejercicio_5()
{
  for (int i = 4; i < 12; i += 5, i-= 1)
  {
    Serial.println(i);
  }
  Serial.println("------------\n");
}

void print_ejercicio_6()
{
  for (int i = 0; i < 10; i++)
  {
    Serial.println(i);
  }
  Serial.println("------------\n");
}

void print_ejercicio_7()
{
  for (int i = 8; i > 5; i -= 2)
  {
    Serial.println(i);
  }
  Serial.println("------------\n");
}

void print_ejercicio_8()
{
  for (int i = 0; i < 10; i++)
  {
    Serial.println(i);
  }
  Serial.println("------------\n");
}

void print_ejercicio_9()
{
  for (int i = 0; i < 7; i += 6)
  {
    Serial.println(i);
  }
  Serial.println("------------\n");
}

void print_ejercicio_10()
{
  for (int i = 0; i < 10; i++)
  {
    Serial.println(i);
  }
  Serial.println("------------\n");
}

void print_ejercicio_11()
{
  for (int i = 10; i >= 9; i--)
  {
    Serial.println(i);
  }
  Serial.println("------------\n");
}

void print_ejercicio_12()
{
  for (int i = 0; i < 10; i++)
  {
    Serial.println(i);
  }
  Serial.println("------------\n");
}

void print_ejercicio_13()
{
  for (int i = 0; i < 10; i++)
  {
    Serial.println(i);
  }
  Serial.println("------------\n");
}

void print_ejercicio_14()
{
  for (int i = 10; i > 8; i--)
  {
    Serial.println(i);
  }
  Serial.println("------------\n");
}

void print_ejercicio_15()
{
  for (int i = 0; i < 10; i += 4)
  {
    Serial.println(i);
  }
  Serial.println("------------\n");
}

void print_ejercicio_16()
{
  for (int i = 1; i < 10; i++)
  {
    Serial.println(i);
  }
  Serial.println("------------\n");
}

void print_ejercicio_17()
{
  for (int i = 6; i < 9; i++)
  {
    Serial.println(i);
  }
  Serial.println("------------\n");
}

void print_ejercicio_18()
{
  for (int i = 0; i < 13; i++)
  {
    Serial.println(i);
  }
  Serial.println("------------\n");
}

void print_ejercicio_19()
{
  for (int i = 0; i < 10; i += 3)
  {
    Serial.println(i);
  }
  Serial.println("------------\n");
}

void print_ejercicio_20()
{
  for (int i = 13; i > 6; i -= 2)
  {
    Serial.println(i);
  }
  Serial.println("------------\n");
}
