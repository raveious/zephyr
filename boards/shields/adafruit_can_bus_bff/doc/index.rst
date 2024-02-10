.. _adafruit_can_bus_bff:

Adafruit CAN Bus BFF
####################

Zephyr supports a couple of different shields carrying the Microchip `MCP2515`_
Stand-Alone CAN Controller with SPI Interface.

Overview
--------

The DFRobot CAN BUS shield supports the Microchip MCP2515 stand-alone CAN
controller and JTA1050 high speed CAN transceiver. The shield has an Arduino
Uno R3 compatible hardware interface.

.. figure:: adafruit_can_bus_bff.jpg
   :align: center
   :alt: adafruit_can_bus_bff

     Adafruit CAN Bus BFF (Image courtesy of Adafruit)

Hardware
--------

- MCP2515

        - Stand-Alone CAN 2.0B Controller
        - Up to 1Mb/s baud rate
        - Standard and extended data and remote frames
        - 3x Tx Buffers
        - 2x Rx Buffers
        - 6x 29-bit Filters
        - 2x 29-bit Masks
        - Interrupt output
        - One shot mode
        - High speed SPI interface (10 MHz)

- TJA1050

        - Fully compatible with the “ISO 11898” standard
        - High speed (up to 1 Mbaud)

- Connectivity

        - Industrial standard DB9 terminal (CAN)
        - Screw terminals (CAN)
        - Integrated MicroSD socket for data storage (SPI)
        - Arduino Uno R3 compatible (SPI)

+-------+-----------------------+---------------------------+
| Name  | Function              | Usage                     |
+=======+=======================+===========================+
| A0    | None                  |                           |
+-------+-----------------------+---------------------------+
| A1    | None                  |                           |
+-------+-----------------------+---------------------------+
| A2    | None                  |                           |
+-------+-----------------------+---------------------------+
| A3    | None                  |                           |
+-------+-----------------------+---------------------------+
| A4    | None                  |                           |
+-------+-----------------------+---------------------------+
| A5    | None                  |                           |
+-------+-----------------------+---------------------------+
| D0    | RX                    | Ext. header only          |
+-------+-----------------------+---------------------------+
| D1    | TX                    | Ext. header only          |
+-------+-----------------------+---------------------------+
| D2    | GPIO_ACTIVE_LOW       | MCP2515 - INT             |
+-------+-----------------------+---------------------------+
| D3    | None                  |                           |
+-------+-----------------------+---------------------------+
| D4    | SPI-CS                | MicroSD                   |
+-------+-----------------------+---------------------------+
| D5    | None                  |                           |
+-------+-----------------------+---------------------------+
| D6    | None                  |                           |
+-------+-----------------------+---------------------------+
| D7    | None                  |                           |
+-------+-----------------------+---------------------------+
| D8    | None                  |                           |
+-------+-----------------------+---------------------------+
| D9    | None                  |                           |
+-------+-----------------------+---------------------------+
| D10   | SPI-CS                | MCP2515                   |
+-------+-----------------------+---------------------------+
| D11   | SPI-MOSI              | MCP2515 / MicroSD         |
+-------+-----------------------+---------------------------+
| D12   | SPI-MISO              | MCP2515 / MicroSD         |
+-------+-----------------------+---------------------------+
| D13   | SPI-CLK               | MCP2515 / MicroSD         |
+-------+-----------------------+---------------------------+
| D14   | I2C-SDA               | Ext. header only          |
+-------+-----------------------+---------------------------+
| D15   | I2C_SCL               | Ext. header only          |
+-------+-----------------------+---------------------------+


- Power Supply

        - 3.3V ~ 5V

- Components

        - Power switch
        - Power LED
        - RX0BF LED
        - RX1BF LED

For more information about the DFRobot CAN-BUS V2.0 shield:

- `DFRobot Website`_
- `DFRobot CAN BUS Shield V2.0 schematic`_
- `MCP2515 Datasheet`_
- `TJA1050 Datasheet`_
