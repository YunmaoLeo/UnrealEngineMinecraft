#pragma once
#include <chrono>

class ScopedTimer
{
public:
	ScopedTimer(FString name) : start(std::chrono::high_resolution_clock::now()),
	                            timerName(name)
	{
	}

	~ScopedTimer()
	{
		auto end = std::chrono::high_resolution_clock::now();
		auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);;
		UE_LOG(LogClass, Log, TEXT("%s : %lld ms"), *timerName, duration.count());
	}

private:
	FString timerName;
	std::chrono::time_point<std::chrono::high_resolution_clock> start;
};
