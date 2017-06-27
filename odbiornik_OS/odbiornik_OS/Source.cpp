extern "C"
{
	__declspec(dllexport) void RunReceiver_OS(int *outcomeData, int frameLength, double *realData, double *imagData, int decDepth, int codMode, int modMode)
	{
		for (size_t i = 0; i < frameLength; i++)
		{
			outcomeData[i] = 3;
			realData[i] = 3.2;
			imagData[i] = 3.3;
		}
	}
}

