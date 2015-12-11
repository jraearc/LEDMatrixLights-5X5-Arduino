//*****************************************************************************
//
// Used playtune library for Arduino (files for library included on sent code)
//
// by L. Shustek
// 31 Jan 2011, initial release.
// 27 Feb 2011, new score data
// 6 April 2015; change for compatibility with Arduino IDE v1.6.x
//
//*****************************************************************************

// CS 21 Lab Project
// Created by:      Jahziel Rae Arceo
//                  Kenneth Velasquez
//                  Paolo Mari Mendioro

// Connections:
// Pins 1-2: Positive to 8-ohm speaker (with 56-100 ohm resistor on each line)
// Pins 3-7: Cathode columns in order
// Pins 9-13: Anode rows in order

#include <Playtune.h>

// Playtune bytestream for file "Overworld.mid" created by MIDITONES V1.7 on Thu Dec 10 02:24:08 2015
// command line: ./miditones -s1 -t2 Overworld 
const byte PROGMEM score [] = {
0,3, 0x90,62, 0x91,70, 1,146, 0x80, 0x81, 0,0, 0x90,46, 0,131, 0x80, 0,0, 0x90,46, 
0,126, 0x80, 0,0, 0x90,46, 0,132, 0x80, 0,0, 0x90,46, 1,4, 0x91,62, 0,130, 0x81, 
0x80, 0,0, 0x90,62, 0x91,70, 0,130, 0x80, 0x81, 0,0, 0x90,62, 0x91,70, 0,126, 0x80, 0x81, 
0,0, 0x90,62, 0x91,70, 0,131, 0x81, 0,1, 0x91,60, 0,5, 0x80, 0,138, 0,7, 0x81, 
0,120, 0x90,60, 0x91,68, 0,131, 0x80, 0x81, 0,0, 0x90,60, 0x91,70, 0,131, 0,0, 0,126, 
0,0, 0,132, 0x80, 0x81, 0,0, 0x90,44, 1,4, 0x91,60, 0,130, 0x81, 0x80, 0,0, 0x90,60, 
0x91,70, 0,130, 0x80, 0x81, 0,0, 0x90,60, 0x91,70, 0,126, 0x80, 0x81, 0,0, 0x90,60, 0x91,70, 
0,131, 0x81, 0,1, 0x91,61, 0,5, 0x80, 0,138, 0,7, 0x81, 0,120, 0x90,61, 0x91,68, 
0,131, 0x80, 0x81, 0,0, 0x90,61, 0x91,70, 0,131, 0,0, 0,126, 0,0, 0,132, 0x80, 
0x81, 0,0, 0x90,42, 1,4, 0x91,61, 0,130, 0x81, 0x80, 0,0, 0x90,61, 0x91,70, 0,130, 
0x80, 0x81, 0,0, 0x90,61, 0x91,70, 0,126, 0x80, 0x81, 0,0, 0x90,61, 0x91,70, 0,131, 0x80, 
0x81, 0,1, 0x90,61, 0x91,70, 0,5, 0,191, 0x80, 0,11, 0x81, 0,0, 0x90,57, 0x91,65, 
0,95, 0x80, 0x81, 0,0, 0x90,57, 0x91,65, 0,99, 0x80, 0x81, 0,0, 0x90,57, 0x91,65, 0,194, 
0x80, 0x81, 0,0, 0x90,57, 0x91,65, 0,95, 0x80, 0x81, 0,0, 0x90,57, 0x91,65, 0,100, 0x80, 
0x81, 0,0, 0x90,57, 0x91,65, 0,196, 0x80, 0x81, 0,0, 0x90,57, 0x91,65, 0,95, 0x80, 0x81, 
0,0, 0x90,57, 0x91,65, 0,98, 0x80, 0x81, 0,0, 0x90,57, 0x91,65, 0,182, 0,11, 0x80, 
0x81, 0,0, 0x90,57, 0x91,65, 0,183, 0,11, 0x81, 0,0, 0,1, 0x91,70, 0,10, 0x80, 
1,138, 0x81, 0,0, 0x90,65, 0x91,62, 0,131, 0x81, 0,0, 0x91,62, 0,118, 0x81, 0,8, 
0x91,60, 0,124, 0x81, 0,8, 0x91,62, 1,35, 0x80, 0,0, 0x90,70, 0,98, 0x80, 0x81, 0,0, 
0x90,70, 0x91,62, 0,92, 0x80, 0x81, 0,6, 0x90,72, 0x91,63, 0,89, 0x80, 0x81, 0,6, 0x90,74, 
0x91,65, 0,89, 0x80, 0x81, 0,6, 0x90,75, 0x91,67, 0,93, 0x80, 0x81, 0,5, 0,1, 0x90,77, 
0x91,68, 1,48, 0x81, 0,0, 0x91,70, 0,99, 0x81, 0,0, 0x91,70, 0,93, 0x81, 0,6, 
0x91,72, 0,31, 0,0, 0,57, 0x81, 0,6, 0x91,74, 0,55, 0,8, 0,25, 0x81, 0,6, 
0x91,75, 0,92, 0,1, 0x81, 0,6, 0x91,77, 0,196, 0x80, 0x81, 0,0, 0x90,77, 0,194, 
0x80, 0,0, 0x90,77, 0x91,68, 0,122, 0x80, 0x81, 0,8, 0x90,78, 0x91,70, 0,119, 0x80, 0x81, 
0,8, 0x90,80, 0x91,72, 0,123, 0x80, 0x81, 0,7, 0,1, 0x90,82, 0x91,73, 1,48, 0x81, 
0,0, 0x91,66, 0,99, 0x81, 0,0, 0x91,66, 0,93, 0x81, 0,6, 0x91,68, 0,31, 0,0, 
0,57, 0x81, 0,6, 0x91,70, 0,55, 0,8, 0,25, 0x81, 0,6, 0x91,72, 0,92, 0,1, 
0x81, 0,6, 0x91,73, 0,132, 0x80, 0,0, 0x90,82, 0,62, 0x81, 0,0, 0x91,73, 0,63, 
0x80, 0,0, 0x90,82, 0,130, 0x80, 0x81, 0,0, 0x90,82, 0x91,73, 0,122, 0x80, 0x81, 0,8, 
0x90,80, 0x91,72, 0,119, 0x80, 0x81, 0,8, 0x90,78, 0x91,70, 0,123, 0x80, 0x81, 0,7, 0,1, 
0x90,80, 0x91,73, 0,136, 0x80, 0x81, 0,136, 0x90,78, 0x91,68, 0,123, 0x80, 0,7, 0x81, 0,0, 
0x90,77, 0x91,68, 0,131, 0x81, 0,0, 0x91,68, 0,118, 0x81, 0,8, 0x91,66, 0,124, 0x81, 
0,8, 0x91,68, 1,3, 0x81, 0,0, 0x91,68, 0,130, 0x80, 0x81, 0,0, 0x90,77, 0x91,68, 
0,122, 0x81, 0,8, 0x91,66, 0,119, 0x81, 0,8, 0x91,68, 0,123, 0x81, 0,7, 0x80, 0,1, 
0x90,75, 0x91,66, 0,208, 0x80, 0x81, 0,0, 0x90,75, 0x91,66, 0,89, 0x80, 0x81, 0,6, 0x90,77, 
0x91,65, 0,93, 0x80, 0x81, 0,5, 0,0, 0x90,78, 0x91,66, 0,131, 0,0, 0,62, 0x81, 
0,0, 0x91,66, 0,55, 0,8, 0,25, 0x81, 0,6, 0x91,68, 0,92, 0,1, 0x81, 0,6, 
0x91,70, 1,134, 0x80, 0x81, 0,0, 0x90,77, 0x91,68, 0,182, 0x80, 0x81, 0,11, 0x90,75, 0x91,66, 
0,183, 0x80, 0x81, 0,11, 0,1, 0x90,73, 0x91,65, 0,208, 0x80, 0x81, 0,0, 0x90,73, 0x91,65, 
0,89, 0x80, 0x81, 0,6, 0x90,75, 0x91,63, 0,93, 0x80, 0x81, 0,5, 0,0, 0x90,77, 0x91,65, 
0,131, 0,0, 0,62, 0x81, 0,0, 0x91,65, 0,55, 0,8, 0,25, 0x81, 0,6, 0x91,66, 
0,92, 0,1, 0x81, 0,6, 0x91,68, 1,134, 0x80, 0x81, 0,0, 0x90,75, 0x91,66, 0,182, 
0x80, 0x81, 0,11, 0x90,73, 0x91,65, 0,183, 0x80, 0x81, 0,11, 0,1, 0x90,72, 0x91,64, 0,208, 
0x80, 0,0, 0x90,72, 0,89, 0x80, 0,6, 0x90,74, 0,93, 0x80, 0,5, 0x81, 0,0, 0x90,76, 
0x91,64, 0,131, 0,0, 0,118, 0,8, 0,31, 0x81, 0,31, 0x91,65, 0,62, 0,1, 
0x81, 0,6, 0x91,67, 0,90, 0,99, 0,7, 0x81, 0,0, 0x91,67, 0,90, 0x81, 0,1, 
0,4, 0x91,69, 0,94, 0x81, 0,1, 0,4, 0x80, 0,0, 0x90,79, 0x91,70, 0,96, 0,91, 
0x81, 0,10, 0,1, 0x91,72, 0,100, 0,90, 0x81, 0,12, 0x80, 0,2, 0x90,69, 0x91,77, 
0,100, 0,99, 0x80, 0,11, 0x81, 0,0, 0x90,57, 0x91,65, 0,95, 0x80, 0x81, 0,0, 0x90,57, 
0x91,65, 0,99, 0x80, 0x81, 0,0, 0x90,57, 0x91,65, 0,194, 0x80, 0x81, 0,0, 0x90,57, 0x91,65, 
0,95, 0x80, 0x81, 0,0, 0x90,57, 0x91,65, 0,100, 0x80, 0x81, 0,0, 0x90,57, 0x91,65, 0,196, 
0x80, 0x81, 0,0, 0x90,57, 0x91,65, 0,95, 0x80, 0x81, 0,0, 0x90,57, 0x91,65, 0,98, 0x80, 
0x81, 0,0, 0x90,57, 0x91,65, 0,182, 0,11, 0x80, 0x81, 0,0, 0x90,57, 0x91,65, 0,183, 
0,11, 0x81, 0,1, 0x91,70, 0,10, 0x80, 1,138, 0x81, 0,0, 0x90,65, 0x91,62, 0,131, 
0x81, 0,0, 0x91,62, 0,118, 0x81, 0,8, 0x91,60, 0,124, 0x81, 0,8, 0x91,62, 1,35, 
0x80, 0,0, 0x90,70, 0,98, 0x80, 0x81, 0,0, 0x90,70, 0x91,62, 0,92, 0x80, 0x81, 0,6, 
0x90,72, 0x91,63, 0,89, 0x80, 0x81, 0,6, 0x90,74, 0x91,65, 0,89, 0x80, 0x81, 0,6, 0x90,75, 
0x91,67, 0,93, 0x80, 0x81, 0,5, 0,1, 0x90,77, 0x91,68, 1,48, 0x81, 0,0, 0x91,70, 
0,99, 0x81, 0,0, 0x91,70, 0,93, 0x81, 0,6, 0x91,72, 0,31, 0,0, 0,57, 0x81, 
0,6, 0x91,74, 0,55, 0,8, 0,25, 0x81, 0,6, 0x91,75, 0,92, 0,1, 0x81, 0,6, 
0x91,77, 0,196, 0x80, 0x81, 0,0, 0x90,77, 0,194, 0x80, 0,0, 0x90,77, 0x91,68, 0,122, 
0x80, 0x81, 0,8, 0x90,78, 0x91,70, 0,119, 0x80, 0x81, 0,8, 0x90,80, 0x91,72, 0,123, 0x80, 
0x81, 0,7, 0,1, 0x90,73, 0x91,82, 1,148, 0,0, 0,131, 0,0, 0,118, 0,8, 
0,124, 0,8, 1,134, 0x80, 0x81, 0,0, 0x90,76, 0x91,85, 1,133, 0x81, 0,1, 0x91,75, 
0,13, 0x80, 0,154, 0,67, 0x81, 0,169, 0,0, 0x90,72, 0x91,81, 0,131, 0,0, 0,118, 
0,8, 0,124, 0,8, 1,134, 0x80, 0x81, 0,0, 0x90,69, 0x91,77, 1,133, 0x80, 0x81, 0,1, 
0x90,71, 0x91,78, 0,136, 0,8, 0,119, 0,8, 0,123, 0,8, 0,123, 0,8, 0,118, 
0,8, 0,124, 0,7, 0x80, 0x81, 0,0, 0x90,64, 0,90, 0,64, 0x80, 0,35, 0,100, 
0,100, 0,4, 0x90,73, 0x91,82, 0,96, 0,101, 0,102, 0,102, 0x81, 0,2, 0x91,72, 
0,14, 0x80, 0,86, 0,70, 0,67, 0x81, 0,170, 0x90,69, 0x91,77, 0,131, 0,0, 0,126, 
0,0, 0,132, 0,0, 0,154, 0,236, 0x80, 0x81, 0,0, 0x90,69, 0x91,77, 1,133, 0x80, 
0x81, 0,1, 0x90,71, 0x91,78, 0,136, 0,8, 0,119, 0,8, 0,123, 0,8, 0,123, 
0,8, 0,118, 0,8, 0,124, 0,7, 0x80, 0x81, 0,0, 0x90,64, 0,90, 0,64, 0x80, 
0,35, 0,100, 0,100, 0,4, 0x90,73, 0x91,82, 0,96, 0,101, 0,102, 0,102, 0x81, 
0,2, 0x91,72, 0,14, 0x80, 0,86, 0,70, 0,67, 0x81, 0,170, 0x90,69, 0x91,77, 0,131, 
0,0, 0,126, 0,0, 0,132, 0,0, 0,154, 0,236, 0x80, 0x81, 0,0, 0x90,69, 0x91,74, 
1,133, 0x80, 0x81, 0,1, 0x90,66, 0x91,75, 1,148, 0,0, 0,131, 0,0, 0,118, 0,8, 
0,124, 0,7, 0x80, 0x81, 0,0, 0x90,47, 1,134, 0x80, 0,0, 0x90,71, 0x91,78, 1,133, 
0x80, 0x81, 0,1, 0x90,70, 0x91,77, 1,148, 0x80, 0x81, 0,0, 0x90,65, 0x91,73, 0,131, 0,0, 
0,118, 0,8, 0,124, 0,8, 1,134, 0x80, 0x81, 0,0, 0x90,61, 0x91,70, 1,133, 0x80, 
0x81, 0,1, 0x90,72, 0x91,64, 0,208, 0x80, 0,0, 0x90,72, 0,89, 0x80, 0,6, 0x90,74, 
0,93, 0x80, 0,5, 0x81, 0,0, 0x90,76, 0x91,64, 0,131, 0,0, 0,118, 0,8, 0,31, 
0x81, 0,31, 0x91,65, 0,62, 0,1, 0x81, 0,6, 0x91,67, 0,196, 0x81, 0,0, 0x91,67, 
0,89, 0x81, 0,6, 0x91,69, 0,92, 0x81, 0,5, 0x80, 0,0, 0x90,79, 0x91,70, 0,182, 
0x81, 0,11, 0x91,72, 0,183, 0x81, 0,11, 0x80, 0,1, 0x90,69, 0x91,77, 0,196, 0x80, 0,11, 
0x81, 0,0, 0x90,57, 0x91,65, 0,95, 0x80, 0x81, 0,0, 0x90,57, 0x91,65, 0,99, 0x80, 0x81, 
0,0, 0x90,57, 0x91,65, 0,194, 0x80, 0x81, 0,0, 0x90,57, 0x91,65, 0,95, 0x80, 0x81, 0,0, 
0x90,57, 0x91,65, 0,100, 0x80, 0x81, 0,0, 0x90,57, 0x91,65, 0,196, 0x80, 0x81, 0,0, 0x90,57, 
0x91,65, 0,95, 0x80, 0x81, 0,0, 0x90,57, 0x91,65, 0,98, 0x80, 0x81, 0,0, 0x90,57, 0x91,65, 
0,182, 0,11, 0x80, 0x81, 0,0, 0x90,57, 0x91,65, 0,183, 0,11, 0,1, 0,10, 0x80, 
0x81, 1,138, 0,0, 0x90,65, 0x91,62, 0,131, 0x81, 0,0, 0x91,62, 0,118, 0x81, 0,8, 
0x91,60, 0,124, 0x81, 0,8, 0x91,62, 1,35, 0x80, 0,0, 0x90,70, 0,98, 0x80, 0x81, 0,0, 
0x90,70, 0x91,62, 0,92, 0x80, 0x81, 0,6, 0x90,72, 0x91,63, 0,89, 0x80, 0x81, 0,6, 0x90,74, 
0x91,65, 0,89, 0x80, 0x81, 0,6, 0x90,75, 0x91,67, 0,93, 0x80, 0x81, 0,5, 0,1, 0x90,77, 
0x91,68, 1,48, 0x81, 0,0, 0x91,70, 0,99, 0x81, 0,0, 0x91,70, 0,93, 0x81, 0,6, 
0x91,72, 0,31, 0,0, 0,57, 0x81, 0,6, 0x91,74, 0,55, 0,8, 0,25, 0x81, 0,6, 
0x91,75, 0,92, 0,1, 0x81, 0,6, 0x91,77, 0,196, 0x80, 0x81, 0,0, 0x90,77, 0,194, 
0x80, 0,0, 0x90,77, 0x91,68, 0,122, 0x80, 0x81, 0,8, 0x90,78, 0x91,70, 0,119, 0x80, 0x81, 
0,8, 0x90,80, 0x91,72, 0,123, 0x80, 0x81, 0,7, 0,1, 0x90,82, 0x91,73, 1,48, 0x81, 
0,0, 0x91,66, 0,99, 0x81, 0,0, 0x91,66, 0,93, 0x81, 0,6, 0x91,68, 0,31, 0,0, 
0,57, 0x81, 0,6, 0x91,70, 0,55, 0,8, 0,25, 0x81, 0,6, 0x91,72, 0,92, 0,1, 
0x81, 0,6, 0x91,73, 0,132, 0x80, 0,0, 0x90,82, 0,62, 0x81, 0,0, 0x91,73, 0,63, 
0x80, 0,0, 0x90,82, 0,130, 0x80, 0x81, 0,0, 0x90,82, 0x91,73, 0,122, 0x80, 0x81, 0,8, 
0x90,80, 0x91,72, 0,119, 0x80, 0x81, 0,8, 0x90,78, 0x91,70, 0,123, 0x80, 0x81, 0,7, 0,1, 
0x90,80, 0x91,73, 0,136, 0x80, 0x81, 0,136, 0x90,78, 0x91,68, 0,123, 0x80, 0,7, 0x81, 0,0, 
0x90,77, 0x91,68, 0,131, 0x81, 0,0, 0x91,68, 0,118, 0x81, 0,8, 0x91,66, 0,124, 0x81, 
0,8, 0x91,68, 1,3, 0x81, 0,0, 0x91,68, 0,130, 0x80, 0x81, 0,0, 0x90,77, 0x91,68, 
0,122, 0x81, 0,8, 0x91,66, 0,119, 0x81, 0,8, 0x91,68, 0,123, 0x81, 0,7, 0x80, 0,1, 
0x90,75, 0x91,66, 0,208, 0x80, 0x81, 0,0, 0x90,75, 0x91,66, 0,89, 0x80, 0x81, 0,6, 0x90,77, 
0x91,65, 0,93, 0x80, 0x81, 0,5, 0,0, 0x90,78, 0x91,66, 0,131, 0,0, 0,62, 0x81, 
0,0, 0x91,66, 0,55, 0,8, 0,25, 0x81, 0,6, 0x91,68, 0,92, 0,1, 0x81, 0,6, 
0x91,70, 1,134, 0x80, 0x81, 0,0, 0x90,77, 0x91,68, 0,182, 0x80, 0x81, 0,11, 0x90,75, 0x91,66, 
0,183, 0x80, 0x81, 0,11, 0,1, 0x90,73, 0x91,65, 0,208, 0x80, 0x81, 0,0, 0x90,73, 0x91,65, 
0,89, 0x80, 0x81, 0,6, 0x90,75, 0x91,63, 0,93, 0x80, 0x81, 0,5, 0,0, 0x90,77, 0x91,65, 
0,131, 0,0, 0,62, 0x81, 0,0, 0x91,65, 0,55, 0,8, 0,25, 0x81, 0,6, 0x91,66, 
0,92, 0,1, 0x81, 0,6, 0x91,68, 1,134, 0x80, 0x81, 0,0, 0x90,75, 0x91,66, 0,182, 
0x80, 0x81, 0,11, 0x90,73, 0x91,65, 0,183, 0x80, 0x81, 0,11, 0,1, 0x90,72, 0x91,64, 0,208, 
0x80, 0,0, 0x90,72, 0,89, 0x80, 0,6, 0x90,74, 0,93, 0x80, 0,5, 0x81, 0,0, 0x90,76, 
0x91,64, 0,131, 0,0, 0,118, 0,8, 0,31, 0x81, 0,31, 0x91,65, 0,62, 0,1, 
0x81, 0,6, 0x91,67, 0,90, 0,99, 0,7, 0x81, 0,0, 0x91,67, 0,90, 0x81, 0,1, 
0,4, 0x91,69, 0,94, 0x81, 0,1, 0,4, 0x80, 0,0, 0x90,79, 0x91,70, 0,96, 0,91, 
0x81, 0,10, 0,1, 0x91,72, 0,100, 0,90, 0x81, 0,12, 0x80, 0,2, 0x90,69, 0x91,77, 
0,100, 0,99, 0x80, 0,11, 0x81, 0,0, 0x90,57, 0x91,65, 0,95, 0x80, 0x81, 0,0, 0x90,57, 
0x91,65, 0,99, 0x80, 0x81, 0,0, 0x90,57, 0x91,65, 0,194, 0x80, 0x81, 0,0, 0x90,57, 0x91,65, 
0,95, 0x80, 0x81, 0,0, 0x90,57, 0x91,65, 0,100, 0x80, 0x81, 0,0, 0x90,57, 0x91,65, 0,196, 
0x80, 0x81, 0,0, 0x90,57, 0x91,65, 0,95, 0x80, 0x81, 0,0, 0x90,57, 0x91,65, 0,98, 0x80, 
0x81, 0,0, 0x90,57, 0x91,65, 0,182, 0,11, 0x80, 0x81, 0,0, 0x90,57, 0x91,65, 0,183, 
0,11, 0x81, 0,1, 0x91,70, 0,10, 0x80, 1,138, 0x81, 0,0, 0x90,65, 0x91,62, 0,131, 
0x81, 0,0, 0x91,62, 0,118, 0x81, 0,8, 0x91,60, 0,124, 0x81, 0,8, 0x91,62, 1,35, 
0x80, 0,0, 0x90,70, 0,98, 0x80, 0x81, 0,0, 0x90,70, 0x91,62, 0,92, 0x80, 0x81, 0,6, 
0x90,72, 0x91,63, 0,89, 0x80, 0x81, 0,6, 0x90,74, 0x91,65, 0,89, 0x80, 0x81, 0,6, 0x90,75, 
0x91,67, 0,93, 0x80, 0x81, 0,5, 0,1, 0x90,77, 0x91,68, 1,48, 0x81, 0,0, 0x91,70, 
0,99, 0x81, 0,0, 0x91,70, 0,93, 0x81, 0,6, 0x91,72, 0,31, 0,0, 0,57, 0x81, 
0,6, 0x91,74, 0,55, 0,8, 0,25, 0x81, 0,6, 0x91,75, 0,92, 0,1, 0x81, 0,6, 
0x91,77, 0,196, 0x80, 0x81, 0,0, 0x90,77, 0,194, 0x80, 0,0, 0x90,77, 0x91,68, 0,122, 
0x80, 0x81, 0,8, 0x90,78, 0x91,70, 0,119, 0x80, 0x81, 0,8, 0x90,80, 0x91,72, 0,123, 0x80, 
0x81, 0,7, 0,1, 0x90,73, 0x91,82, 1,148, 0,0, 0,131, 0,0, 0,118, 0,8, 
0,124, 0,8, 1,134, 0x80, 0x81, 0,0, 0x90,76, 0x91,85, 1,133, 0x81, 0,1, 0x91,75, 
0,13, 0x80, 0,154, 0,67, 0x81, 0,169, 0,0, 0x90,72, 0x91,81, 0,131, 0,0, 0,118, 
0,8, 0,124, 0,8, 1,134, 0x80, 0x81, 0,0, 0x90,69, 0x91,77, 1,133, 0x80, 0x81, 0,1, 
0x90,71, 0x91,78, 0,136, 0,8, 0,119, 0,8, 0,123, 0,8, 0,123, 0,8, 0,118, 
0,8, 0,124, 0,7, 0x80, 0x81, 0,0, 0x90,64, 0,90, 0,64, 0x80, 0,35, 0,100, 
0,100, 0,4, 0x90,73, 0x91,82, 0,96, 0,101, 0,102, 0,102, 0x81, 0,2, 0x91,72, 
0,14, 0x80, 0,86, 0,70, 0,67, 0x81, 0,170, 0x90,69, 0x91,77, 0,131, 0,0, 0,126, 
0,0, 0,132, 0,0, 0,154, 0,236, 0x80, 0x81, 0,0, 0x90,69, 0x91,77, 1,133, 0x80, 
0x81, 0,1, 0x90,71, 0x91,78, 0,136, 0,8, 0,119, 0,8, 0,123, 0,8, 0,123, 
0,8, 0,118, 0,8, 0,124, 0,7, 0x80, 0x81, 0,0, 0x90,64, 0,90, 0,64, 0x80, 
0,35, 0,100, 0,100, 0,4, 0x90,73, 0x91,82, 0,96, 0,101, 0,102, 0,102, 0x81, 
0,2, 0x91,72, 0,14, 0x80, 0,86, 0,70, 0,67, 0x81, 0,170, 0x90,69, 0x91,77, 0,131, 
0,0, 0,126, 0,0, 0,132, 0,0, 0,154, 0,236, 0x80, 0x81, 0,0, 0x90,69, 0x91,74, 
1,133, 0x80, 0x81, 0,1, 0x90,66, 0x91,75, 1,148, 0,0, 0,131, 0,0, 0,118, 0,8, 
0,124, 0,7, 0x80, 0x81, 0,0, 0x90,47, 1,134, 0x80, 0,0, 0x90,71, 0x91,78, 1,133, 
0x80, 0x81, 0,1, 0x90,70, 0x91,77, 1,148, 0x80, 0x81, 0,0, 0x90,65, 0x91,73, 0,131, 0,0, 
0,118, 0,8, 0,124, 0,8, 1,134, 0x80, 0x81, 0,0, 0x90,61, 0x91,70, 1,133, 0x80, 
0x81, 0,1, 0x90,72, 0x91,64, 0,208, 0x80, 0,0, 0x90,72, 0,89, 0x80, 0,6, 0x90,74, 
0,93, 0x80, 0,5, 0x81, 0,0, 0x90,76, 0x91,64, 0,131, 0,0, 0,118, 0,8, 0,31, 
0x81, 0,31, 0x91,65, 0,62, 0,1, 0x81, 0,6, 0x91,67, 0,196, 0x81, 0,0, 0x91,67, 
0,89, 0x81, 0,6, 0x91,69, 0,92, 0x81, 0,5, 0x80, 0,0, 0x90,79, 0x91,70, 0,182, 
0x81, 0,11, 0x91,72, 0,183, 0x81, 0,11, 0x80, 0,1, 0x90,69, 0x91,77, 0,196, 0x80, 0,11, 
0x81, 0,0, 0x90,57, 0x91,65, 0,95, 0x80, 0x81, 0,0, 0x90,57, 0x91,65, 0,99, 0x80, 0x81, 
0,0, 0x90,57, 0x91,65, 0,194, 0x80, 0x81, 0,0, 0x90,57, 0x91,65, 0,95, 0x80, 0x81, 0,0, 
0x90,57, 0x91,65, 0,100, 0x80, 0x81, 0,0, 0x90,57, 0x91,65, 0,196, 0x80, 0x81, 0,0, 0x90,57, 
0x91,65, 0,95, 0x80, 0x81, 0,0, 0x90,57, 0x91,65, 0,98, 0x80, 0x81, 0,0, 0x90,57, 0x91,65, 
0,182, 0,11, 0x80, 0x81, 0,0, 0x90,57, 0x91,65, 0,183, 0,11, 0,1, 0,10, 0x80, 
0x81, 1,138, 0,0, 0x90,65, 0x91,62, 0,131, 0x81, 0,0, 0x91,62, 0,118, 0x81, 0,8, 
0x91,60, 0,124, 0x81, 0,8, 0x91,62, 1,35, 0x80, 0,0, 0x90,70, 0,98, 0x80, 0x81, 0,0, 
0x90,70, 0x91,62, 0,92, 0x80, 0x81, 0,6, 0x90,72, 0x91,63, 0,89, 0x80, 0x81, 0,6, 0x90,74, 
0x91,65, 0,89, 0x80, 0x81, 0,6, 0x90,75, 0x91,67, 0,93, 0x80, 0x81, 0,5, 0,1, 0x90,77, 
0x91,68, 1,48, 0x81, 0,0, 0x91,70, 0,99, 0x81, 0,0, 0x91,70, 0,93, 0x81, 0,6, 
0x91,72, 0,31, 0,0, 0,57, 0x81, 0,6, 0x91,74, 0,55, 0,8, 0,25, 0x81, 0,6, 
0x91,75, 0,92, 0,1, 0x81, 0,6, 0x91,77, 0,196, 0x80, 0x81, 0,0, 0x90,77, 0,194, 
0x80, 0,0, 0x90,77, 0x91,68, 0,122, 0x80, 0x81, 0,8, 0x90,78, 0x91,70, 0,119, 0x80, 0x81, 
0,8, 0x90,80, 0x91,72, 0,123, 0x80, 0x81, 0,7, 0,1, 0x90,82, 0x91,73, 1,48, 0x81, 
0,0, 0x91,66, 0,99, 0x81, 0,0, 0x91,66, 0,93, 0x81, 0,6, 0x91,68, 0,31, 0,0, 
0,57, 0x81, 0,6, 0x91,70, 0,55, 0,8, 0,25, 0x81, 0,6, 0x91,72, 0,92, 0,1, 
0x81, 0,6, 0x91,73, 0,132, 0x80, 0,0, 0x90,82, 0,62, 0x81, 0,0, 0x91,73, 0,63, 
0x80, 0,0, 0x90,82, 0,130, 0x80, 0x81, 0,0, 0x90,82, 0x91,73, 0,122, 0x80, 0x81, 0,8, 
0x90,80, 0x91,72, 0,119, 0x80, 0x81, 0,8, 0x90,78, 0x91,70, 0,123, 0x80, 0x81, 0,7, 0,1, 
0x90,80, 0x91,73, 0,136, 0x80, 0x81, 0,136, 0x90,78, 0x91,68, 0,123, 0x80, 0,7, 0x81, 0,0, 
0x90,77, 0x91,68, 0,131, 0x81, 0,0, 0x91,68, 0,118, 0x81, 0,8, 0x91,66, 0,124, 0x81, 
0,8, 0x91,68, 1,3, 0x81, 0,0, 0x91,68, 0,130, 0x80, 0x81, 0,0, 0x90,77, 0x91,68, 
0,122, 0x81, 0,8, 0x91,66, 0,119, 0x81, 0,8, 0x91,68, 0,123, 0x81, 0,7, 0x80, 0,1, 
0x90,75, 0x91,66, 0,208, 0x80, 0x81, 0,0, 0x90,75, 0x91,66, 0,89, 0x80, 0x81, 0,6, 0x90,77, 
0x91,65, 0,93, 0x80, 0x81, 0,5, 0,0, 0x90,78, 0x91,66, 0,131, 0,0, 0,62, 0x81, 
0,0, 0x91,66, 0,55, 0,8, 0,25, 0x81, 0,6, 0x91,68, 0,92, 0,1, 0x81, 0,6, 
0x91,70, 1,134, 0x80, 0x81, 0,0, 0x90,77, 0x91,68, 0,182, 0x80, 0x81, 0,11, 0x90,75, 0x91,66, 
0,183, 0x80, 0x81, 0,11, 0,1, 0x90,73, 0x91,65, 0,208, 0x80, 0x81, 0,0, 0x90,73, 0x91,65, 
0,89, 0x80, 0x81, 0,6, 0x90,75, 0x91,63, 0,93, 0x80, 0x81, 0,5, 0,0, 0x90,77, 0x91,65, 
0,131, 0,0, 0,62, 0x81, 0,0, 0x91,65, 0,55, 0,8, 0,25, 0x81, 0,6, 0x91,66, 
0,92, 0,1, 0x81, 0,6, 0x91,68, 1,134, 0x80, 0x81, 0,0, 0x90,75, 0x91,66, 0,182, 
0x80, 0x81, 0,11, 0x90,73, 0x91,65, 0,183, 0x80, 0x81, 0,11, 0,1, 0x90,72, 0x91,64, 0,208, 
0x80, 0,0, 0x90,72, 0,89, 0x80, 0,6, 0x90,74, 0,93, 0x80, 0,5, 0x81, 0,0, 0x90,76, 
0x91,64, 0,131, 0,0, 0,118, 0,8, 0,31, 0x81, 0,31, 0x91,65, 0,62, 0,1, 
0x81, 0,6, 0x91,67, 0,90, 0,99, 0,7, 0x81, 0,0, 0x91,67, 0,90, 0x81, 0,1, 
0,4, 0x91,69, 0,94, 0x81, 0,1, 0,4, 0x80, 0,0, 0x90,79, 0x91,70, 0,96, 0,91, 
0x81, 0,10, 0,1, 0x91,72, 0,100, 0,90, 0x81, 0,12, 0x80, 0,2, 0x90,69, 0x91,77, 
0,100, 0,99, 0x80, 0,11, 0x81, 0,0, 0x90,57, 0x91,65, 0,95, 0x80, 0x81, 0,0, 0x90,57, 
0x91,65, 0,99, 0x80, 0x81, 0,0, 0x90,57, 0x91,65, 0,194, 0x80, 0x81, 0,0, 0x90,57, 0x91,65, 
0,95, 0x80, 0x81, 0,0, 0x90,57, 0x91,65, 0,100, 0x80, 0x81, 0,0, 0x90,57, 0x91,65, 0,196, 
0x80, 0x81, 0,0, 0x90,57, 0x91,65, 0,95, 0x80, 0x81, 0,0, 0x90,57, 0x91,65, 0,98, 0x80, 
0x81, 0,0, 0x90,57, 0x91,65, 0,182, 0,11, 0x80, 0x81, 0,0, 0x90,57, 0x91,65, 0,183, 
0,11, 0x81, 0,1, 0x91,70, 0,10, 0x80, 1,138, 0x81, 0,0, 0x90,65, 0x91,62, 0,131, 
0x81, 0,0, 0x91,62, 0,118, 0x81, 0,8, 0x91,60, 0,124, 0x81, 0,8, 0x91,62, 1,35, 
0x80, 0,0, 0x90,70, 0,98, 0x80, 0x81, 0,0, 0x90,70, 0x91,62, 0,92, 0x80, 0x81, 0,6, 
0x90,72, 0x91,63, 0,89, 0x80, 0x81, 0,6, 0x90,74, 0x91,65, 0,89, 0x80, 0x81, 0,6, 0x90,75, 
0x91,67, 0,93, 0x80, 0x81, 0,5, 0,1, 0x90,77, 0x91,68, 1,48, 0x81, 0,0, 0x91,70, 
0,99, 0x81, 0,0, 0x91,70, 0,93, 0x81, 0,6, 0x91,72, 0,31, 0,0, 0,57, 0x81, 
0,6, 0x91,74, 0,55, 0,8, 0,25, 0x81, 0,6, 0x91,75, 0,92, 0,1, 0x81, 0,6, 
0x91,77, 0,196, 0x80, 0x81, 0,0, 0x90,77, 0,194, 0x80, 0,0, 0x90,77, 0x91,68, 0,122, 
0x80, 0x81, 0,8, 0x90,78, 0x91,70, 0,119, 0x80, 0x81, 0,8, 0x90,80, 0x91,72, 0,123, 0x80, 
0x81, 0,7, 0,1, 0x90,73, 0x91,82, 1,148, 0,0, 0,131, 0,0, 0,118, 0,8, 
0,124, 0,8, 1,134, 0x80, 0x81, 0,0, 0x90,76, 0x91,85, 1,133, 0x81, 0,1, 0x91,75, 
0,13, 0x80, 0,154, 0,67, 0x81, 0,169, 0,0, 0x90,72, 0x91,81, 0,131, 0,0, 0,118, 
0,8, 0,124, 0,8, 1,134, 0x80, 0x81, 0,0, 0x90,69, 0x91,77, 1,133, 0x80, 0x81, 0,1, 
0x90,71, 0x91,78, 0,136, 0,8, 0,119, 0,8, 0,123, 0,8, 0,123, 0,8, 0,118, 
0,8, 0,124, 0,7, 0x80, 0x81, 0,0, 0x90,64, 0,90, 0,64, 0x80, 0,35, 0,100, 
0,100, 0,4, 0x90,73, 0x91,82, 0,96, 0,101, 0,102, 0,102, 0x81, 0,2, 0x91,72, 
0,14, 0x80, 0,86, 0,70, 0,67, 0x81, 0,170, 0x90,69, 0x91,77, 0,131, 0,0, 0,126, 
0,0, 0,132, 0,0, 0,154, 0,236, 0x80, 0x81, 0,0, 0x90,69, 0x91,77, 1,133, 0x80, 
0x81, 0,1, 0x90,71, 0x91,78, 0,136, 0,8, 0,119, 0,8, 0,123, 0,8, 0,123, 
0,8, 0,118, 0,8, 0,124, 0,7, 0x80, 0x81, 0,0, 0x90,64, 0,90, 0,64, 0x80, 
0,35, 0,100, 0,100, 0,4, 0x90,73, 0x91,82, 0,96, 0,101, 0,102, 0,102, 0x81, 
0,2, 0x91,72, 0,14, 0x80, 0,86, 0,70, 0,67, 0x81, 0,170, 0x90,69, 0x91,77, 0,131, 
0,0, 0,126, 0,0, 0,132, 0,0, 0,154, 0,236, 0x80, 0x81, 0,0, 0x90,69, 0x91,74, 
1,133, 0x80, 0x81, 0,1, 0x90,66, 0x91,75, 1,148, 0,0, 0,131, 0,0, 0,118, 0,8, 
0,124, 0,7, 0x80, 0x81, 0,0, 0x90,47, 1,134, 0x80, 0,0, 0x90,71, 0x91,78, 1,133, 
0x80, 0x81, 0,1, 0x90,70, 0x91,77, 1,148, 0x80, 0x81, 0,0, 0x90,65, 0x91,73, 0,131, 0,0, 
0,118, 0,8, 0,124, 0,8, 1,134, 0x80, 0x81, 0,0, 0x90,61, 0x91,70, 1,133, 0x80, 
0x81, 0,1, 0x90,72, 0x91,64, 0,208, 0x80, 0,0, 0x90,72, 0,89, 0x80, 0,6, 0x90,74, 
0,93, 0x80, 0,5, 0x81, 0,0, 0x90,76, 0x91,64, 0,131, 0,0, 0,118, 0,8, 0,31, 
0x81, 0,31, 0x91,65, 0,62, 0,1, 0x81, 0,6, 0x91,67, 0,196, 0x81, 0,0, 0x91,67, 
0,89, 0x81, 0,6, 0x91,69, 0,92, 0x81, 0,5, 0x80, 0,0, 0x90,79, 0x91,70, 0,182, 
0x81, 0,11, 0x91,72, 0,183, 0x81, 0,11, 0x80, 0,1, 0x90,69, 0x91,77, 0,196, 0x80, 0,11, 
0x81, 0,0, 0x90,57, 0x91,65, 0,95, 0x80, 0x81, 0,0, 0x90,57, 0x91,65, 0,99, 0x80, 0x81, 
0,0, 0x90,57, 0x91,65, 0,194, 0x80, 0x81, 0,0, 0x90,57, 0x91,65, 0,95, 0x80, 0x81, 0,0, 
0x90,57, 0x91,65, 0,100, 0x80, 0x81, 0,0, 0x90,57, 0x91,65, 0,196, 0x80, 0x81, 0,0, 0x90,57, 
0x91,65, 0,95, 0x80, 0x81, 0,0, 0x90,57, 0x91,65, 0,98, 0x80, 0x81, 0,0, 0x90,57, 0x91,65, 
0,182, 0,11, 0x80, 0x81, 0,0, 0x90,57, 0x91,65, 0,183, 0,23, 0x80, 0x81, 0xf0};
// This score contains 5128 bytes, and 2 tone generators are used.
// 390 notes had to be skipped.

