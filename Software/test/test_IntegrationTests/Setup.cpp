#include <Arduino.h>
#include <gmock/gmock.h>

void setup()
{
    Serial.begin(115200);

    ::testing::InitGoogleMock();
}

void loop()
{
  // Run tests
  if (RUN_ALL_TESTS())
  ;

  // sleep for 1 sec
  delay(1000);
}
