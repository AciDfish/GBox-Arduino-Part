String Serial_data;

void Serial_setup()
{
  Serial.begin(9600);
}

void Serial_loop()
{
  Serial_check_and_read_data();
}

void Serial_check_and_read_data()
{
  if (Serial.available())
  {
    Serial_reset_serial_data();
    
    while (Serial.available())
    {
      Serial_data = Serial_data + Serial.read();
    }
  }
}

void Serial_reset_serial_data()
{
  Serial_data = "";
}

String Serial_read()
{
  String result = Serial_peek();
  Serial_reset_serial_data();
  
  return result;
}

String Serial_peek()
{
  return Serial_data;
}

boolean Serial_data_begin_with(String text)
{
  String data = Serial_peek();
  String first_word = data.substring(0, text.length());
  
  if (first_word == text)
  {
    return true;
  }
  
  return false;
}

void Serial_print(String text)
{
  Serial.println(text);
}
