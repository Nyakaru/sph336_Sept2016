/*
 * andgate.h
 *
 *  Created on: Nov 14, 2016 
 *      Author: Wangai
 */

#ifndef ANDGATE_H_
#define ANDGATE_H_
#include<systemc.h>

SC_MODULE(and_gate){
//input and output ports

sc_in<bool> a, b;
sc_out<bool> c;


//constructor: where the processes are bound to simulation kernel
SC_CTOR(and_gate){
	SC_METHOD(gate);
	sensitive << a << b;
	//dont_initialize();
}

~and_gate(){
//delete stuff :P
}

void gate(void){
	c = a && b;
}
};




#endif /* AND_GATE_H_ */