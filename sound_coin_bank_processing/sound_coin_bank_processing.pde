import processing.serial.*;
import ddf.minim.*;

Serial myPort;
Minim minim;
AudioPlayer sound;

void setup(){
  minim = new Minim(this);
  sound = minim.loadFile("coin.wav");
  myPort = new Serial(this, "COM1", 115200);
}

void draw(){
  if(myPort.available()>0){
    String val = myPort.readStringUntil('\n');
    if(val!=null){
      val = trim(val);
      if(Double.parseDouble(val) == 1){ 
        if(!sound.isPlaying()){
            sound.rewind();
            sound.play();
        }
      }
    } 
  }
}
