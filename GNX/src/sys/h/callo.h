
/*
 *! @(#)callo.h	3.2	{ National Semiconductor }	12/20/82
 */

/*
 * The callout structure is for
 * a routine arranging
 * to be called by the clock interrupt
 * (clock.c) with a specified argument,
 * in a specified amount of time.
 * Used, for example, to time tab
 * delays on typewriters.
 */

struct	callo
{
	int	c_time;		/* incremental time */
	caddr_t	c_arg;		/* argument to routine */
	int	(*c_func)();	/* routine */
};

#ifdef	KERNEL
extern	struct	callo	callout[NCALL];
#endif
