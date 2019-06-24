#include <string>
#include <vector>

//----------------------------------------------------------------------------------------------------

std::vector<std::string> input_files;

void InitInputFiles()
{
	input_files = {
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_April/version7/run_314274.0_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_April/version7/run_314274.10_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_April/version7/run_314274.11_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_April/version7/run_314274.12_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_April/version7/run_314274.13_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_April/version7/run_314274.14_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_April/version7/run_314274.1_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_April/version7/run_314274.2_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_April/version7/run_314274.3_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_April/version7/run_314274.4_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_April/version7/run_314274.5_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_April/version7/run_314274.6_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_April/version7/run_314274.7_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_April/version7/run_314274.8_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_April/version7/run_314274.9_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_April/version7/run_314276.0_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_April/version7/run_314276.10_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_April/version7/run_314276.11_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_April/version7/run_314276.12_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_April/version7/run_314276.13_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_April/version7/run_314276.14_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_April/version7/run_314276.15_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_April/version7/run_314276.16_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_April/version7/run_314276.17_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_April/version7/run_314276.18_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_April/version7/run_314276.19_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_April/version7/run_314276.1_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_April/version7/run_314276.20_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_April/version7/run_314276.21_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_April/version7/run_314276.22_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_April/version7/run_314276.23_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_April/version7/run_314276.24_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_April/version7/run_314276.25_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_April/version7/run_314276.26_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_April/version7/run_314276.27_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_April/version7/run_314276.28_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_April/version7/run_314276.29_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_April/version7/run_314276.2_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_April/version7/run_314276.30_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_April/version7/run_314276.31_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_April/version7/run_314276.32_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_April/version7/run_314276.33_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_April/version7/run_314276.34_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_April/version7/run_314276.35_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_April/version7/run_314276.36_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_April/version7/run_314276.3_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_April/version7/run_314276.4_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_April/version7/run_314276.5_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_April/version7/run_314276.6_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_April/version7/run_314276.7_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_April/version7/run_314276.8_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_April/version7/run_314276.9_re_reco.root"
	};
}
