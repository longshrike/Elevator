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
  // put your main code here, to run repeatedly:

  read buttons

      find cab location
    //cab is below desired floor
    if button floor #is
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
