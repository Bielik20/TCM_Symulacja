extern "C"
{
	__declspec(dllexport) void RunTransmitter_PK(int *inputData, int frameLength, double *realData, double *imagData, int codMode, int modMode)
	{
		for (size_t i = 0; i < frameLength; i++)
		{
			inputData[i] = -2;
			realData[i] = -2.2;
			imagData[i] = -2.3;
		}
	}
}

