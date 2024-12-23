// // Configuración de pines
// const int sensorPin = A0;  // Salida analógica del AD8232
const int loPlusPin = 11;   // Detector de desconexión LO+
const int loMinusPin = 10;  // Detector de desconexión LO-
const int numReadings = 10; // Cantidad de lecturas para promediar
int readings[numReadings];  // Almacén de lecturas
int readIndex = 0;          // Índice de lectura actual
int total = 0;              // Suma de todas las lecturas
int average = 0;            // Promedio filtrado
float filteredValue = 0.0;
float alpha = 0.1;  // Factor de suavizado

//// Variables para filtro pasa-bajas
// float filteredValue = 0.0;
// float alpha = 0.1;


void setup() {
  Serial.begin(9600);        // Comunicación serial
  pinMode(loPlusPin, INPUT); // Configurar LO+ como entrada
  pinMode(loMinusPin, INPUT);// Configurar LO- como entrada
  for (int i = 0; i < numReadings; i++) {
    readings[i] = 0;
  }
}

void loop() {
  total = 0;
  average = 0;
  // Verificar desconexión de electrodos
  if (digitalRead(loPlusPin) == 1 || digitalRead(loMinusPin) == 1) {
    Serial.println("!");
  } else {
    for (int i = 0 ; i < numReadings; i++){
      readings[i] = analogRead(A0);
    }
  }
  for (int i = 0 ; i < numReadings; i++){
    total = total + readings[i];
  }
  average = total / numReadings;
  Serial.println("PROMEDIO");
  Serial.println(average);
  int rawValue = analogRead(A0);  // Lectura sin filtrar
  filteredValue = alpha * rawValue + (1 - alpha) * filteredValue;
  Serial.println("filtrado");
  Serial.println(filteredValue);
  delay(1000);
}
