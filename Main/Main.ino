//==========================================================================//
// Copyright 2024 - 2024 YungHua-Peng                                       //
//                                                                          //
// Licensed under the Apache License, Version 2.0 (the "License");          //
// you may not use this file except in compliance with the License.         //
// You may obtain a copy of the License at                                  //
//                                                                          //
//         http://www.apache.org/licenses/LICENSE-2.0                       //
//                                                                          //
// Unless required by applicable law or agreed to in writing, software      //
// distributed under the License is distributed on an "AS IS" BASIS,        //
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. //
// See the License for the specific language governing permissions and      //
// limitations under the License.                                           //
//==========================================================================//

#include "ConstantDefinition.h"

void LED_Blinker (int LED_Pin_Num);

void setup() {
  pinMode(LED_Pin_1, OUTPUT);
  pinMode(LED_Pin_2, OUTPUT);
  pinMode(LED_Pin_3, OUTPUT);

  digitalWrite(LED_Pin_1, LOW);
  digitalWrite(LED_Pin_2, LOW);
  digitalWrite(LED_Pin_3, LOW);
}

void loop() {
  int LED_Chosen;
  int LED_Index = 1;

  while (true) {
    switch (LED_Index) {
      case 1: 
        LED_Chosen = LED_Pin_1;
        LED_Index = 2;
        break;
      case 2:
        LED_Chosen = LED_Pin_2;
        LED_Index = 3;
        break;
      case 3:
        LED_Chosen = LED_Pin_3;
        LED_Index = 1;
        break;
    }
    LED_Blinker (LED_Chosen);
  }
}

void LED_Blinker (int LED_Pin_Num) {
  digitalWrite(LED_Pin_Num, HIGH);
  delay(500);
  digitalWrite(LED_Pin_Num, LOW);
}