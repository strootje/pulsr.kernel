#ifndef __PULSR_KERNEL_WINDOW_MANAGERIMPL__H__
#define __PULSR_KERNEL_WINDOW_MANAGERIMPL__H__

#include <Pulsr.Core/Window/Factory.hpp>
#include <Pulsr.Core/Window/Manager.hpp>
#include <string>

namespace Pulsr { namespace Kernel { namespace Window
{
	/**
	 * Window Manager implementation
	 */
	class ManagerImpl : public Core::Window::Manager
	{
	private:
		std::shared_ptr<Core::Window::Factory> _windowFactory;

	public:
		/**
		 * Constructor
		 */
		ManagerImpl( std::shared_ptr<Core::Window::Factory> windowFactory );

		/**
		 * Destructor
		 */
		virtual ~ManagerImpl();

		/**
		 * Method to create a new window
		 * \param[in]  name  The name of the new window
		 */
		void Create( const std::string& name );
		
		/**
		 * Method to check if the window manager has work left
		 * \returns  Bool indicating if work is remaining
		 */
		bool HasWork();

		/**
		 * Method to update all resources in the window manager
		 */
		void Update();
	};
}}}

#endif
