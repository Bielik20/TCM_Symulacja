extern "C"
{
	__declspec(dllexport) void RunTransmitter_JF(int *inputData, int frameLength, double *realData, double *imagData, int codMode, int modMode)
	{
		for (size_t i = 0; i < frameLength; i++)
		{
			inputData[i] = -1;
			realData[i] = -1.2;
			imagData[i] = -1.3;
		}
	}
}

