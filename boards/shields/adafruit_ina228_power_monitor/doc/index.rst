.. _adafruit_ina228_power_monitor_shield:

Adafruit INA228 Power Monitor
#############################

Overview
********

The `Adafruit INA228 Power Monitor`_ rev. B features an `NXP PCF8523 Real-Time Clock/Calendar with
Battery Backup`_, an SD card interface, two user LEDs, and a prototyping area.

.. figure:: adafruit_ina228_power_monitor.jpg
   :align: center
   :alt: Adafruit INA228 Power Monitor

   Adafruit INA228 Power Monitor (Credit: Adafruit)

Requirements
************

This shield can only be used with a board which provides a configuration for STEMMA-QT connectors.

Programming
***********

Set ``--shield adafruit_ina228_power_monitor`` when you invoke ``west build``. For example:

.. zephyr-app-commands::
   :zephyr-app: tests/drivers/rtc/rtc_api
   :board: adafriuit_qt_py_rp2040
   :shield: adafruit_ina228_power_monitor
   :goals: build

.. _Adafruit INA228 Power Monitor:
   https://learn.adafruit.com/adafruit-ina228-i2c-power-monitor/
