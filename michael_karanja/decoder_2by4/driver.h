#include<systemc>

SC_MODULE(driver){
sc_out<bool> d_a, d_b;

SC_CTOR(driver){
	SC_THREAD(drive);
}

void drive(void){
	while(1){
		d_a=0;
		d_b=0;
		wait(5,SC_NS);
		d_a=0;
		d_b=1;
		wait(5,SC_NS);
		d_a=1;
		d_b=0;
		wait(5,SC_NS);
		d_a=1;
		d_b=1;
		wait(5,SC_NS);
	}
}
};

