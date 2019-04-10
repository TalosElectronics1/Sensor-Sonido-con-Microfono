/*
 * Talos Electronics 
 */
 
// Definimos los pines a utilizar en el led y el sensor
int Sensordesonido = 2;
int Led = 3;
 
void setup() 
{
 
  pinMode (Sensordesonido, INPUT);
  pinMode (Led, OUTPUT);
}
 
void loop()
{
  int statusSensor = digitalRead (Sensordesonido);
  
  if (statusSensor == 1)
  {
    digitalWrite(LED, HIGH);
  }
  
  else
  {
    digitalWrite(LED, LOW);
  }
  
}
