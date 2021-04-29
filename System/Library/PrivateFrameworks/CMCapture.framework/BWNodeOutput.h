/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:09 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BWNodeOutputConsumer;
#import <CMCapture/CMCapture-Structs.h>
@class NSString, BWNode, NSMutableArray, BWNodeOutputMediaConfiguration, NSMutableDictionary, BWNodeOutputMediaProperties, BWMemoryPool, BWFormatRequirements, BWPixelBufferPool, BWDataBufferPool, BWFormat, BWVideoFormat, BWPointCloudFormat, BWNodeConnection, NSArray;

@interface BWNodeOutput : NSObject {

	NSString* _name;
	id<BWNodeOutputConsumer> _consumer;
	BOOL _consumerIsANodeConnection;
	BOOL _mediaTypeIsVideo;
	BOOL _mediaTypeIsPointCloud;
	unsigned _mediaType;
	long long _configurationID;
	BWNode* _node;
	float _maxSampleDataOutputRate;
	BOOL _dropsSampleBuffersWithUnexpectedPTS;
	long long _liveConfigurationID;
	BOOL _discardsSampleData;
	unsigned _numberOfBuffersEmitted;
	unsigned _numberOfBuffersDropped;
	SCD_Struct_BW7 _lastValidPTS;
	SCD_Struct_BW7 _lastEmittedPTS;
	OpaqueFigSimpleMutexRef _poolPreallocationMutex;
	NSMutableArray* _poolPreallocationCompletionHandlers;
	BOOL _poolPreallocationDone;
	BOOL _receivedEOD;
	BWNodeOutputMediaConfiguration* _primaryMediaConfiguration;
	BWNodeOutputMediaConfiguration* _unspecifiedAttachedMediaConfiguration;
	NSMutableDictionary* _attachedMediaConfigurations;
	BWNodeOutputMediaProperties* _primaryMediaProperties;
	NSMutableDictionary* _attachedMediaProperties;
	BWMemoryPool* _memoryPool;

}

