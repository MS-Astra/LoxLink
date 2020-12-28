# LoxLink

Various implementations of Loxone Link and Loxone Tree Bus on a STM32F103VET6, which can be bought with a CAN bus, RS232 and RS485 for a bit more something between 10-25 Euro at e.g. Aliexpress. The prices seem to vary a lot, it is worth to shop around for any STM32F103 with a CAN bus.

Project for the CrossWorks for ARM 4.4 from Rowley Associates.
NOTE: To get propper ms ticks for the ctl library the function ctl_start_timer in STM32_ctl.c has to be adjusted from TEN_MS to ONE_MS.

Examples for:
- DMX Extension
- Modbus Extension
- Relay Extension
- RS232 Extension
- DI Extension
- Tree Extension with support for multiple tree devices:
  - Tree Alarm Siren
  - Tree RGBW Dimmer
  - Tree Room Comfort
  - Tree Touch


Multiple extensions and even tree devices behind multiple Tree extensions are possible.

Please read the protocol documentation at https://github.com/sarnau/Inside-The-Loxone-Miniserver for more details.
