#ifndef __CAPWAP_ELEMENT_DUPLICATE_IPv4__HEADER__
#define __CAPWAP_ELEMENT_DUPLICATE_IPv4__HEADER__

#define CAPWAP_ELEMENT_DUPLICATEIPV4			21

#define CAPWAP_DUPLICATEIPv4_CLEARED			0
#define CAPWAP_DUPLICATEIPv4_DETECTED			1

struct capwap_duplicateipv4_element {
	struct in_addr address;
	uint8_t status;
	uint8_t length;
	uint8_t* macaddress;
};

extern struct capwap_message_elements_ops capwap_element_duplicateipv4_ops;

#endif /* __CAPWAP_ELEMENT_DUPLICATE_IPv4__HEADER__ */
