struct adjedge {
	int 	adjnode;
	struct adjedge	*pt_next_adjedge;
};
struct ec_node {
	char	ec_type;
	long	value;
	struct adjedge	*pt_first_adjedge;
};

