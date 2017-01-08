#ifndef _CONLL_READER_
#define _CONLL_READER_

#include "Reader.h"
#include "N3L.h"
#include <sstream>

using namespace std;
/*
 this class reads conll-format data (10 columns, no srl-info)
 */
class InstanceReader : public Reader {
public:
	InstanceReader() {
	}
	~InstanceReader() {
	}

	Instance *getNext() {
		m_instance.clear();
		string strLine;
		if (!my_getline(m_inf, strLine))
			return NULL;
		if (strLine.empty())
			return NULL;


		vector<string> vecInfo;
		split_bychars(strLine, vecInfo, "\t");
		m_instance.allocate(vecInfo.size() - 1);
		m_instance.m_label = vecInfo[0];

		vector<string> words;
		vector<string> vec_sparse_feat;
		int pos = vecInfo[1].find("[s]");
		string seg = vecInfo[1].substr(0, pos);
		split_bychars(seg, words, " ");
		if (pos != -1)
		{
			string sparse_feat = vecInfo[1].substr(pos, -1);
			vec_sparse_feat.push_back(sparse_feat);
		}
		m_instance.m_tweet = words;
		m_instance.m_sparse = vec_sparse_feat;
		return &m_instance;
	}
};

#endif

