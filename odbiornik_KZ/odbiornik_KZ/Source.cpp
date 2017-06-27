extern "C"
{
	__declspec(dllexport) void RunReceiver_KZ(int *outcomeData, int frameLength, double *realData, double *imagData, int decDepth, int codMode, int modMode)
	{
		for (size_t i = 0; i < frameLength; i++)
		{
			outcomeData[i] = 1;
			realData[i] = 1.2;
			imagData[i] = 1.3;
		}
	}
}