Playtune pt;
int nloop;

void setup() {
  
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);

  // Enable all 3 NANO timers for notes that are output on digital pins 10, 11, and 12.
  // Those pins should be wired to 500-ohm resistors, the other ends of which should be connected together
  // to one terminal of an 8-ohm speaker.  The other terminal of the speaker should be connected to ground.  
  // No other hardware is needed!
 
  pt.tune_initchan (1);
  pt.tune_initchan (2);
  
  sequence12(500);
  //if (!pt.tune_playing) {   /* wait here until playing stops */
  pt.tune_playscore (score);  /* start playing */
  //}
  sequence2(200);
  sequence2(200);
  sequence3(200);
  sequence3(200);
  sequence14(350);
  marquee(250);
  sequence14(250);
  sequence14(150);
  sequence14(50);
  sequence14(30);
  sequence8(100);
  sequence8(100);
  sequence8(100);
  sequence1(300);
  sequence10(150);
  sequence10(150);
  sequence5(300);
  sequence2(300);
  sequence9(250);
  sequence9(250);
  sequence3(200);
  sequence3(200);
  sequence8(100);
  sequence8(100);
  sequence8(100);
  sequence4(150);
  sequence6(300);
  sequence7(300);
  sequence9(250);
  sequence9(250);
  sequence3(200);
  sequence3(200);
  sequence8(100);
  sequence8(100);
  sequence8(100);
  sequence4(150);
  sequence6(300);
  sequence7(300);
  sequence5(300);
  sequence2(300);
  sequence9(250);
  sequence9(250);
  sequence3(200);
  sequence3(200);
  sequence8(100);
  sequence8(100);
  sequence8(100);
  sequence4(150);
  sequence4(150);
  sequence5(150);
  sequence5(150);
  sequence14(350);
  sequence14(350);
  sequence3(200);
  sequence3(200);
  sequence9(250);
  sequence9(250);
  sequence3(200);
  sequence3(200);
  sequence4(150);
  sequence6(300);
  sequence7(300);
  sequence5(300);
  sequence2(300);
  sequence4(150);
  sequence14(250);
  sequence14(150);
  sequence14(50);
  sequence14(30);
}

