// This #include statement was automatically added by the Particle IDE.
#include <blynk.h>

#define BLYNK_PRINT Serial
#define BLYNK_MAX_SENDBYTES 256 //this lets u send 256 bytes vs default 128


// Button attached to pin D2
const int buttonPin = D2;

// create this string particle messaging
String lightMode;


// Blynk:  
// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
//char auth[] = "5b123fb086e44c75bf83d0266783b45a";
char auth[] = "aad113f6ec594a71a975c3a1fd4628ad";

// variables for softwareDebounce() function 
// debounceTime defines the number of milliseconds that must pass between
// button presses. Adjust as necessary if getting erroneous button presses
#define debounceTime 100 // 100ms debounce time;
unsigned int lastPressTime = 0; // keeps track of the last time a button was pressed


// counter to keep track of button presses
// used in the loop() function to determine what msgs to Blynk.notify()
int counter = 0;

void setup() 
{
    Serial.begin(9600);
    Blynk.begin(auth);
    pinMode(buttonPin, INPUT_PULLUP); // the INPUT_PULLUP relieves you of needing to wire a resistor to your button
    attachInterrupt(buttonPin, buttonPressed, RISING); // trigger buttonPressed when RISING event happens at D2
    
    
    
    Particle.subscribe("rob-sarah-physcomp-midterm-42", myHandler);
}



