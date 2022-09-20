// https://www.ascom-standards.org/COMDeveloper/DriverImpl.htm
// https://www.ascom-standards.org/Downloads/PlatDevComponents.htm
// https://ascom-standards.org/Help/Developer/html/T_ASCOM_DeviceInterface_IDomeV2.htm
// https://ascom-standards.org/Help/Developer/html/0a23ff52-a935-4cd7-a693-9e3b90f7df29.htm#!

void setup()
{
    Serial.begin(9600);
    Serial.flush();
}

void loop()
{
    Serial cmd;
    if (Serial.available() > 0)
    {
        cmd = Serial.readStringUntil('#');
        if (cmd == "move")
        {
        }
    }
}