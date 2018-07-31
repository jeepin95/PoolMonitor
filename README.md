# PoolMonitor

A Particle project named PoolMonitor, the goal of which is to monitor the status of our small above ground pool.

## Features
- Monitor pool temperature with a DS18B20 temperature sensor
- Manage relay to control fountain pump connected to coils of hose as a heater
- Pump will turn on for a short time, then off to allow the water to heat up
- Pump is only enabled during the day
- Pump can be manually turned on

### Future updates
- Support for addtional DS18B20 sensor embedded in the hose coil so that temperature difference is what turns the pump on rather than a simple timer.
- Support for inline water flow sensor to disable pump if water is not flowing to protect the pump
