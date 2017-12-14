#include "./WindowManagerImpl.hpp"
#include <Grawlog/Logger.hpp>

namespace Pulsr { namespace Kernel
{
	WindowManagerImpl::WindowManagerImpl( std::shared_ptr<Core::Drawing::WindowFactory> factory )
		: _factory(factory)
		, _windows(WindowList())
	{
		DLOG(DIAG);
	}

	WindowManagerImpl::~WindowManagerImpl()
	{
		DLOG(DIAG);
	}

	void WindowManagerImpl::Create( const std::string& name )
	{
		DLOG(DIAG);

		auto window = _factory->Create();
		_windows.push_back(window);
	}

	bool WindowManagerImpl::HasWork()
	{
		DLOG(DIAG);
		return !_windows.empty();
	}

	void WindowManagerImpl::Update()
	{
		DLOG(DIAG);
		_factory->Dispatch();
	}
}}
