#include <DHT.h>
DHT dht(18,DHT22);

void setup()
{
  Serial.begin(115200);
  dht.begin();
  Serial.println("DHT is ready");
}

void loop()
{
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.print(" °C Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");

  delay(1000);
}
