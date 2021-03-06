class LDustEffectsMan
{
	class LeftDust1
	{
		enabled = "density interpolate [0.15,0.15001,-1,1]";
		lifetime = 0.1;
		qualityLevel = 2;
		simulation = "particles";
		type = "LeftDustMan";
	};
	class LeftDustMed
	{
		enabled = "density interpolate [0.15,0.15001,-1,1]";
		lifetime = 0.1;
		qualityLevel = 1;
		simulation = "particles";
		type = "LeftDustManMed";
	};
	class LeftDustWater1
	{
		lifetime = 0.3;
		simulation = "particles";
		type = "DustWaterMan";
	};
};
