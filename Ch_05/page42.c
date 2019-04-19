//#define WITH_DEVICE_A
#define WITH_DEVICE_B

//#define VERSION 3

#if (VERSION == 3)
	#error "new function for version 3.0"
#endif

#ifdef WITH_DEVICE_B
	#warning "drivers of Device-B"
#endif

int main()
{
    return 0;
}
