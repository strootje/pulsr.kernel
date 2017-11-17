#include "./Window/ManagerImpl.hpp"
#include <Grawlog/Logger.hpp>

namespace Pulsr { namespace Kernel { namespace Window
{
	ManagerImpl::ManagerImpl( std::shared_ptr<Core::Window::Factory> windowFactory )
		: _windowFactory(windowFactory)
	{
		DLOG(DIAG);
	}

	ManagerImpl::~ManagerImpl()
	{
		DLOG(DIAG);
	}

	void ManagerImpl::Create( const std::string& name )
	{
		DLOG(DIAG);
	}

	bool ManagerImpl::HasWork()
	{
		DLOG(DIAG);
		return false;
	}

	void ManagerImpl::Update()
	{
		DLOG(DIAG);
	}
}}}