void loop()
{
    Blynk.run();
    delay(10);  
    
    
    // uses https://www.arduino.cc/en/Reference/SwitchCase
    // equivalent to a bunch of if/else statements but more efficient to code
    switch (counter) {
        
        case 0:
            Serial.println("Waiting for button press");
            break;
        
        case 1:
            //do something when counter equals 1
            Serial.println("Button is pressed.");
            Blynk.notify("Hi, I’m a BlackBox.");
            
            Particle.publish("rob-sarah-physcomp-midterm-42","button pressed for the first time");
            break;
        
        case 2:
            //do something when counter equals 2
            Serial.println("Button is pressed.");
            Blynk.notify("I weigh 13.5 oz.");
            
            Particle.publish("rob-sarah-physcomp-midterm-42","button pressed for the second time");
            break;
        
        case 3:
            //do something when counter equals 3
            Serial.println("Button is pressed.");
            Blynk.notify("I contain a Photon RedBoard by Particle.io and a Self-Adhesive Breadboard from SparkFun Electronics in Niwot, Colorado, USA.");
            
            Particle.publish("rob-sarah-physcomp-midterm-42","button pressed for the third time");
            break;
            
        case 4:
            //do something when counter equals 3
            Serial.println("Button is pressed.");
            Blynk.notify("I also contain one Red Tactile Button, one 330 Ohm Carbon Film Resistor, four 160 mm Jumper Wires, and a 9V battery by Rayovac and connected through a two-channel power supply.");
            
            Particle.publish("rob-sarah-physcomp-midterm-42","button pressed for the fourth time");
            break;
            
        case 5:
            //do something when counter equals 3
            Serial.println("Button is pressed.");
            Blynk.notify("My four 160 mm Jumper Wires are each made of a stranded copper alloy with gold-plated connector pins each encased in molded plastic.");
            
            Particle.publish("rob-sarah-physcomp-midterm-42","button pressed for the fifth time");
            break;    
    
        case 6:
            //do something when counter equals 3
            Serial.println("Button is pressed.");
            Blynk.notify("Most copper comes from mines in Chile, Peru, Mexico, and Indonesia.");
            
            Particle.publish("rob-sarah-physcomp-midterm-42","button pressed for the sixth time");
            break;

        case 7:
            //do something when counter equals 3
            Serial.println("Button is pressed.");
            Blynk.notify("My Red Tactile Button contains a molded plastic base held down by an aluminium veneer with two molded plastic mechanical parts, as well as a red mold plastic cap.");
            
            Particle.publish("rob-sarah-physcomp-midterm-42","button pressed for the seventh time");
            break;
    
        case 8:
            //do something when counter equals 3
            Serial.println("Button is pressed.");
            Blynk.notify("Most plastics are made from crude oil which is heated and distilled into something called naphtha, which is then heated and molded into polymers based on its purpose.");
            
            Particle.publish("rob-sarah-physcomp-midterm-42","button pressed for the eighth time");
            break;

        case 9:
            //do something when counter equals 3
            Serial.println("Button is pressed.");
            Blynk.notify("My Carbon Film Resistor is made of a carbon track wrapped around ceramic and a nickel alloy rod designed and for use in small voltage electronics.");
            
            Particle.publish("rob-sarah-physcomp-midterm-42","button pressed for the ninth time");
            break;

        case 10:
            //do something when counter equals 3
            Serial.println("Button is pressed.");
            Blynk.notify("Most raw carbon is mined as graphite from India, Mexico, Sri Lanka, Korea and Madagascar.");
            
            Particle.publish("rob-sarah-physcomp-midterm-42","button pressed for the tenth time");
            break;

        case 11:
            //do something when counter equals 3
            Serial.println("Button is pressed.");
            Blynk.notify("Most nickel is mined and later smelted in countries like Russia, Canada, New Caledonia, Australia, Indonesia, Cuba, China, South Africa, Dominican Republic, Botswana, Colombia, Greece and Brazil.");
            
            Particle.publish("rob-sarah-physcomp-midterm-42","button pressed for the eleventh time");
            break;

        case 12:
            //do something when counter equals 3
            Serial.println("Button is pressed.");
            Blynk.notify("My 9V 6LF22 battery by Rayovac contains six individual 1.5V LR61 cells with an alkaline chemistry made up of nickel-cadmium, nickel-metal hydride and lithium-ion. It was made in Malaysia.");
            
            Particle.publish("rob-sarah-physcomp-midterm-42","button pressed for the twelfth time");
            break;

        case 13:
            //do something when counter equals 3
            Serial.println("Button is pressed.");
            Blynk.notify("The wire connecting the battery to the Photon RedBoard is a stranded copper alloy coated in YDPU2/8 PVC tubing. It was made in China.");
            
            Particle.publish("rob-sarah-physcomp-midterm-42","button pressed for the thirteenth time");
            break;

        case 14:
            //do something when counter equals 3
            Serial.println("Button is pressed.");
            Blynk.notify("My outer casing is made of a polyamide Nylon and 3D printed on a Ultimaker 2 in the Innovation Co-Lab Studio at Duke University in Durham, North Carolina, USA.");
            
            Particle.publish("rob-sarah-physcomp-midterm-42","button pressed for the fourteenth time");
            break;
        
         case 15:
            //do something when counter equals 3
            Serial.println("Button is pressed.");
            Blynk.notify("It was 3D printed using a process called Fused Deposition Modeling and was printed using an open-source model based on the Apple TV created by StudioPieters in the Netherlands and published on the site thingiverse.com on Aug 11, 2017.");
            
            Particle.publish("rob-sarah-physcomp-midterm-42","button pressed for the fifteenth time");
            break;

        case 16:
            //do something when counter equals 3
            Serial.println("Button is pressed.");
            Blynk.notify("It was painted using Krylon Midnight Sky satin spray paint designed for plastics, metals, and brick. It contains acetone, propane, butane, acetates, Ethyl 3-Ethoxypropionate and Xylene and is extremely flammable.");
            
            Particle.publish("rob-sarah-physcomp-midterm-42","button pressed for the sixteenth time");
            break;

         case 17:
            //do something when counter equals 3
            Serial.println("Button is pressed.");
            Blynk.notify("The Photon RedBoard by Particle.io includes a Particle P1 Wi-Fi Module, which is made of a Broadcom BCM43362 Wi-Fi chip with 802.11b/g/n Wi-Fi and an integrated PCB antenna.");
            
            Particle.publish("rob-sarah-physcomp-midterm-42","button pressed for the seventeenth time");
            break;
        
        case 18:
            //do something when counter equals 3
            Serial.println("Button is pressed.");
            Blynk.notify("The Photon RedBoard is powered by a 120Mhz ARM Cortex M3 STM32F205RGY6 from STMicroelectronics based in Geneva, Switzerland.");
            
            Particle.publish("rob-sarah-physcomp-midterm-42","button pressed for the eighteenth time");
            break;

        case 19:
            //do something when counter equals 3
            Serial.println("Button is pressed.");
            Blynk.notify("The ARM Cortex M3 on the Photon RedBoard contains 1MB of flash memory and 128KB of random access memory, as well as 1MB external SPI flash memory (MX25L8006E)");
            
            Particle.publish("rob-sarah-physcomp-midterm-42","button pressed for the nineteenth time");
            break;
        
        case 20:
            //do something when counter equals 3
            Serial.println("Button is pressed.");
            Blynk.notify("I also contain a 84 x 53.3 x 8.3mm White Solderless Breadboard made from ABS plastic with phosphor bronze nickel plated spring clips. It was manufactured by Kondson Electronics in Ningbo, Zhejiang, China.");
            
            Particle.publish("rob-sarah-physcomp-midterm-42","button pressed for the twentieth time");
            break;

        case 21:
            //do something when counter equals 3
            Serial.println("Button is pressed.");
            Blynk.notify("The SparkFun Redboard communicates with Particle.io, a private network for their internet-connected hardware.");
            
            Particle.publish("rob-sarah-physcomp-midterm-42","button pressed for the twenty-first time");
            break;
            
        case 22:
            //do something when counter equals 3
            Serial.println("Button is pressed.");
            Blynk.notify("Particle is owned by Heroku and hosts its data on servers owned by Amazon Web Services and sells marketing data to Salesforce.");
            
            Particle.publish("rob-sarah-physcomp-midterm-42","button pressed for the twenty-second time");
            break;
            
        case 23:
            //do something when counter equals 3
            Serial.println("Button is pressed.");
            Blynk.notify("Amazon Web Services houses data in high-volume servers located in Virginia, Ohio, California, Oregon, Mumbai, Seoul, Singapore, Sydney, Tokyo, Canada, Beijing, Frankfurt, Ireland, London, and São Paulo.");
            
            Particle.publish("rob-sarah-physcomp-midterm-42","button pressed for the twenty-third time");
            break;

        case 24:
            //do something when counter equals 3
            Serial.println("Button is pressed.");
            Blynk.notify("Salesforce maintains servers in the Americas, Asia, and Europe.");
            
            Particle.publish("rob-sarah-physcomp-midterm-42","button pressed for the twenty-fourth time");
            break;
            
        case 25:
            //do something when counter equals 3
            Serial.println("Button is pressed.");
            Blynk.notify("Particle’s IDE system also communicates with Yahoo Analytics, Google AdSense, Facebook Signal, LinkedIn Ads, New Relic, Intercom, and other platforms for analytics.");
            
            Particle.publish("rob-sarah-physcomp-midterm-42","button pressed for the twenty-fifth time");
            break;
            
        case 26:
            //do something when counter equals 3
            Serial.println("Button is pressed.");
            Blynk.notify("Yahoo houses data in high-volume servers located in Quincy, WA, Omaha, NE, Chicago, IL Singapore and Lockport, NY.");
            
            Particle.publish("rob-sarah-physcomp-midterm-42","button pressed for the twenty-sixth time");
            break;

        case 27:
            //do something when counter equals 3
            Serial.println("Button is pressed.");
            Blynk.notify("Google houses data in high-volume servers in Quilicura, Chile, Saint-Ghislain, Belgium, Hamina, Finland, Dublin, Ireland, Eemshaven, Netherlands, Jurong West, Singapore, Changhua County, Taiwan, as well as throughout the United States.");
            
            Particle.publish("rob-sarah-physcomp-midterm-42","button pressed for the twenty-seventh time");
            break;
            
        case 28:
            //do something when counter equals 3
            Serial.println("Button is pressed.");
            Blynk.notify("Though known to lease servers with third-party companies like Coresite, DuPont Fabros and Digital Realty Trust in the US, Facebook houses much of its own data in high-volume servers in Sweden, Ireland, as well as throughout the United States.");
            
            Particle.publish("rob-sarah-physcomp-midterm-42","button pressed for the twenty-eigth time");
            break;
            
        case 29:
            //do something when counter equals 3
            Serial.println("Button is pressed.");
            Blynk.notify("LinkedIn houses data in high-volume servers in Chicago, Portland, Los Angeles, and Singapore.");
            
            Particle.publish("rob-sarah-physcomp-midterm-42","button pressed for the twenty-ninth time");
            break;
    
    }
    
}

