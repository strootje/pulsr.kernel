#ifndef __PULSR_KERNEL_CONTAINERBUILDER__H__
#define __PULSR_KERNEL_CONTAINERBUILDER__H__

#include <Hypodermic/Hypodermic.h>

namespace Pulsr { namespace Kernel
{
	/**
	 * ContainerBuilder for the Windowing Module
	 */
	class ContainerBuilder : public Hypodermic::ContainerBuilder
	{
	public:
		/**
		 * Constructor
		 */
		ContainerBuilder();

		/**
		 * Destructor
		 */
		virtual ~ContainerBuilder();
	};
}}

#endif
