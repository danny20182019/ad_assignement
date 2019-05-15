#include <cs50.h>
#include <math.h>
#include "helpers.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
                                  // Danny

int duration(string fraction){
    if(fraction[0 == '1']){
        if(fraction[2] == '8')
        {
            return 1;
        }
        else if (fraction[2] == '4'){
            return 2;
        }
        else if(fraction[2] == '2'){
            return 4;
        }
        else if(fraction[2] == '1'){
            return 8;
        }
    }
    else if(fraction[0] == '3' && fraction[2] == '8'){
        return 3;
    }
    else{
        return 0;
    }
    return 0;
}

int frequency(string note){
    int octave = note [strlen(note) - 1 ] ;
    octave -= 48;

    double frequen = 0.0;



    switch(note[0]){
        case 'C' :
        frequen  = 440.0 / (pow(2.0 , (9.0 / 12.0 )));
        break;
        case 'D' :
        frequen  = 440.0 / (pow(2.0 , (7.0 / 12.0 )));
        break;
        case 'E' :
        frequen  = 440.0 / (pow(2.0 , (5.0 / 12.0 )));
        break;
       case 'F' :
        frequen  = 440.0 / (pow(2.0 , (4.0 / 12.0 )));
        break;
        case 'G' :
        frequen  = 440.0 / (pow(2.0 , (2.0 / 12.0 )));
        break;
        case 'A' :
        frequen = 440.0;
        break;
        case 'B' :
        frequen  = 440.0 * (pow(2.0 , (2.0 / 12.0 )));
        break;
        default :
        return 0;
    }
if(octave > 4){
    for(int i =0; i< octave -4; i++){
        frequen *= 2.0;
    }

}
else if (octave < 4){
    for(int i= 0; i<4 - octave; i++){
        frequen /= 2.0;
    }
}
if(note[1] == 'b'){
  frequen  /= (pow (2.0 , (1.0 /12.0)));
}
else if (note[1] == '#'){
    frequen  *= (pow (2.0 , (1.0 /12.0)));
}
int ret = round (frequen);
return ret;
}



bool is_rest (string s){
    if(strlen(s) == 0){
        return true;
    }
    else{
    return false;
    }
}