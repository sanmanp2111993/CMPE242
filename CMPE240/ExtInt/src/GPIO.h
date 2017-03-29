/*
===============================================================================
 Name        : GPIO.h
 Author      : $ D H R U V K A K A D I Y A
 Email		 : $ D H R U V . K A K A D I Y A @ G M A I L . C O M
 Version     : $ 1.1
 Copyright   : $ CMPE 240 / 2015
 Description : GPIO function declarations and pin description
===============================================================================
*/
#ifndef _GPIO_H
#define _GPIO_H
//-----------------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------
//For Output

#define Input	 0x00000000
#define Output	 0xFFFFFFFF
#define PULLUP	 0x00000000
#define REPEATER 0x55555555
#define NOTHING	 0xAAAAAAAA
#define PULLDOWN 0xFFFFFFFF


#define Port0	 0
#define Port1	 1
#define Port2	 2
#define Port3	 3
#define Port4	 4

#define Port0_0  0
#define Port0_1  1
#define Port0_2  2
#define Port0_3  3
#define Port0_4  4
#define Port0_5  5
#define Port0_6  6
#define Port0_7  7
#define Port0_8  8
#define Port0_9  9
#define Port0_10 10
#define Port0_11 11
#define Port0_12 12
#define Port0_13 13
#define Port0_14 14
#define Port0_15 15
#define Port0_16 16
#define Port0_17 17
#define Port0_18 18
#define Port0_19 19
#define Port0_20 20
#define Port0_21 21
#define Port0_22 22
#define Port0_23 23
#define Port0_24 24
#define Port0_25 25
#define Port0_26 26
#define Port0_27 27
#define Port0_28 28
#define Port0_29 29
#define Port0_30 30
#define Port0_31 31

#define Port1_0  32
#define Port1_1  33
#define Port1_2  34
#define Port1_3  35
#define Port1_4  36
#define Port1_5  37
#define Port1_6  38
#define Port1_7  39
#define Port1_8  40
#define Port1_9  41
#define Port1_10 42
#define Port1_11 43
#define Port1_12 44
#define Port1_13 45
#define Port1_14 46
#define Port1_15 47
#define Port1_16 48
#define Port1_17 49
#define Port1_18 50
#define Port1_19 51
#define Port1_20 52
#define Port1_21 53
#define Port1_22 54
#define Port1_23 55
#define Port1_24 56
#define Port1_25 57
#define Port1_26 58
#define Port1_27 59
#define Port1_28 60
#define Port1_29 61
#define Port1_30 62
#define Port1_31 63

#define Port2_0  64
#define Port2_1  65
#define Port2_2  66
#define Port2_3  67
#define Port2_4  68
#define Port2_5  69
#define Port2_6  70
#define Port2_7  71
#define Port2_8  72
#define Port2_9  73
#define Port2_10 74
#define Port2_11 75
#define Port2_12 76
#define Port2_13 77
#define Port2_14 78
#define Port2_15 79
#define Port2_16 80
#define Port2_17 81
#define Port2_18 82
#define Port2_19 83
#define Port2_20 84
#define Port2_21 85
#define Port2_22 86
#define Port2_23 87
#define Port2_24 88
#define Port2_25 89
#define Port2_26 90
#define Port2_27 91
#define Port2_28 92
#define Port2_29 93
#define Port2_30 94
#define Port2_31 95

#define Port3_0  96
#define Port4_0  128

//For Input

#define Pin0_0  ((FIO0PIN0>>0)&0x01)
#define Pin0_1  ((FIO0PIN0>>1)&0x01)
#define Pin0_2  ((FIO0PIN0>>2)&0x01)
#define Pin0_3  ((FIO0PIN0>>3)&0x01)
#define Pin0_4  ((FIO0PIN0>>4)&0x01)
#define Pin0_5  ((FIO0PIN0>>5)&0x01)
#define Pin0_6  ((FIO0PIN0>>6)&0x01)
#define Pin0_7  ((FIO0PIN0>>7)&0x01)
#define Pin0_8  ((FIO0PIN1>>0)&0x01)
#define Pin0_9  ((FIO0PIN1>>1)&0x01)
#define Pin0_10 ((FIO0PIN1>>2)&0x01)
#define Pin0_11 ((FIO0PIN1>>3)&0x01)
#define Pin0_12 ((FIO0PIN1>>4)&0x01)
#define Pin0_13 ((FIO0PIN1>>5)&0x01)
#define Pin0_14 ((FIO0PIN1>>6)&0x01)
#define Pin0_15 ((FIO0PIN1>>7)&0x01)
#define Pin0_16 ((FIO0PIN2>>0)&0x01)
#define Pin0_17 ((FIO0PIN2>>1)&0x01)
#define Pin0_18 ((FIO0PIN2>>2)&0x01)
#define Pin0_19 ((FIO0PIN2>>3)&0x01)
#define Pin0_20 ((FIO0PIN2>>4)&0x01)
#define Pin0_21 ((FIO0PIN2>>5)&0x01)
#define Pin0_22 ((FIO0PIN2>>6)&0x01)
#define Pin0_23 ((FIO0PIN2>>7)&0x01)
#define Pin0_24 ((FIO0PIN3>>0)&0x01)
#define Pin0_25 ((FIO0PIN3>>1)&0x01)
#define Pin0_26 ((FIO0PIN3>>2)&0x01)
#define Pin0_27 ((FIO0PIN3>>3)&0x01)
#define Pin0_28 ((FIO0PIN3>>4)&0x01)
#define Pin0_29 ((FIO0PIN3>>5)&0x01)
#define Pin0_30 ((FIO0PIN3>>6)&0x01)
#define Pin0_31 ((FIO0PIN3>>7)&0x01)