void loop () {

}

void sequence1(int t_delay) {
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  delay(t_delay);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  delay(t_delay);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  delay(t_delay);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  delay(t_delay);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  delay(t_delay);
  //end of sequence 1
}

void sequence2(int t_delay) {
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  delay(t_delay);
  for(nloop = 1; nloop <= t_delay * 2; nloop++) {
    turnOffAllLights();
    if(nloop % 3 == 0) {
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(12, HIGH);
    }
    else if(nloop % 2 == 0) {
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(12, HIGH);
      //digitalWrite(13, LOW);
    }
    else {
      //digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      //digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      //digitalWrite(13, LOW);
    }
    delayMicroseconds(500);
  }
  for(nloop = 1; nloop <= t_delay * 2; nloop++) {
    turnOffAllLights();
    if(nloop % 2 == 0) {
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(9, HIGH);
      //digitalWrite(10, LOW);
      //digitalWrite(11, LOW);
      //digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    else {
      digitalWrite(3, LOW);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
      //digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      //digitalWrite(13, LOW);
    }
    delayMicroseconds(500);
  }
  turnOffAllLights();
  //end of sequence 2
}

void sequence3(int t_delay) {
  for(nloop = 1; nloop <= t_delay * 2; nloop++) {
    turnOffAllLights();
    if(nloop % 2 == 0) {
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(9, HIGH);
      //digitalWrite(10, LOW);
      //digitalWrite(11, LOW);
      //digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    else {
      digitalWrite(3, LOW);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
      //digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      //digitalWrite(13, LOW);
    }
    delayMicroseconds(500);
  }
  for(nloop = 1; nloop <= t_delay * 2; nloop++) {
    turnOffAllLights();
    if(nloop % 3 == 0) {
      //digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      //digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
      //digitalWrite(13, LOW);
    }
    else if(nloop % 2 == 0) {
      //digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      //digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
      //digitalWrite(13, LOW);
    }
    else {
      //digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      //digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      //digitalWrite(13, LOW);
    }
    delayMicroseconds(500);
  }
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  delay(t_delay);
  turnOffAllLights();
  //end of sequence 3
}

