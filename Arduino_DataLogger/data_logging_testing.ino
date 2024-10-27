int x = 0;
int row = 0;
void setup () {
Serial.begin (9600); // Opens serial port, sets data rate to 9600 bps
Serial.println ( "clearData");
Serial.println ( "LABEL, Time, x, sin (x)");
}

void loop () {
Serial.print ( "DATE, TIME,"); Serial.print (x); Serial.print ( ","); Serial.println (sin (x * PI / 180));
row ++;
x ++;
if (row> 360)
{
row = 0;
Serial.println ( "ROW, SET, 2");
}
delay (100);
}
