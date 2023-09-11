int switchstate = 0;

void setup() {
  pinMode(2, OUTPUT);  //  381 nm
    pinMode(3, OUTPUT);  //  381 nm
      pinMode(4, OUTPUT);  //  381 nm
        pinMode(5, OUTPUT);  //  381 nm
  pinMode(6, OUTPUT);  //  415 nm
    pinMode(7, OUTPUT);  //  415 nm
     pinMode(8, OUTPUT);  //  415 nm
      pinMode(9, OUTPUT);  //  415 nm
  pinMode(10, OUTPUT);  //  445 nm
    pinMode(11, OUTPUT);  //  445 nm
      pinMode(12, OUTPUT);  //  445 nm
        pinMode(13, OUTPUT);  //  445 nm
   pinMode(22, OUTPUT);  //  470 nm
      pinMode(23, OUTPUT);  //  470 nm
         pinMode(24, OUTPUT);  //  470 nm
            pinMode(25, OUTPUT);  //  470 nm
   pinMode(26, OUTPUT);  //  500 nm
      pinMode(27, OUTPUT);  //  500 nm
         pinMode(28, OUTPUT);  //  500 nm
            pinMode(29, OUTPUT);  //  500 nm
   pinMode(30, OUTPUT);  //  520 nm
      pinMode(31, OUTPUT);  //  520 nm
         pinMode(32, OUTPUT);  //  520 nm
            pinMode(33, OUTPUT);  //  520 nm
   pinMode(34, OUTPUT);  //  550 nm
      pinMode(35, OUTPUT);  //  550 nm
         pinMode(36, OUTPUT);  //  550 nm
            pinMode(37, OUTPUT);  //  550 nm
  pinMode(38, OUTPUT);  //  580 nm
    pinMode(39, OUTPUT);  //  580 nm
      pinMode(40, OUTPUT);  //  580 nm
        pinMode(41, OUTPUT);  //  580 nm
  pinMode(42, OUTPUT);  //  626 nm
    pinMode(43, OUTPUT);  //  626 nm
      pinMode(44, OUTPUT);  //  626 nm
        pinMode(45, OUTPUT);  //  626 nm
  pinMode(46, OUTPUT);  //  670 nm
    pinMode(47, OUTPUT);  //  670 nm
      pinMode(48, OUTPUT);  //  670 nm
        pinMode(49, OUTPUT);  //  670 nm
  pinMode(50, OUTPUT);  //  white nm
    pinMode(51, OUTPUT);  //  white nm
      pinMode(52, OUTPUT);  //  white nm
        pinMode(53, OUTPUT);  //  white nm
  pinMode(1, INPUT); // button on digital pin 1
}
void loop() {
  switchstate = digitalRead(1);
  if (switchstate == LOW) {
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
    digitalWrite(22, LOW);
    digitalWrite(23, LOW);
    digitalWrite(24, LOW);
    digitalWrite(25, LOW);
    digitalWrite(26, LOW);
    digitalWrite(27, LOW);
    digitalWrite(28, LOW);
    digitalWrite(29, LOW);
    digitalWrite(30, LOW);
    digitalWrite(31, LOW);
    digitalWrite(32, LOW);
    digitalWrite(33, LOW);
    digitalWrite(34, LOW);
    digitalWrite(35, LOW);
    digitalWrite(36, LOW);
    digitalWrite(37, LOW);
    digitalWrite(38, LOW);
    digitalWrite(39, LOW);
    digitalWrite(40, LOW);
    digitalWrite(41, LOW);
    digitalWrite(42, LOW);
    digitalWrite(43, LOW);
    digitalWrite(44, LOW);
    digitalWrite(45, LOW);
    digitalWrite(46, LOW);
    digitalWrite(47, LOW);
    digitalWrite(48, LOW);
    digitalWrite(49, LOW);
    digitalWrite(50, LOW);
    digitalWrite(51, LOW);
    digitalWrite(52, LOW);
    digitalWrite(53, LOW);
  }
  else {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(13, HIGH);
    digitalWrite(22, HIGH);
    digitalWrite(23, HIGH);
    digitalWrite(24, HIGH);
    digitalWrite(25, HIGH);
    digitalWrite(26, HIGH);
    digitalWrite(27, HIGH);
    digitalWrite(28, HIGH);
    digitalWrite(29, HIGH);
    digitalWrite(30, HIGH);
    digitalWrite(31, HIGH);
    digitalWrite(32, HIGH);
    digitalWrite(33, HIGH);
    digitalWrite(34, HIGH);
    digitalWrite(35, HIGH);
    digitalWrite(36, HIGH);
    digitalWrite(37, HIGH);
    digitalWrite(38, HIGH);
    digitalWrite(39, HIGH);
    digitalWrite(40, HIGH);
    digitalWrite(41, HIGH);
    digitalWrite(42, HIGH);
    digitalWrite(43, HIGH);
    digitalWrite(44, HIGH);
    digitalWrite(45, HIGH);
    digitalWrite(46, HIGH);
    digitalWrite(47, HIGH);
    digitalWrite(48, HIGH);
    digitalWrite(49, HIGH);
    digitalWrite(50, HIGH);
    digitalWrite(51, HIGH);
    digitalWrite(52, HIGH);
    digitalWrite(53, HIGH);
    delay(10000); // Wait 10 seconds
  }
}
