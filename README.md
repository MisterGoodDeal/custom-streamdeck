# Custom Streamdeck
![enter image description here](https://i.ibb.co/6mSPCLs/20210416-173855.jpg)

## The custom Streamdeck is printed in two parts :

 1. The body that can be found in the `Body` folder.
> **Print Settings :** 
> Layer height : 0.2mm
> 
> Infill : 10%
> 
> Nozzle temperature : 200°C (392°F)
> 
> Bed temperature : 60°C (140°F)
> 
> Support : Yes
> 
> Adhesion: No
> 
> Print Speed : 50mm/s (up to 120% speed)
> 
> Initial layer speed : 20mm/s

 2. The front face that can be found une the `Front face` folder.
 > **Print Settings :** 
> Layer height : 0.2mm
> 
> Infill : 10%
> 
> Nozzle temperature : 200°C (392°F)
> 
> Bed temperature : 60°C (140°F)
> 
> Support : Yes
> 
> Adhesion: Yes
> 
> Skirt/Brim speed : 75mm/s 
> 
> Print Speed : 50mm/s
> 
> Initial layer speed : 25mm/s

## Parts
For this project you'll need some hardware :

 - [Arduino Leonardo Pro Micro](https://www.amazon.fr/KeeYees-ATmega32U4-D%C3%A9veloppement-Leonardo-Bootloader/dp/B07FQJW2KN/ref=sr_1_6?__mk_fr_FR=%C3%85M%C3%85%C5%BD%C3%95%C3%91&dchild=1&keywords=leonardo%20pro%20micro&qid=1618591420&sr=8-6)
 - [20 CherryMX switches](https://www.amazon.fr/gp/product/B08SK47VDX/ref=ppx_yo_dt_b_asin_title_o03_s00?ie=UTF8&psc=1) (switch type is up to you)
 - A 3D printer obviously, mine is a [Creality Ender 3](https://www.creality3dofficial.com/fr/collections/creality3d-eu-warehouse-in-stock/products/official-creality-ender-3-3d-printer) + [BLTouch](https://www.creality3dofficial.com/fr/collections/creality3d-eu-warehouse-in-stock/products/creality-bl-touch)
 - Some wires
 - Soldering iron + tin solder
 - Heat-shrinkable sleeve

## Electronic diagram & screw dimensions
![enter image description here](https://i.ibb.co/fGJj4tk/Adobe-Scan-16-avr-2021-1.jpg)

## Arduino code
The code can be found in the folder `custom_stream_deck_arduino` and you need to install the library `Keypad` that can be found in the folder `custom_stream_deck_arduino\Keypad` that you need to put in the folder `C:\Users\{YOUR_USERNAME}\Documents\Arduino\libraries`

## Custom keycaps
Some custom keycaps can be found in the folder `Custom keycaps`.
The keycaps has been printed with the [Elegoo Mars 2 Pro](https://www.amazon.fr/ELEGOO-Imprimante-Monochrome-dimpression-6-30inch/dp/B08F7M578H), a SLA resin printer

> **Print settings**
> Supports **NEEDED** on the stem key
> 
> The key must be printed on its back
> 
> Resolution : 0.05mm
> 
 *LycheeSlicer file provided with everything already set*
