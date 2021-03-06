/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:14 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CVNLP.framework/CVNLP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct {
	void plan;
	int network_index;
} SCD_Struct_CV1;

typedef struct {
	void data;
	void reserved;
	unsigned long long dim[4];
	unsigned long long stride[4];
	unsigned long long width;
	unsigned long long height;
	unsigned long long channels;
	unsigned long long batch_number;
	unsigned long long sequence_length;
	unsigned long long stride_width;
	unsigned long long stride_height;
	unsigned long long stride_channels;
	unsigned long long stride_batch_number;
	unsigned long long stride_sequence_length;
	int storage_type;
} SCD_Struct_CV2;

typedef struct __CVBuffer* CVBufferRef;

typedef struct CVNLPCTCPriorityQueuepriority_queue<CVNLPCTCCandidate, std::__1::vector<CVNLPCTCCandidate, std::__1::allocator<CVNLPCTCCandidate>>, CVNLPCTCPriorityQueue::QueueComparison>vector<CVNLPCTCCandidate, std::__1::allocator<CVNLPCTCCandidate>>CVNLPCTCCandidateCVNLPCTCCandidate__compressed_pair<CVNLPCTCCandidate *, std::__1::allocator<CVNLPCTCCandidate>>CVNLPCTCCandidateQueueComparisonBvector<CVNLPCTCCandidate, std::__1::allocator<CVNLPCTCCandidate>>CVNLPCTCCandidateCVNLPCTCCandidate__compressed_pair<CVNLPCTCCandidate *, std::__1::allocator<CVNLPCTCCandidate>>CVNLPCTCCandidate* VNLPCTCPriorityQueueRef;

typedef struct CVNLPTextDecodingPruningPolicy {
	long long strategy;
	BOOL shouldSort;
	float threshold;
	unsigned maxNumberOfCandidates;
} CVNLPTextDecodingPruningPolicy;

typedef struct _NSZone* NSZoneRef;

typedef const struct _LXCursor* LXCursorRef;

typedef struct CVNLPLanguageModel* CVNLPLanguageModelRef;

typedef struct _compressed_pair<cvnlp::AbstractVocabulary *, std::__1::default_delete<cvnlp::AbstractVocabulary>> {
	AbstractVocabulary __value_;
} compressed_pair<cvnlp::AbstractVocabulary *, std::__1::default_delete<cvnlp::AbstractVocabulary>>;

typedef struct unique_ptr<cvnlp::AbstractVocabulary, std::__1::default_delete<cvnlp::AbstractVocabulary>> {
	compressed_pair<cvnlp::AbstractVocabulary *, std::__1::default_delete<cvnlp::AbstractVocabulary>> __ptr_;
} unique_ptr<cvnlp::AbstractVocabulary, std::__1::default_delete<cvnlp::AbstractVocabulary>>;

typedef struct _compressed_pair<unsigned int *, std::__1::allocator<unsigned int>> {
	unsigned __value_;
} compressed_pair<unsigned int *, std::__1::allocator<unsigned int>>;

typedef struct vector<unsigned int, std::__1::allocator<unsigned int>> {
	unsigned __begin_;
	unsigned __end_;
	compressed_pair<unsigned int *, std::__1::allocator<unsigned int>> __end_cap_;
} vector<unsigned int, std::__1::allocator<unsigned int>>;

typedef struct _compressed_pair<double *, std::__1::allocator<double>> {
	double __value_;
} compressed_pair<double *, std::__1::allocator<double>>;

typedef struct vector<double, std::__1::allocator<double>> {
	double __begin_;
	double __end_;
	compressed_pair<double *, std::__1::allocator<double>> __end_cap_;
} vector<double, std::__1::allocator<double>>;

typedef struct _compressed_pair<unsigned long *, std::__1::allocator<unsigned long>> {
	unsigned long long __value_;
} compressed_pair<unsigned long *, std::__1::allocator<unsigned long>>;

typedef struct vector<unsigned long, std::__1::allocator<unsigned long>> {
	unsigned long long __begin_;
	unsigned long long __end_;
	compressed_pair<unsigned long *, std::__1::allocator<unsigned long>> __end_cap_;
} vector<unsigned long, std::__1::allocator<unsigned long>>;

typedef struct CVNLPLanguageModelWithState* CVNLPLanguageModelWithStateRef;

typedef struct CVNLPBeamSearch* CVNLPBeamSearchRef;

typedef const struct _LXLexicon* LXLexiconRef;

