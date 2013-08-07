void Command_loop()
{
  if (Serial_data_begin_with("command"))
  {
    Command_perform(Command_cut_out(Serial_read()));
  }
}

void Command_perform(String command)
{
  boolean result = false;
  
  if (Command_has(RELAY_POMP_CODE))
  {
    result = RelayPomp_perform_command(command);
  }
  
  if (result == false)
  {
    Serial_print(String("Can't perform command " + command));
  }
}

String Command_cut_out(String command)
{
  return command;
}

boolean Command_has(String command)
{
  return true;
}
