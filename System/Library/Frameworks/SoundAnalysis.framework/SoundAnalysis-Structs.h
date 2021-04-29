/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:15 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

typedef struct _NSZone* NSZoneRef;

typedef struct {
	long long field1;
	int field2;
	unsigned field3;
	long long field4;
} SCD_Struct_SN1;

typedef struct {
	SCD_Struct_SN1 field1;
	SCD_Struct_SN1 field2;
} SCD_Struct_SN2;

typedef struct {
	long long value;
	int timescale;
	unsigned flags;
	long long epoch;
} SCD_Struct_SN3;

typedef struct {
	SCD_Struct_SN3 start;
	SCD_Struct_SN3 duration;
} SCD_Struct_SN4;

typedef struct shared_ptr<DSPGraph::Graph> {
	Graph __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<DSPGraph::Graph>;

typedef struct OpaqueAudioQueue* OpaqueAudioQueueRef;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct mutex {
	opaque_pthread_mutex_t __m_;
} mutex;

typedef struct Box* BoxRef;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SoundAnalysis::ProcessingContext, void *>>> {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SoundAnalysis::ProcessingContext, void *>>>;

typedef struct _list_node_base<SoundAnalysis::ProcessingContext, void *> {
	__list_node_base<SoundAnalysis::ProcessingContext, void *> __prev_;
	__list_node_base<SoundAnalysis::ProcessingContext, void *> __next_;
} list_node_base<SoundAnalysis::ProcessingContext, void *>;

typedef struct list<SoundAnalysis::ProcessingContext, std::__1::allocator<SoundAnalysis::ProcessingContext>> {
	list_node_base<SoundAnalysis::ProcessingContext, void *> __end_;
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SoundAnalysis::ProcessingContext, void *>>> __size_alloc_;
} list<SoundAnalysis::ProcessingContext, std::__1::allocator<SoundAnalysis::ProcessingContext>>;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SoundAnalysis::FormatMatchingNode, void *>>> {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SoundAnalysis::FormatMatchingNode, void *>>>;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SoundAnalysis::SharedProcessingNode, void *>>> {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SoundAnalysis::SharedProcessingNode, void *>>>;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SoundAnalysis::AnalyzerNode, void *>>> {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SoundAnalysis::AnalyzerNode, void *>>>;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SoundAnalysis::ProcessingNode *, void *>>> {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SoundAnalysis::ProcessingNode *, void *>>>;

typedef struct AudioStreamBasicDescription {
	double mSampleRate;
	unsigned mFormatID;
	unsigned mFormatFlags;
	unsigned mBytesPerPacket;
	unsigned mFramesPerPacket;
	unsigned mBytesPerFrame;
	unsigned mChannelsPerFrame;
	unsigned mBitsPerChannel;
	unsigned mReserved;
} AudioStreamBasicDescription;

typedef struct type {
	unsigned char __lx[24];
} type;

typedef struct _value_func<void (std::__1::shared_ptr<DSPGraph::Graph>, unsigned long)> {
	type __buf_;
	__base<void (std::__1::shared_ptr<DSPGraph::Graph>, unsigned long)> __f_;
} value_func<void (std::__1::shared_ptr<DSPGraph::Graph>, unsigned long)>;

typedef struct function<void (std::__1::shared_ptr<DSPGraph::Graph>, unsigned long)> {
	value_func<void (std::__1::shared_ptr<DSPGraph::Graph>, unsigned long)> __f_;
} function<void (std::__1::shared_ptr<DSPGraph::Graph>, unsigned long)>;

typedef struct FormatAndBlockSize {
	AudioStreamBasicDescription mFormat;
	unsigned mBlockSize;
} FormatAndBlockSize;

typedef struct _list_node_base<SoundAnalysis::ProcessingNode *, void *> {
	__list_node_base<SoundAnalysis::ProcessingNode *, void *> __prev_;
	__list_node_base<SoundAnalysis::ProcessingNode *, void *> __next_;
} list_node_base<SoundAnalysis::ProcessingNode *, void *>;

typedef struct list<SoundAnalysis::ProcessingNode *, std::__1::allocator<SoundAnalysis::ProcessingNode *>> {
	list_node_base<SoundAnalysis::ProcessingNode *, void *> __end_;
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SoundAnalysis::ProcessingNode *, void *>>> __size_alloc_;
} list<SoundAnalysis::ProcessingNode *, std::__1::allocator<SoundAnalysis::ProcessingNode *>>;

typedef struct RootNode {
	/*function pointer*/void* _vptr$ProcessingNode;
	ProcessingNode mUpstreamNode;
	list<SoundAnalysis::ProcessingNode *, std::__1::allocator<SoundAnalysis::ProcessingNode *>> mDownstreamNodes;
	Box mProcessingBox;
	FormatAndBlockSize mUpstreamFormat;
	FormatAndBlockSize mDownstreamFormat;
} RootNode;

typedef struct _list_node_base<SoundAnalysis::AnalyzerNode, void *> {
	__list_node_base<SoundAnalysis::AnalyzerNode, void *> __prev_;
	__list_node_base<SoundAnalysis::AnalyzerNode, void *> __next_;
} list_node_base<SoundAnalysis::AnalyzerNode, void *>;

typedef struct list<SoundAnalysis::AnalyzerNode, std::__1::allocator<SoundAnalysis::AnalyzerNode>> {
	list_node_base<SoundAnalysis::AnalyzerNode, void *> __end_;
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SoundAnalysis::AnalyzerNode, void *>>> __size_alloc_;
} list<SoundAnalysis::AnalyzerNode, std::__1::allocator<SoundAnalysis::AnalyzerNode>>;

typedef struct _list_node_base<SoundAnalysis::SharedProcessingNode, void *> {
	__list_node_base<SoundAnalysis::SharedProcessingNode, void *> __prev_;
	__list_node_base<SoundAnalysis::SharedProcessingNode, void *> __next_;
} list_node_base<SoundAnalysis::SharedProcessingNode, void *>;

typedef struct list<SoundAnalysis::SharedProcessingNode, std::__1::allocator<SoundAnalysis::SharedProcessingNode>> {
	list_node_base<SoundAnalysis::SharedProcessingNode, void *> __end_;
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SoundAnalysis::SharedProcessingNode, void *>>> __size_alloc_;
} list<SoundAnalysis::SharedProcessingNode, std::__1::allocator<SoundAnalysis::SharedProcessingNode>>;

typedef struct _list_node_base<SoundAnalysis::FormatMatchingNode, void *> {
	__list_node_base<SoundAnalysis::FormatMatchingNode, void *> __prev_;
	__list_node_base<SoundAnalysis::FormatMatchingNode, void *> __next_;
} list_node_base<SoundAnalysis::FormatMatchingNode, void *>;

typedef struct list<SoundAnalysis::FormatMatchingNode, std::__1::allocator<SoundAnalysis::FormatMatchingNode>> {
	list_node_base<SoundAnalysis::FormatMatchingNode, void *> __end_;
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SoundAnalysis::FormatMatchingNode, void *>>> __size_alloc_;
} list<SoundAnalysis::FormatMatchingNode, std::__1::allocator<SoundAnalysis::FormatMatchingNode>>;

typedef struct ProcessingTree {
	shared_ptr<DSPGraph::Graph> mGraph;
	list<SoundAnalysis::ProcessingContext, std::__1::allocator<SoundAnalysis::ProcessingContext>> mProcessingContexts;
	list<SoundAnalysis::FormatMatchingNode, std::__1::allocator<SoundAnalysis::FormatMatchingNode>> mFormatMatchingNodes;
	list<SoundAnalysis::SharedProcessingNode, std::__1::allocator<SoundAnalysis::SharedProcessingNode>> mSharedProcessingNodes;
	list<SoundAnalysis::AnalyzerNode, std::__1::allocator<SoundAnalysis::AnalyzerNode>> mAnalyzerNodes;
	RootNode mRootNode;
	unsigned mMaxFramesPerSlice;
	function<void (std::__1::shared_ptr<DSPGraph::Graph>, unsigned long)> mWillInitializeCallback;
	long long mCurrentInputSampleTime;
} ProcessingTree;

typedef struct __SecTask* SecTaskRef;

typedef struct _compressed_pair<DSPGraph::Graph *, std::__1::default_delete<DSPGraph::Graph>> {
	Graph __value_;
} compressed_pair<DSPGraph::Graph *, std::__1::default_delete<DSPGraph::Graph>>;

typedef struct unique_ptr<DSPGraph::Graph, std::__1::default_delete<DSPGraph::Graph>> {
	compressed_pair<DSPGraph::Graph *, std::__1::default_delete<DSPGraph::Graph>> __ptr_;
} unique_ptr<DSPGraph::Graph, std::__1::default_delete<DSPGraph::Graph>>;

typedef struct _compressed_pair<float *, std::__1::allocator<float>> {
	float __value_;
} compressed_pair<float *, std::__1::allocator<float>>;

typedef struct vector<float, std::__1::allocator<float>> {
	float __begin_;
	float __end_;
	compressed_pair<float *, std::__1::allocator<float>> __end_cap_;
} vector<float, std::__1::allocator<float>>;

typedef struct _compressed_pair<AudioRingBuffer *, std::__1::default_delete<AudioRingBuffer>> {
	AudioRingBuffer __value_;
} compressed_pair<AudioRingBuffer *, std::__1::default_delete<AudioRingBuffer>>;

typedef struct unique_ptr<AudioRingBuffer, std::__1::default_delete<AudioRingBuffer>> {
	compressed_pair<AudioRingBuffer *, std::__1::default_delete<AudioRingBuffer>> __ptr_;
} unique_ptr<AudioRingBuffer, std::__1::default_delete<AudioRingBuffer>>;

typedef struct _compressed_pair<CABufferList *, std::__1::default_delete<CABufferList>> {
	CABufferList __value_;
} compressed_pair<CABufferList *, std::__1::default_delete<CABufferList>>;

typedef struct unique_ptr<CABufferList, std::__1::default_delete<CABufferList>> {
	compressed_pair<CABufferList *, std::__1::default_delete<CABufferList>> __ptr_;
} unique_ptr<CABufferList, std::__1::default_delete<CABufferList>>;

typedef struct _compressed_pair<DSPGraph::Interpreter *, std::__1::default_delete<DSPGraph::Interpreter>> {
	Interpreter __value_;
} compressed_pair<DSPGraph::Interpreter *, std::__1::default_delete<DSPGraph::Interpreter>>;

typedef struct unique_ptr<DSPGraph::Interpreter, std::__1::default_delete<DSPGraph::Interpreter>> {
	compressed_pair<DSPGraph::Interpreter *, std::__1::default_delete<DSPGraph::Interpreter>> __ptr_;
} unique_ptr<DSPGraph::Interpreter, std::__1::default_delete<DSPGraph::Interpreter>>;

