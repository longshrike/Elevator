void setup() {
  // put your setup code here, to run once:
  //buttons to call cab to respective floor
  int floor1button = 1;
  int floor2button = 2;
  int floor3button = 3;
  int floor4button = 4;

  //cab stops when floorstop sensor is triggered
  int floor1stop = 5;
  int floor2stop = 6;
  int floor3stop = 7;
  int floor4stop = 8;

  int floornum;

  pinMode(floor1button, INPUT);
  pinMode(floor2button, INPUT);
  pinMode(floor3button, INPUT);
  pinMode(floor4button, INPUT);

  pinMode(floor1stop, INPUT);
  pinMode(floor2stop, INPUT);
  pinMode(floor3stop, INPUT);
  pinMode(floor4stop, INPUT);
}

void loop() {

//find cab location
    locatecab()
    {
     for (floornum = 1; floornum <= 4; floornum++;)
      {
        if (digitalRead(floornum) == LOW)
         {
          cablocation = floornum;
         }


      }

    }
    > cablocation

    movecab(up) {
    accelerate 50 steps
      keep going until floor #switch is hit
  }

  accelerate

      decelerate

        stop
    //cab is already on desired floor
    if button floot #
    == cab location
    movecab(shake) {
    move cab a few steps up and down rapidly
  }

  if button
    floor #is < cablocation
      movecab(down) {
    }
}

