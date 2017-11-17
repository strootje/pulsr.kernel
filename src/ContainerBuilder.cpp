#include "./ContainerBuilder.hpp"
#include <Grawlog/Logger.hpp>

#include "./Window/ManagerImpl.hpp"
#include <Pulsr.Core/Window/Manager.hpp>

namespace Pulsr { namespace Kernel
{
	ContainerBuilder::ContainerBuilder()
	{
		DLOG(DIAG);
		registerType<Window::ManagerImpl>().as<Core::Window::Manager>();
	}

	ContainerBuilder::~ContainerBuilder()
	{
		DLOG(DIAG);
	}
}}