// function called when button pressed; increments counter
// but attempts to prevent bouncing by only allowing it if debounceTime (100ms) has passed
void buttonPressed()
{
    if (softwareDebounce())
    {
        // update the count of button presses
        counter++;
        
    }
}


// softwareDebounce keeps our button from "bouncing" around. When a button is
// pressed, the signal tends to fluctuate rapidly between high and low.
// This function filters out high-frequency button presses, limiting
// them to debounceTime ms.
bool softwareDebounce()
{
    // If it's been at least debounceTime ms since the last press
    if (millis() > (debounceTime + lastPressTime))
    {
        lastPressTime = millis(); // update lastButtonPush
        return true;
    }
    // Otherwise return false.
    return false;
}

// add these functions @ end of program 

void myHandler(const char *event, const char *data) {
  lightMode = data;

  if (lightMode == "blue") {
    RGB.color(0, 0, 255);
    delay(1000);
    Particle.publish("rob-sarah-physcomp-midterm-42","blue has changed");
    } else if (lightMode == "red") {
    RGB.color(255, 0, 0);
    delay(1000);
    Particle.publish("rob-sarah-physcomp-midterm-42","red has changed");
    } else if (lightMode == "green") {
    RGB.color(0, 0, 255);
    delay(1000);
    Particle.publish("rob-sarah-physcomp-midterm-42","green has changed");
    
  }
}