#define Pin1_0  ((FIO1PIN0>>0)&0x01)
#define Pin1_1  ((FIO1PIN0>>1)&0x01)
#define Pin1_2  ((FIO1PIN0>>2)&0x01)
#define Pin1_3  ((FIO1PIN0>>3)&0x01)
#define Pin1_4  ((FIO1PIN0>>4)&0x01)
#define Pin1_5  ((FIO1PIN0>>5)&0x01)
#define Pin1_6  ((FIO1PIN0>>6)&0x01)
#define Pin1_7  ((FIO1PIN0>>7)&0x01)
#define Pin1_8  ((FIO1PIN1>>0)&0x01)
#define Pin1_9  ((FIO1PIN1>>1)&0x01)
#define Pin1_10 ((FIO1PIN1>>2)&0x01)
#define Pin1_11 ((FIO1PIN1>>3)&0x01)
#define Pin1_12 ((FIO1PIN1>>4)&0x01)
#define Pin1_13 ((FIO1PIN1>>5)&0x01)
#define Pin1_14 ((FIO1PIN1>>6)&0x01)
#define Pin1_15 ((FIO1PIN1>>7)&0x01)
#define Pin1_16 ((FIO1PIN2>>0)&0x01)
#define Pin1_17 ((FIO1PIN2>>1)&0x01)
#define Pin1_18 ((FIO1PIN2>>2)&0x01)
#define Pin1_19 ((FIO1PIN2>>3)&0x01)
#define Pin1_20 ((FIO1PIN2>>4)&0x01)
#define Pin1_21 ((FIO1PIN2>>5)&0x01)
#define Pin1_22 ((FIO1PIN2>>6)&0x01)
#define Pin1_23 ((FIO1PIN2>>7)&0x01)
#define Pin1_24 ((FIO1PIN3>>0)&0x01)
#define Pin1_25 ((FIO1PIN3>>1)&0x01)
#define Pin1_26 ((FIO1PIN3>>2)&0x01)
#define Pin1_27 ((FIO1PIN3>>3)&0x01)
#define Pin1_28 ((FIO1PIN3>>4)&0x01)
#define Pin1_29 ((FIO1PIN3>>5)&0x01)
#define Pin1_30 ((FIO1PIN3>>6)&0x01)
#define Pin1_31 ((FIO1PIN3>>7)&0x01)

#define Pin2_0  ((FIO2PIN0>>0)&0x01)
#define Pin2_1  ((FIO2PIN0>>1)&0x01)
#define Pin2_2  ((FIO2PIN0>>2)&0x01)
#define Pin2_3  ((FIO2PIN0>>3)&0x01)
#define Pin2_4  ((FIO2PIN0>>4)&0x01)
#define Pin2_5  ((FIO2PIN0>>5)&0x01)
#define Pin2_6  ((FIO2PIN0>>6)&0x01)
#define Pin2_7  ((FIO2PIN0>>7)&0x01)
#define Pin2_8  ((FIO2PIN1>>0)&0x01)
#define Pin2_9  ((FIO2PIN1>>1)&0x01)
#define Pin2_10 ((FIO2PIN1>>2)&0x01)
#define Pin2_11 ((FIO2PIN1>>3)&0x01)
#define Pin2_12 ((FIO2PIN1>>4)&0x01)
#define Pin2_13 ((FIO2PIN1>>5)&0x01)
#define Pin2_14 ((FIO2PIN1>>6)&0x01)
#define Pin2_15 ((FIO2PIN1>>7)&0x01)
#define Pin2_16 ((FIO2PIN2>>0)&0x01)
#define Pin2_17 ((FIO2PIN2>>1)&0x01)
#define Pin2_18 ((FIO2PIN2>>2)&0x01)
#define Pin2_19 ((FIO2PIN2>>3)&0x01)
#define Pin2_20 ((FIO2PIN2>>4)&0x01)
#define Pin2_21 ((FIO2PIN2>>5)&0x01)
#define Pin2_22 ((FIO2PIN2>>6)&0x01)
#define Pin2_23 ((FIO2PIN2>>7)&0x01)
#define Pin2_24 ((FIO2PIN3>>0)&0x01)
#define Pin2_25 ((FIO2PIN3>>1)&0x01)
#define Pin2_26 ((FIO2PIN3>>2)&0x01)
#define Pin2_27 ((FIO2PIN3>>3)&0x01)
#define Pin2_28 ((FIO2PIN3>>4)&0x01)
#define Pin2_29 ((FIO2PIN3>>5)&0x01)
#define Pin2_30 ((FIO2PIN3>>6)&0x01)
#define Pin2_31 ((FIO2PIN3>>7)&0x01)


//-----------------------------------------------------------------------------------------------
void set(unsigned short);
void reset(unsigned short);
void ConfigPort(unsigned  short,unsigned int);
void ConfigPin(unsigned  short,unsigned int);
void ConfigPortMode(unsigned  short,unsigned int);
void ConfigPinMode(unsigned  short,unsigned int);
void ConfigGPIOInt(unsigned short,unsigned short);
//-----------------------------------------------------------------------------------------------

#endif
