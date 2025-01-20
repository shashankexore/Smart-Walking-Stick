// defines pin numbers
const int trigPin = 9;
const int echoPin = 10;
const int buzzer = 11;
const int ledPin = 13;

// defines variables
long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  pinMode(buzzer, OUTPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600); // Starts the serial communication
}

void loop() {
  // Clears the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Sets the trigPin on HIGH state for 10 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);

  // Calculating the distance
  distance = duration * 0.034 / 2;

  // Buzzer and LED feedback based on distance
  if (distance <= 20) {
    // Continuous beep for objects closer than 20 cm
    digitalWrite(buzzer, HIGH);
    digitalWrite(ledPin, HIGH);
  } else if (distance <= 40) {
    // Faster beeps for objects between 20 and 40 cm
    digitalWrite(ledPin, HIGH);
    digitalWrite(buzzer, HIGH);
    delay(100); // Short delay for faster beeps
    digitalWrite(buzzer, LOW);
    delay(100);
  } else if (distance <= 60) {
    // Slower beeps for objects between 40 and 60 cm
    digitalWrite(ledPin, HIGH);
    digitalWrite(buzzer, HIGH);
    delay(200); // Longer delay for slower beeps
    digitalWrite(buzzer, LOW);
    delay(200);
  } else {
    // No beep and LED off for safe distance
    digitalWrite(buzzer, LOW);
    digitalWrite(ledPin, LOW);
  }

  // Prints the distance on the Serial Monitor
  Serial.print("Distance: ");
  Serial.println(distance);
}
