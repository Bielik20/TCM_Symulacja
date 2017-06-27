extern "C"
{
	__declspec(dllexport) void RunReceiver_SK(int *outcomeData, int frameLength, double *realData, double *imagData, int decDepth, int codMode, int modMode)
	{
		for (size_t i = 0; i < frameLength; i++)
		{
			outcomeData[i] = 2;
			realData[i] = 2.2;
			imagData[i] = 2.3;
		}
	}
}

