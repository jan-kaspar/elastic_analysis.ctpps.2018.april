#include <string>
#include <vector>

//----------------------------------------------------------------------------------------------------

std::vector<std::string> input_files;

void InitInputFiles()
{
	input_files = {
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314274.0_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314274.10_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314274.11_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314274.12_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314274.13_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314274.14_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314274.15_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314274.16_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314274.17_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314274.18_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314274.19_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314274.1_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314274.20_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314274.21_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314274.22_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314274.23_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314274.24_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314274.25_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314274.26_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314274.27_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314274.28_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314274.29_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314274.2_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314274.30_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314274.31_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314274.32_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314274.33_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314274.34_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314274.35_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314274.36_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314274.37_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314274.38_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314274.39_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314274.3_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314274.40_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314274.41_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314274.42_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314274.43_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314274.4_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314274.5_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314274.6_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314274.7_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314274.8_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314274.9_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.0_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.100_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.101_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.102_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.103_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.104_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.105_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.106_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.107_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.108_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.109_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.10_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.110_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.11_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.12_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.13_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.14_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.15_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.16_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.17_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.18_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.19_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.1_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.20_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.21_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.22_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.23_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.24_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.25_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.26_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.27_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.28_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.29_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.2_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.30_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.31_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.32_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.33_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.34_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.35_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.36_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.37_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.38_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.39_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.3_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.40_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.41_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.42_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.43_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.44_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.45_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.46_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.47_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.48_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.49_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.4_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.50_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.51_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.52_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.53_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.54_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.55_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.56_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.57_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.58_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.59_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.5_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.60_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.61_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.62_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.65_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.66_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.67_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.68_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.69_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.6_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.70_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.71_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.72_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.73_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.74_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.75_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.77_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.78_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.7_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.80_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.81_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.82_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.83_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.84_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.85_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.86_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.87_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.88_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.89_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.8_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.90_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.91_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.92_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.93_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.94_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.95_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.96_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.97_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.98_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.99_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_April/version4/run_314276.9_re_reco.root"
	};
}