void sequence4(int t_delay) {
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  delay(t_delay);
  for(nloop = 1; nloop <= t_delay * 2; nloop++) {
    turnOffAllLights();
    if(nloop % 4 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
      //digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      //digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
      //digitalWrite(13, LOW);
    }
    else if(nloop % 3 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      //digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      //digitalWrite(10, LOW);
      //digitalWrite(11, LOW);
      //digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    else if(nloop % 2 == 0) {
      digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      //digitalWrite(10, LOW);
      //digitalWrite(11, LOW);
      //digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    else {
      digitalWrite(3, LOW);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      //digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
      //digitalWrite(13, LOW);
    }
    delayMicroseconds(500);
  }
  for(nloop = 1; nloop <= t_delay * 2; nloop++) {
    turnOffAllLights();
    if(nloop % 5 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
      //digitalWrite(9, LOW);
      //digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      //digitalWrite(12, LOW);
      //digitalWrite(13, LOW);
    }
    else if(nloop % 4 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      //digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
      //digitalWrite(13, LOW);
    }
    else if(nloop % 3 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      //digitalWrite(10, LOW);
      //digitalWrite(11, LOW);
      //digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    else if(nloop % 2 == 0) {
      //digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      //digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
      //digitalWrite(13, LOW);
    }
    else {
      digitalWrite(3, LOW);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      //digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      //digitalWrite(12, LOW);
      //digitalWrite(13, LOW);
    }
    delayMicroseconds(500);
  }
  for(nloop = 1; nloop <= t_delay * 2; nloop++) {
    turnOffAllLights();
    if(nloop % 3 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      //digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      //digitalWrite(12, LOW);
      //digitalWrite(13, LOW);
    }
    else if(nloop % 2 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      //digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
      //digitalWrite(13, LOW);
    }
    else {
      //digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      //digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      //digitalWrite(12, LOW);
      //digitalWrite(13, LOW);
    }
    delayMicroseconds(500);
  }
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  delay(t_delay);
  turnOffAllLights();
  //end of sequence 4
}

