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

void setup() {
  pinMode(LED_Pin_1_A, OUTPUT);
  pinMode(LED_Pin_2_A, OUTPUT);
  pinMode(LED_Pin_3_A, OUTPUT);

  analogWrite(LED_Pin_1_A, 0);
  analogWrite(LED_Pin_2_A, 0);
  analogWrite(LED_Pin_3_A, 0);
}

void loop() {
  int Lighten_LED_1 = 0;
  int Lighten_LED_2 = 60;
  int Lighten_LED_3 = 90;

  while (true) {
    analogWrite(LED_Pin_1_A, Lighten_LED_1);
    analogWrite(LED_Pin_2_A, Lighten_LED_2);
    analogWrite(LED_Pin_3_A, Lighten_LED_3);
    
    Lighten_LED_1 += 15;
    Lighten_LED_2 += 15;
    Lighten_LED_3 += 15;

    if (Lighten_LED_1 > 255)
      Lighten_LED_1 = 0;
    if (Lighten_LED_2 > 255)
      Lighten_LED_2 = 0;
    if (Lighten_LED_3 > 255)
      Lighten_LED_3 = 0;
    
    delay(200);
  }
}
