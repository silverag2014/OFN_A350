 /*  ADBM_A350  */


#include <Wire.h>
#include <ADBM_A350.h>

const int ADDR = 0x33;

int Delta_X_Val;
int Delta_Y_Val;
int Val;

//----------------A320 Sensor pin define----------------
#define SHTDWN_PIN 2       // PIN SHTDWN connect to arduino pin 2 
#define IO_SELECT_PIN 3       // PIN IO_SELECT connect to arduino pin 3 
#define A0_PIN 4       // PIN A0 connect to arduino pin 4 
#define A1_PIN 5       // PIN A1 connect to arduino pin 5 
#define NRST_PIN 6        // PIN NRST connect to arduino pin 6
//#define MotionPIN      // PIN Motion connect to arduino pin 4
//#define OrientPIN      // PIN Orient connect to arduino pin 5
//#define SHTDWNPIN      // PIN SHTDWN connect to arduino pin 8
// SDA (data line) is on analog input pin A4, and SCL (clock line) is on analog input pin A5
unsigned char I2C_Status;

void setup()
{
  Serial.begin(9600);
  Wire.begin();

  //--------------PIN mode ------------------
  pinMode(SHTDWN_PIN, OUTPUT);
  pinMode(IO_SELECT_PIN, OUTPUT);
  pinMode(A0_PIN, OUTPUT);
  pinMode(A1_PIN, OUTPUT);
  pinMode(NRST_PIN, OUTPUT);

  Serial.println("There is A320");
  Init_A320();
}


void loop()
{

}



void Init_A320(void)
{

  //--------------Power Up----------------------
  digitalWrite(SHTDWN_PIN, LOW);
  digitalWrite(IO_SELECT_PIN, LOW);
  digitalWrite(A0_PIN, LOW);
  digitalWrite(A1_PIN, LOW);
  //delay(100);
  digitalWrite(NRST_PIN, LOW);
  delayMicroseconds(20);
  digitalWrite(NRST_PIN, HIGH);
  delay(10);
  Serial.println("Hello A320-1");

  //------------Enable I2C------------
  Wire.begin();// join i2c bus (address optional for master)
  delayMicroseconds(2);
  Wire.beginTransmission(ADDR);
  Wire.endTransmission();
  delayMicroseconds(2);
  delay(10);  

  read_register(ADDR, Product_ID);
    delay(10);
  Serial.println("Hello 4");
  //set_register(ADDR, Soft_RESET, 0x56);
  delayMicroseconds(10);
  //read_register(ADDR, Soft_RESET);

  set_register(ADDR, OFN_Engine1, 0xe4);
  set_register(ADDR, OFN_Engine2, 0xc9);

}

void set_register(int address, unsigned char reg, unsigned char val)
{
  while (I2C_Status == 1);
  Wire.beginTransmission(address);
  Wire.write(reg);
  Wire.write(val);
  Wire.endTransmission();

  while (I2C_Status == 1);
  delayMicroseconds(2);

}

void read_register(int address, unsigned char reg)
{
  while (I2C_Status == 1);
  Wire.beginTransmission(address);
  Wire.write(reg);
  Wire.endTransmission();

  Wire.requestFrom(address, 1);
  Serial.println("Hello 3");
  while (Wire.available())   // slave may send less than requested
  {
    Serial.println("Hello 44");
    Val = Wire.read(); // receive a byte as character
    Serial.println(Val, HEX);        // print the character
      Serial.println("HEE");        // print the character      
  }
  delay(10);
 while (I2C_Status == 1);  
  delayMicroseconds(2);
}
