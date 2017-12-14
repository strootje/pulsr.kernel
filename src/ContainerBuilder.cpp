#include "./ContainerBuilder.hpp"
#include <Grawlog/Logger.hpp>

#include "./WindowManagerImpl.hpp"
#include <Pulsr.Core/Kernel/WindowManager.hpp>

namespace Pulsr { namespace Kernel
{
	ContainerBuilder::ContainerBuilder()
	{
		DLOG(DIAG);
		registerType<WindowManagerImpl>().as<Core::Kernel::WindowManager>();
	}

	ContainerBuilder::~ContainerBuilder()
	{
		DLOG(DIAG);
	}
}}
