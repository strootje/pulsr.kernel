#ifndef __PULSR_KERNEL_WINDOWMANAGERIMPL__H__
#define __PULSR_KERNEL_WINDOWMANAGERIMPL__H__

#include <Pulsr.Core/Drawing/Window.hpp>
#include <Pulsr.Core/Drawing/WindowFactory.hpp>
#include <Pulsr.Core/Kernel/WindowManager.hpp>
#include <list>
#include <memory>
#include <string>

namespace Pulsr { namespace Kernel
{
	/**
	 * Window Manager implementation
	 */
	class WindowManagerImpl : public Core::Kernel::WindowManager
	{
	private:
		typedef std::list<std::shared_ptr<Core::Drawing::Window>> WindowList;
		std::shared_ptr<Core::Drawing::WindowFactory> _factory;
		WindowList _windows;

	public:
		/**
		 * Constructor
		 */
		WindowManagerImpl( std::shared_ptr<Core::Drawing::WindowFactory> factory );

		/**
		 * Destructor
		 */
		virtual ~WindowManagerImpl();

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
}}

#endif