void sequence5(int t_delay) {
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  delay(t_delay);
  for(nloop = 1; nloop <= t_delay * 2; nloop++) {
    turnOffAllLights();
    if(nloop % 3 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      //digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      //digitalWrite(12, LOW);
      //digitalWrite(13, LOW);
    }
    else if(nloop % 2 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      //digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
      //digitalWrite(13, LOW);
    }
    else {
      //digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      //digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      //digitalWrite(12, LOW);
      //digitalWrite(13, LOW);
    }
    delayMicroseconds(500);
  }
  for(nloop = 1; nloop <= t_delay * 2; nloop++) {
    turnOffAllLights();
    if(nloop % 5 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
      //digitalWrite(9, LOW);
      //digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      //digitalWrite(12, LOW);
      //digitalWrite(13, LOW);
    }
    else if(nloop % 4 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      //digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
      //digitalWrite(13, LOW);
    }
    else if(nloop % 3 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      //digitalWrite(10, LOW);
      //digitalWrite(11, LOW);
      //digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    else if(nloop % 2 == 0) {
      //digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      //digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
      //digitalWrite(13, LOW);
    }
    else {
      digitalWrite(3, LOW);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      //digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      //digitalWrite(12, LOW);
      //digitalWrite(13, LOW);
    }
    delayMicroseconds(500);
  }
  for(nloop = 1; nloop <= t_delay * 2; nloop++) {
    turnOffAllLights();
    if(nloop % 4 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
      //digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      //digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
      //digitalWrite(13, LOW);
    }
    else if(nloop % 3 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      //digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      //digitalWrite(10, LOW);
      //digitalWrite(11, LOW);
      //digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    else if(nloop % 2 == 0) {
      digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      //digitalWrite(10, LOW);
      //digitalWrite(11, LOW);
      //digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    else {
      digitalWrite(3, LOW);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      //digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
      //digitalWrite(13, LOW);
    }
    delayMicroseconds(500);
  }
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  delay(t_delay);
  turnOffAllLights();
  //end of sequence 5
}