@property (nonatomic,copy) BWFormatRequirements * formatRequirements; 
@property (assign,nonatomic) BOOL providesPixelBufferPool; 
@property (assign,nonatomic) BOOL providesDataBufferPool; 
@property (assign,nonatomic) BOOL pixelBufferPoolProvidesBackPressure; 
@property (nonatomic,readonly) BWPixelBufferPool * preparedPixelBufferPool; 
@property (nonatomic,readonly) BWDataBufferPool * preparedDataBufferPool; 
@property (assign,nonatomic) int passthroughMode; 
@property (assign,nonatomic) int indexOfInputWhichDrivesThisOutput; 
@property (assign,nonatomic) int retainedBufferCount; 
@property (assign,nonatomic) int owningNodeRetainedBufferCount; 
@property (nonatomic,copy) BWFormat * format; 
@property (nonatomic,readonly) BWVideoFormat * videoFormat; 
@property (nonatomic,readonly) BWPointCloudFormat * pointCloudFormat; 
@property (nonatomic,readonly) BWFormat * liveFormat; 
@property (nonatomic,readonly) BWPixelBufferPool * livePixelBufferPool; 
@property (nonatomic,readonly) BWDataBufferPool * liveDataBufferPool; 
@property (nonatomic,readonly) BOOL mediaTypeIsVideo;                                                             //@synthesize mediaTypeIsVideo=_mediaTypeIsVideo - In the implementation block
@property (nonatomic,readonly) BOOL mediaTypeIsPointCloud;                                                        //@synthesize mediaTypeIsPointCloud=_mediaTypeIsPointCloud - In the implementation block
@property (nonatomic,copy) NSString * name;                                                                       //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned mediaType;                                                                //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,readonly) BWNode * node;                                                                     //@synthesize node=_node - In the implementation block
@property (assign,nonatomic) id<BWNodeOutputConsumer> consumer; 
@property (nonatomic,readonly) BWNodeConnection * connection; 
@property (assign,nonatomic) long long configurationID;                                                           //@synthesize configurationID=_configurationID - In the implementation block
@property (nonatomic,readonly) BWNodeOutputMediaConfiguration * primaryMediaConfiguration;                        //@synthesize primaryMediaConfiguration=_primaryMediaConfiguration - In the implementation block
@property (nonatomic,readonly) NSArray * specifiedAttachedMediaKeys; 
@property (nonatomic,retain) BWNodeOutputMediaConfiguration * unspecifiedAttachedMediaConfiguration;              //@synthesize unspecifiedAttachedMediaConfiguration=_unspecifiedAttachedMediaConfiguration - In the implementation block
@property (nonatomic,readonly) BWNodeOutputMediaProperties * primaryMediaProperties;                              //@synthesize primaryMediaProperties=_primaryMediaProperties - In the implementation block
@property (nonatomic,readonly) NSArray * resolvedAttachedMediaKeys; 
@property (assign,nonatomic) float maxSampleDataOutputRate;                                                       //@synthesize maxSampleDataOutputRate=_maxSampleDataOutputRate - In the implementation block
@property (assign,nonatomic) BOOL dropsSampleBuffersWithUnexpectedPTS;                                            //@synthesize dropsSampleBuffersWithUnexpectedPTS=_dropsSampleBuffersWithUnexpectedPTS - In the implementation block
@property (nonatomic,readonly) long long liveConfigurationID;                                                     //@synthesize liveConfigurationID=_liveConfigurationID - In the implementation block
@property (assign,nonatomic) BOOL discardsSampleData;                                                             //@synthesize discardsSampleData=_discardsSampleData - In the implementation block
@property (nonatomic,readonly) unsigned numberOfBuffersEmitted;                                                   //@synthesize numberOfBuffersEmitted=_numberOfBuffersEmitted - In the implementation block
@property (nonatomic,readonly) unsigned numberOfBuffersDropped;                                                   //@synthesize numberOfBuffersDropped=_numberOfBuffersDropped - In the implementation block
@property (nonatomic,retain) BWMemoryPool * memoryPool;                                                           //@synthesize memoryPool=_memoryPool - In the implementation block
+(void)initialize;
-(NSString *)name;
-(id)description;
-(void)dealloc;
-(void)invalidate;
-(void)setName:(NSString *)arg1 ;
-(BWNodeConnection *)connection;
-(BWFormat *)format;
-(void)setFormat:(BWFormat *)arg1 ;
-(BWMemoryPool *)memoryPool;
-(void)setConsumer:(id<BWNodeOutputConsumer>)arg1 ;
-(id<BWNodeOutputConsumer>)consumer;
-(BWNode *)node;
-(void)setConfigurationID:(long long)arg1 ;
-(long long)configurationID;
-(unsigned)mediaType;
-(BWVideoFormat *)videoFormat;
-(void)setRetainedBufferCount:(int)arg1 ;
-(id)initWithMediaType:(unsigned)arg1 node:(id)arg2 ;
-(void)setFormatRequirements:(BWFormatRequirements *)arg1 ;
-(void)setPassthroughMode:(int)arg1 ;
-(void)emitSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)setMediaConfiguration:(id)arg1 forAttachedMediaKey:(id)arg2 ;
-(void)setIndexOfInputWhichDrivesThisOutput:(int)arg1 ;
-(id)mediaPropertiesForAttachedMediaKey:(id)arg1 ;
-(void)_setMediaProperties:(id)arg1 forAttachedMediaKey:(id)arg2 ;
-(id)mediaConfigurationForAttachedMediaKey:(id)arg1 ;
-(void)setProvidesPixelBufferPool:(BOOL)arg1 ;
-(BWPixelBufferPool *)livePixelBufferPool;
-(void)emitDroppedSample:(id)arg1 ;
-(void)makeConfiguredFormatLive;
-(void)markEndOfLiveOutput;
-(BWNodeOutputMediaConfiguration *)primaryMediaConfiguration;
-(void)emitNodeError:(id)arg1 ;
-(void)setDiscardsSampleData:(BOOL)arg1 ;
-(BWFormatRequirements *)formatRequirements;
-(void)setUnspecifiedAttachedMediaConfiguration:(BWNodeOutputMediaConfiguration *)arg1 ;
-(int)passthroughMode;
-(BWFormat *)liveFormat;
-(id)attachedMediaKeyDrivenByInputAttachedMediaKey:(id)arg1 inputIndex:(unsigned long long)arg2 ;
-(void)prepareForConfiguredFormatToBecomeLive;
-(void)emitStillImageReferenceFrameBracketedCaptureSequenceNumberMessageWithSequenceNumber:(int)arg1 ;
-(void)emitStillImagePrewarmMessageWithSettings:(id)arg1 ;
-(BOOL)discardsSampleData;
-(BWNodeOutputMediaProperties *)primaryMediaProperties;
-(BWPixelBufferPool *)preparedPixelBufferPool;
-(int)retainedBufferCount;
-(long long)liveConfigurationID;
-(void)_setPrimaryProperties:(id)arg1 ;
-(void)_clearAllMediaProperties;
-(void)setLiveFormat:(BWFormat *)arg1 ;
-(int)_passthroughModeForUnspecifiedAttachedMedia;
-(NSArray *)specifiedAttachedMediaKeys;
-(NSArray *)resolvedAttachedMediaKeys;
-(int)_passthroughModeForAttachedMediaKey:(id)arg1 ;
-(BOOL)mediaTypeIsVideo;
-(BOOL)mediaTypeIsPointCloud;
-(BWNodeOutputMediaConfiguration *)unspecifiedAttachedMediaConfiguration;
-(unsigned)numberOfBuffersDropped;
-(void)setProvidesDataBufferPool:(BOOL)arg1 ;
-(BOOL)providesPixelBufferPool;
-(BOOL)providesDataBufferPool;
-(int)owningNodeRetainedBufferCount;
-(id)_poolName;
-(BOOL)pixelBufferPoolProvidesBackPressure;
-(void)_prepareForConfiguredFormatToBecomeLiveForAttachedMediaKey:(id)arg1 ;
-(BWDataBufferPool *)preparedDataBufferPool;
-(void)_makeConfiguredFormatLiveForAttachedMediaKey:(id)arg1 ;
-(void)_markEndOfLiveOutputForAttachedMediaKey:(id)arg1 ;
-(id)_mediaConfigurationForPossiblyUnspecifiedAttachedMediaKey:(id)arg1 ;
-(void)addPoolPreallocationCompletionHandler:(/*^block*/id)arg1 ;
-(id)_mediaConfigurationForBufferCountOfPossiblyUnspecifiedAttachedMediaKey:(id)arg1 ;
-(id)_mediaPropertiesForPossiblyUnspecifiedAttachedMediaKey:(id)arg1 ;
-(float)maxSampleDataOutputRate;
-(void)setMaxSampleDataOutputRate:(float)arg1 ;
-(BOOL)dropsSampleBuffersWithUnexpectedPTS;
-(void)setDropsSampleBuffersWithUnexpectedPTS:(BOOL)arg1 ;
-(void)setMemoryPool:(BWMemoryPool *)arg1 ;
-(unsigned)numberOfBuffersEmitted;
-(int)indexOfInputWhichDrivesThisOutput;
-(void)setPixelBufferPoolProvidesBackPressure:(BOOL)arg1 ;
-(void)setOwningNodeRetainedBufferCount:(int)arg1 ;
-(void)setNodePreparedPixelBufferPool:(id)arg1 ;
-(void)setPreparedSharedPixelBufferPool:(id)arg1 ;
-(void)setNodePreparedDataBufferPool:(id)arg1 ;
-(void)setPreparedSharedDataBufferPool:(id)arg1 ;
-(BWDataBufferPool *)liveDataBufferPool;
-(BWPointCloudFormat *)pointCloudFormat;
@end

