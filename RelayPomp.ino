#define RELAY_POMP_PIN 53
const String RELAY_POMP_CODE = "pomp";

void RelayPomp_setup()
{
  pinMode(RELAY_POMP_PIN, OUTPUT);
  RelayPomp_off();
}

void RelayPomp_on()
{
  digitalWrite(RELAY_POMP_PIN, HIGH);
}

void RelayPomp_off()
{
  digitalWrite(RELAY_POMP_PIN, LOW);
}

boolean RelayPomp_perform_command(String command)
{
  boolean result = false;
  String  relay_pomp_code = RELAY_POMP_CODE;

  String test = RELAY_POMP_CODE + (String)" on";
  
  return result;
}