void sequence6(int t_delay) {
  for(nloop = 1; nloop <= t_delay * 2; nloop++) {
    turnOffAllLights();
    if(nloop % 5 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
      digitalWrite(9, HIGH);
      //digitalWrite(10, LOW);
      //digitalWrite(11, LOW);
      //digitalWrite(12, LOW);
      //digitalWrite(13, LOW);
    }
    else if(nloop % 4 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      //digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      //digitalWrite(10, LOW);
      //digitalWrite(11, LOW);
      //digitalWrite(12, LOW);
      //digitalWrite(13, LOW);
    }
    else if(nloop % 3 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      //digitalWrite(10, LOW);
      //digitalWrite(11, LOW);
      //digitalWrite(12, LOW);
      //digitalWrite(13, LOW);
    }
    else if(nloop % 2 == 0) {
      //digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      //digitalWrite(10, LOW);
      //digitalWrite(11, LOW);
      //digitalWrite(12, LOW);
      //digitalWrite(13, LOW);
    }
    else {
      digitalWrite(3, LOW);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
    }
    delayMicroseconds(500);
  }
  for(nloop = 1; nloop <= t_delay * 2; nloop++) {
    turnOffAllLights();
    if(nloop % 5 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
      //digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      //digitalWrite(11, LOW);
      //digitalWrite(12, LOW);
      //digitalWrite(13, LOW);
    }
    else if(nloop % 4 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      //digitalWrite(11, LOW);
      //digitalWrite(12, LOW);
      //digitalWrite(13, LOW);
    }
    else if(nloop % 3 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      //digitalWrite(11, LOW);
      //digitalWrite(12, LOW);
      //digitalWrite(13, LOW);
    }
    else if(nloop % 2 == 0) {
      //digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
    }
    else {
      digitalWrite(3, LOW);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      //digitalWrite(11, LOW);
      //digitalWrite(12, LOW);
      //digitalWrite(13, LOW);
    }
    delayMicroseconds(500);
  }
  for(nloop = 1; nloop <= t_delay * 2; nloop++) {
    turnOffAllLights();
    if(nloop % 5 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
      //digitalWrite(9, LOW);
      //digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      //digitalWrite(12, LOW);
      //digitalWrite(13, LOW);
    }
    else if(nloop % 4 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      //digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      //digitalWrite(12, LOW);
      //digitalWrite(13, LOW);
    }
    else if(nloop % 3 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
    }
    else if(nloop % 2 == 0) {
      //digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      //digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      //digitalWrite(12, LOW);
      //digitalWrite(13, LOW);
    }
    else {
      digitalWrite(3, LOW);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      //digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      //digitalWrite(12, LOW);
      //digitalWrite(13, LOW);
    }
    delayMicroseconds(500);
  }
  for(nloop = 1; nloop <= t_delay * 2; nloop++) {
    turnOffAllLights();
    if(nloop % 5 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
      //digitalWrite(9, LOW);
      //digitalWrite(10, LOW);
      //digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
      //digitalWrite(13, LOW);
    }
    else if(nloop % 4 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      //digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
    }
    else if(nloop % 3 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      //digitalWrite(10, LOW);
      //digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
      //digitalWrite(13, LOW);
    }
    else if(nloop % 2 == 0) {
      //digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      //digitalWrite(10, LOW);
      //digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
      //digitalWrite(13, LOW);
    }
    else {
      digitalWrite(3, LOW);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      //digitalWrite(10, LOW);
      //digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
      //digitalWrite(13, LOW);
    }
    delayMicroseconds(500);
  }
  for(nloop = 1; nloop <= t_delay * 2; nloop++) {
    turnOffAllLights();
    if(nloop % 5 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
    }
    else if(nloop % 4 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      //digitalWrite(10, LOW);
      //digitalWrite(11, LOW);
      //digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    else if(nloop % 3 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      //digitalWrite(10, LOW);
      //digitalWrite(11, LOW);
      //digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    else if(nloop % 2 == 0) {
      //digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      //digitalWrite(10, LOW);
      //digitalWrite(11, LOW);
      //digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    else {
      digitalWrite(3, LOW);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      //digitalWrite(10, LOW);
      //digitalWrite(11, LOW);
      //digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    delayMicroseconds(500);
  }
  //end of sequence 6
}

void sequence7(int t_delay) {
  for(nloop = 1; nloop <= t_delay * 2; nloop++) {
    turnOffAllLights();
    if(nloop % 5 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
      //digitalWrite(9, LOW);
      //digitalWrite(10, LOW);
      //digitalWrite(11, LOW);
      //digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    else if(nloop % 4 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      //digitalWrite(10, LOW);
      //digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
      //digitalWrite(13, LOW);
    }
    else if(nloop % 3 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      //digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      //digitalWrite(12, LOW);
      //digitalWrite(13, LOW);
    }
    else if(nloop % 2 == 0) {
      //digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      //digitalWrite(11, LOW);
      //digitalWrite(12, LOW);
      //digitalWrite(13, LOW);
    }
    else {
      digitalWrite(3, LOW);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      //digitalWrite(10, LOW);
      //digitalWrite(11, LOW);
      //digitalWrite(12, LOW);
      //digitalWrite(13, LOW);
    }
    delayMicroseconds(500);
  }
  for(nloop = 1; nloop <= t_delay * 2; nloop++) {
    turnOffAllLights();
    if(nloop % 3 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      //digitalWrite(10, LOW);
      //digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
    }
    else if(nloop % 2 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      //digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      //digitalWrite(12, LOW);
      //digitalWrite(13, LOW);
    }
    else {
      //digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      //digitalWrite(11, LOW);
      //digitalWrite(12, LOW);
      //digitalWrite(13, LOW);
    }
    delayMicroseconds(500);
  }
  for(nloop = 1; nloop <= t_delay * 2; nloop++) {
    turnOffAllLights();
    if(nloop % 3 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      //digitalWrite(10, LOW);
      //digitalWrite(11, LOW);
      //digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    else if(nloop % 2 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      //digitalWrite(13, LOW);
    }
    else {
      //digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      //digitalWrite(10, LOW);
      //digitalWrite(11, LOW);
      //digitalWrite(12, LOW);
      //digitalWrite(13, LOW);
    }
    delayMicroseconds(500);
  }
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  delay(t_delay);
  for(nloop = 1; nloop <= t_delay * 2; nloop++) {
    turnOffAllLights();
    if(nloop % 3 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      //digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      //digitalWrite(10, LOW);
      //digitalWrite(11, LOW);
      //digitalWrite(12, LOW);
      //digitalWrite(13, LOW);
    }
    else if(nloop % 2 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      //digitalWrite(13, LOW);
    }
    else {
      //digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      //digitalWrite(10, LOW);
      //digitalWrite(11, LOW);
      //digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    delayMicroseconds(500);
  }
  for(nloop = 1; nloop <= t_delay * 2; nloop++) {
    turnOffAllLights();
    if(nloop % 3 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      //digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      //digitalWrite(11, LOW);
      //digitalWrite(12, LOW);
      //digitalWrite(13, LOW);
    }
    else if(nloop % 2 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      //digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      //digitalWrite(12, LOW);
      //digitalWrite(13, LOW);
    }
    else {
      //digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      //digitalWrite(10, LOW);
      //digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
    }
    delayMicroseconds(500);
  }
  for(nloop = 1; nloop <= t_delay * 2; nloop++) {
    turnOffAllLights();
    if(nloop % 5 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
      digitalWrite(9, HIGH);
      //digitalWrite(10, LOW);
      //digitalWrite(11, LOW);
      //digitalWrite(12, LOW);
      //digitalWrite(13, LOW);
    }
    else if(nloop % 4 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      //digitalWrite(11, LOW);
      //digitalWrite(12, LOW);
      //digitalWrite(13, LOW);
    }
    else if(nloop % 3 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      //digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      //digitalWrite(12, LOW);
      //digitalWrite(13, LOW);
    }
    else if(nloop % 2 == 0) {
      //digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      //digitalWrite(10, LOW);
      //digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
      //digitalWrite(13, LOW);
    }
    else {
      digitalWrite(3, LOW);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      //digitalWrite(10, LOW);
      //digitalWrite(11, LOW);
      //digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    delayMicroseconds(500);
  }
  //end of sequence 7
}

void sequence8(int t_delay) {
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  delay(t_delay);
  for(nloop = 1; nloop <= t_delay * 2; nloop++) {
    if(nloop % 2 == 0) {
      digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      digitalWrite(12, LOW);
      digitalWrite(13, LOW);
    }
    else {
      digitalWrite(3, LOW);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
      digitalWrite(13, LOW);
    }
    delayMicroseconds(500);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
  }
  for(nloop = 1; nloop <= t_delay * 2; nloop++) {
    turnOffAllLights();
    if(nloop % 3 == 0) {
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      digitalWrite(12, LOW);
      digitalWrite(13, LOW);
    }
    else if(nloop % 2 == 0) {
      digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
      digitalWrite(13, LOW);
    }
    else {
      digitalWrite(3, LOW);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    delayMicroseconds(500);
  }
  for(nloop = 1; nloop <= t_delay * 2; nloop++) {
    turnOffAllLights();
    if(nloop % 3 == 0) {
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      digitalWrite(12, LOW);
      digitalWrite(13, LOW);
    }
    else if(nloop % 2 == 0) {
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
      digitalWrite(13, LOW);
    }
    else {
      digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    delayMicroseconds(500);
  }
  for(nloop = 1; nloop <= t_delay * 2; nloop++) {
    turnOffAllLights();
    if(nloop % 3 == 0) {
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      digitalWrite(12, LOW);
      digitalWrite(13, LOW);
    }
    else if(nloop % 2 == 0) {
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
      digitalWrite(13, LOW);
    }
    else {
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    delayMicroseconds(500);
  }
  for(nloop = 1; nloop <= t_delay * 2; nloop++) {
    turnOffAllLights();
    if(nloop % 2 == 0) {
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
      digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
      digitalWrite(13, LOW);
    }
    else {
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    delayMicroseconds(500);
  }
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  delay(t_delay);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  delay(t_delay);
  //end of sequence 8
}

void sequence9(int t_delay) {
  for(nloop = 1; nloop <= t_delay * 2; nloop++) {
    turnOffAllLights();
    if(nloop % 3 == 0) {
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, LOW);
      digitalWrite(13, LOW);
    }
    else if(nloop % 2 == 0) {
      digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      digitalWrite(12, LOW);
      digitalWrite(13, LOW);
    }
    else {
      digitalWrite(3, LOW);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, LOW);
      digitalWrite(13, LOW);
    }
    delayMicroseconds(500);
  }
  for(nloop = 1; nloop <= t_delay * 2; nloop++) {
    turnOffAllLights();
    if(nloop % 3 == 0) {
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, LOW);
      digitalWrite(13, LOW);
    }
    else if(nloop % 2 == 0) {
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      digitalWrite(12, LOW);
      digitalWrite(13, LOW);
    }
    else {
      digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, LOW);
      digitalWrite(13, LOW);
    }
    delayMicroseconds(500);
  }
  for(nloop = 1; nloop <= t_delay * 2; nloop++) {
    turnOffAllLights();
    if(nloop % 3 == 0) {
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, LOW);
      digitalWrite(13, LOW);
    }
    else if(nloop % 2 == 0) {
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      digitalWrite(12, LOW);
      digitalWrite(13, LOW);
    }
    else {
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, LOW);
      digitalWrite(13, LOW);
    }
    delayMicroseconds(500);
  }
  for(nloop = 1; nloop <= t_delay * 2; nloop++) {
    turnOffAllLights();
    if(nloop % 3 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
      //digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      //digitalWrite(13, LOW);
    }
    else if(nloop % 2 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      //digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
      //digitalWrite(13, LOW);
    }
    else {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      //digitalWrite(13, LOW);
    }
    delayMicroseconds(500);
  }
  for(nloop = 1; nloop <= t_delay * 2; nloop++) {
    turnOffAllLights();
    if(nloop % 3 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
      //digitalWrite(9, LOW);
      //digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
    }
    else if(nloop % 2 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      //digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      //digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    else {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      //digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
    }
    delayMicroseconds(500);
  }
  for(nloop = 1; nloop <= t_delay * 2; nloop++) {
    turnOffAllLights();
    if(nloop % 3 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      //digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
    }
    else if(nloop % 2 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      //digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      //digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    else {
      //digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      digitalWrite(9, LOW);
      //digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
    }
    delayMicroseconds(500);
  }
  for(nloop = 1; nloop <= t_delay * 2; nloop++) {
    turnOffAllLights();
    if(nloop % 3 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      //digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
    }
    else if(nloop % 2 == 0) {
      //digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      //digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      //digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    else {
      digitalWrite(3, LOW);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      //digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
    }
    delayMicroseconds(500);
  }
  for(nloop = 1; nloop <= t_delay * 2; nloop++) {
    turnOffAllLights();
    if(nloop % 3 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      //digitalWrite(13, LOW);
    }
    else if(nloop % 2 == 0) {
      //digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      //digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
      //digitalWrite(13, LOW);
    }
    else {
      digitalWrite(3, LOW);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      //digitalWrite(13, LOW);
    }
    delayMicroseconds(500);
  }
}

void sequence10(int t_delay) {
  for(nloop = 1; nloop <= t_delay * 2; nloop++) {
    turnOffAllLights();
    if(nloop % 2 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
      //digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      //digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
      //digitalWrite(13, LOW);
    }
    else {
      digitalWrite(3, LOW);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      //digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      //digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    delayMicroseconds(500);
  }
  for(nloop = 1; nloop <= t_delay * 2; nloop++) {
    turnOffAllLights();
    if(nloop % 2 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      //digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      //digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
      //digitalWrite(13, LOW);
    }
    else {
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      //digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      //digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    delayMicroseconds(500);
  }
  for(nloop = 1; nloop <= t_delay * 2; nloop++) {
    turnOffAllLights();
    if(nloop % 2 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      //digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
      //digitalWrite(13, LOW);
    }
    else {
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      //digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      //digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    delayMicroseconds(500);
  }
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  delay(t_delay);
  for(nloop = 1; nloop <= t_delay * 2; nloop++) {
    turnOffAllLights();
    if(nloop % 2 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(9, HIGH);
      //digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      //digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    else {
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      //digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
      //digitalWrite(13, LOW);
    }
    delayMicroseconds(500);
  }
  for(nloop = 1; nloop <= t_delay * 2; nloop++) {
    turnOffAllLights();
    if(nloop % 2 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(9, HIGH);
      //digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      //digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    else {
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      //digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
      //digitalWrite(13, LOW);
    }
    delayMicroseconds(500);
  }
  for(nloop = 1; nloop <= t_delay * 2; nloop++) {
    turnOffAllLights();
    if(nloop % 2 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
      digitalWrite(9, HIGH);
      //digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      //digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    else {
      digitalWrite(3, LOW);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      //digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
      //digitalWrite(13, LOW);
    }
    delayMicroseconds(500);
  }
}

void sequence12(int t_delay) {
  for(nloop = 1; nloop <= t_delay * 2; nloop++) {
    turnOffAllLights();
    if(nloop % 3 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      //digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      //digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
    }
    else if(nloop % 2 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      //digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      //digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    else {
      //digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      //digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    delayMicroseconds(500);
  }
  for(nloop = 1; nloop <= t_delay * 2; nloop++) {
    turnOffAllLights();
    if(nloop % 3 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      //digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
    }
    else if(nloop % 2 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      //digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      //digitalWrite(12, LOW);
      //digitalWrite(13, LOW);
    }
    else {
      //digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      //digitalWrite(12, LOW);
      //digitalWrite(13, LOW);
    }
    delayMicroseconds(500);
  }
  for(nloop = 1; nloop <= t_delay * 2; nloop++) {
    turnOffAllLights();
    if(nloop % 3 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      //digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
    }
    else if(nloop % 2 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      //digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      //digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    else {
      //digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      //digitalWrite(10, LOW);
      //digitalWrite(11, LOW);
      //digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    delayMicroseconds(500);
  }
  for(nloop = 1; nloop <= t_delay * 2; nloop++) {
    turnOffAllLights();
    if(nloop % 3 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      //digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      //digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    else if(nloop % 2 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      //digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      //digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    else {
      //digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      //digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
    }
    delayMicroseconds(500);
  }
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  delay(t_delay);
}

void sequence13(int t_delay) {
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  delay(t_delay);
  for(nloop = 1; nloop <= t_delay * 2; nloop++) {
    turnOffAllLights();
    if(nloop % 2 == 0) {
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
      digitalWrite(9, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    else {
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    delayMicroseconds(500);
  }
}

void sequence14(int t_delay) {
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  delay(t_delay);
  turnOffAllLights();
  delay(t_delay);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  delay(t_delay);
  turnOffAllLights();
  delay(t_delay);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  delay(t_delay);
  turnOffAllLights();
  delay(t_delay);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  delay(t_delay);
  turnOffAllLights();
  delay(t_delay);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  delay(t_delay);
  turnOffAllLights();
  delay(t_delay);
}

void marquee(int t_delay) {
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  delay(t_delay);
  for(nloop = 1; nloop <= t_delay * 2; nloop++) {
    turnOffAllLights();
    if(nloop % 2 == 0) {
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
      digitalWrite(9, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    else {
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
    }
    delayMicroseconds(500);
  }
  for(nloop = 1; nloop <= t_delay * 2; nloop++) {
    turnOffAllLights();
    if(nloop % 3 == 0) {
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    else if(nloop % 2 == 0) {
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    else {
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
    }
    delayMicroseconds(500);
  }
  for(nloop = 1; nloop <= t_delay * 2; nloop++) {
    turnOffAllLights();
    if(nloop % 3 == 0) {
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    else if(nloop % 2 == 0) {
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    else {
      digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
    }
    delayMicroseconds(500);
  }
  for(nloop = 1; nloop <= t_delay * 2; nloop++) {
  turnOffAllLights();
    if(nloop % 4 == 0) {
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
    }
    else if(nloop % 3 == 0) {
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    else if(nloop % 2 == 0) {
      digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    else {
      digitalWrite(3, LOW);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
    }
    delayMicroseconds(500);
  }
  for(nloop = 1; nloop <= t_delay * 2; nloop++) {
    turnOffAllLights();
    if(nloop % 4 == 0) {
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
      digitalWrite(9, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    else if(nloop % 3 == 0) {
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
    }
    else if(nloop % 2 == 0) {
      digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    else {
      digitalWrite(3, LOW);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    delayMicroseconds(500);
  }
  for(nloop = 1; nloop <= t_delay * 2; nloop++) {
    turnOffAllLights();
    if (nloop % 4 == 0) {
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
      digitalWrite(9, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    else if(nloop % 3 == 0) {
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    else if(nloop % 2 == 0) {
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
    }
    else {
      digitalWrite(3, LOW);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    delayMicroseconds(500);
  }
  for(nloop = 1; nloop <= t_delay * 2; nloop++) {
    turnOffAllLights();
    if (nloop % 3 == 0) {
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    else if(nloop % 2 == 0) {
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    else {
      digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
    }
    delayMicroseconds(500);
  }
  for(nloop = 1; nloop <= t_delay * 2; nloop++) {
    turnOffAllLights();
    if (nloop % 4 == 0) {
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
    }
    else if (nloop % 3 == 0) {
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    else if(nloop % 2 == 0) {
      digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    else {
      digitalWrite(3, LOW);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
    }
    delayMicroseconds(500);
  }
  for(nloop = 1; nloop <= t_delay * 2; nloop++) {
    turnOffAllLights();
    if (nloop % 4 == 0) {
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    } 
    else if (nloop % 3 == 0) {
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
    }
    else if (nloop % 2 == 0) {
      digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    else {
      digitalWrite(3, LOW);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    delayMicroseconds(500);
  }
  for(nloop = 1; nloop <= t_delay * 2; nloop++) {
    turnOffAllLights();
    if (nloop % 4 == 0) {
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    else if (nloop % 3 == 0) {
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    } 
    else if (nloop % 2 == 0) {
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
    }
    else {
      digitalWrite(3, LOW);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    delayMicroseconds(500);
  }
  for(nloop = 1; nloop <= t_delay * 2; nloop++) {
    turnOffAllLights();
    if (nloop % 3 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      //digitalWrite(10, LOW);
      //digitalWrite(11, LOW);
      //digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    else if (nloop % 2 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      //digitalWrite(10, LOW);
      //digitalWrite(11, LOW);
      //digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    } 
    else {
      //digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
    }
    delayMicroseconds(500);
  }
  for(nloop = 1; nloop <= t_delay * 2; nloop++) {
    turnOffAllLights();
    if (nloop % 4 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
    }
    else if (nloop % 3 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      //digitalWrite(10, LOW);
      //digitalWrite(11, LOW);
      //digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    else if (nloop % 2 == 0) {
      //digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      //digitalWrite(10, LOW);
      //digitalWrite(11, LOW);
      //digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    } 
    else {
      digitalWrite(3, LOW);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
    }
    delayMicroseconds(500);
  }
  for(nloop = 1; nloop <= t_delay * 2; nloop++) {
    turnOffAllLights();
    if (nloop % 4 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
      digitalWrite(9, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    else if (nloop % 3 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      //digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
    }
    else if (nloop % 2 == 0) {
      //digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      //digitalWrite(10, LOW);
      //digitalWrite(11, LOW);
      //digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    else {
      digitalWrite(3, LOW);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      //digitalWrite(10, LOW);
      //digitalWrite(11, LOW);
      //digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    } 
    delayMicroseconds(500);
  }
  for(nloop = 1; nloop <= t_delay * 2; nloop++) {
    turnOffAllLights();
    if (nloop % 4 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
      //digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      //digitalWrite(13, LOW);
    }
    else if (nloop % 3 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      //digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    else if (nloop % 2 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
    }
    else {
      digitalWrite(3, LOW);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      //digitalWrite(10, LOW);
      //digitalWrite(11, LOW);
      //digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    delayMicroseconds(500);
  }
  for(nloop = 1; nloop <= t_delay * 2; nloop++) {
    turnOffAllLights();
    if (nloop % 3 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      //digitalWrite(13, LOW);
    }
    else if (nloop % 2 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      //digitalWrite(10, LOW);
      //digitalWrite(11, LOW);
      //digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    else {
      //digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
    }
    delayMicroseconds(500);
  }
  for(nloop = 1; nloop <= t_delay * 2; nloop++) {
    turnOffAllLights();
    if (nloop % 4 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
      //digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
    }
    else if (nloop % 3 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      //digitalWrite(13, LOW);
    }
    else if (nloop % 2 == 0) {
      //digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      //digitalWrite(10, LOW);
      //digitalWrite(11, LOW);
      //digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    else {
      digitalWrite(3, LOW);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
    }
    delayMicroseconds(500);
  }
  for(nloop = 1; nloop <= t_delay * 2; nloop++) {
    turnOffAllLights();
    if (nloop % 4 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
      digitalWrite(9, HIGH);
      //digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      //digitalWrite(12, LOW);
      //digitalWrite(13, LOW);
    }
    else if (nloop % 3 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
    }
    else if (nloop % 2 == 0) {
      //digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      //digitalWrite(13, LOW);
    }
    else {
      digitalWrite(3, LOW);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      //digitalWrite(10, LOW);
      //digitalWrite(11, LOW);
      //digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    delayMicroseconds(500);
  }
  for(nloop = 1; nloop <= t_delay * 2; nloop++) {
    turnOffAllLights();
    if (nloop % 4 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
      //digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
    }
    else if (nloop % 3 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      //digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      //digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      //digitalWrite(12, LOW);
      //digitalWrite(13, LOW);
    }
    else if (nloop % 2 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
    }
    else {
      digitalWrite(3, LOW);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      //digitalWrite(13, LOW);
    }
    delayMicroseconds(500);
  }
  for(nloop = 1; nloop <= t_delay * 2; nloop++) {
    turnOffAllLights();
    if (nloop % 3 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
    }
    else if (nloop % 2 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      //digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      //digitalWrite(12, LOW);
      //digitalWrite(13, LOW);
    }
    else {
      //digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
    }
    delayMicroseconds(500);
  }
  for(nloop = 1; nloop <= t_delay * 2; nloop++) {
    turnOffAllLights();
    if (nloop % 3 == 0) {
      //digitalWrite(3, HIGH);
      //digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
    }
    else if (nloop % 2 == 0) {
      //digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      //digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      //digitalWrite(12, LOW);
      //digitalWrite(13, LOW);
    }
    else {
      digitalWrite(3, LOW);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
    }
    delayMicroseconds(500);
  }
  for(nloop = 1; nloop <= t_delay * 2; nloop++) {
    turnOffAllLights();
    if (nloop % 2 == 0) {
      //digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      //digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
    }
    else {
      digitalWrite(3, LOW);
      //digitalWrite(4, HIGH);
      //digitalWrite(5, HIGH);
      //digitalWrite(6, HIGH);
      //digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      //digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      //digitalWrite(12, LOW);
      //digitalWrite(13, LOW);
    }
    delayMicroseconds(500);
  }
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  delay(t_delay);
  turnOffAllLights();
  delay(t_delay);
}

void turnOffAllLights() {
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
}
