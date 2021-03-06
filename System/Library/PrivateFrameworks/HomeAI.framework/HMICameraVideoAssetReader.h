/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/AVAssetResourceLoaderDelegate.h>

@protocol OS_dispatch_queue;
@class NSString, HMICameraVideoFragment, NSObject, AVAssetReader;

@interface HMICameraVideoAssetReader : HMFObject <HMFLogging, AVAssetResourceLoaderDelegate> {

	NSString* _logIdentifier;
	HMICameraVideoFragment* _videoFragment;
	unsigned long long _currentFrameId;
	NSObject*<OS_dispatch_queue> _workQueue;
	AVAssetReader* _assetReader;
	NSObject*<OS_dispatch_queue> _resourceLoaderWorkQueue;

}

@property (assign) unsigned long long currentFrameId;                                   //@synthesize currentFrameId=_currentFrameId - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                            //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) AVAssetReader * assetReader;                               //@synthesize assetReader=_assetReader - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> resourceLoaderWorkQueue;              //@synthesize resourceLoaderWorkQueue=_resourceLoaderWorkQueue - In the implementation block
@property (readonly) HMICameraVideoFragment * videoFragment;                            //@synthesize videoFragment=_videoFragment - In the implementation block
@property (readonly) NSString * logIdentifier;                                          //@synthesize logIdentifier=_logIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)readerForVideoFragment:(id)arg1 workQueue:(id)arg2 logIdentifier:(id)arg3 ;
+(id)assetKeys;
+(id)trackKeys;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(BOOL)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2 ;
-(AVAssetReader *)assetReader;
-(void)setAssetReader:(AVAssetReader *)arg1 ;
-(NSString *)logIdentifier;
-(HMICameraVideoFragment *)videoFragment;
-(void)startReading:(/*^block*/id)arg1 ;
-(BOOL)readNextFrame:(id*)arg1 error:(id*)arg2 ;
-(id)initWithVideoFragment:(id)arg1 workQueue:(id)arg2 logIdentifier:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)resourceLoaderWorkQueue;
-(void)_propertiesLoadedForAsset:(id)arg1 resultCallback:(/*^block*/id)arg2 ;
-(id)_didKeyValueLoadFailed:(long long)arg1 ;
-(void)_propertiesLoadedForTrack:(id)arg1 fromAsset:(id)arg2 resultCallback:(/*^block*/id)arg3 ;
-(BOOL)_validateSequentialIntegrityOfFragmentsInAsset:(id)arg1 ;
-(unsigned long long)_sequenceNumberOfLastFragmentInAsset:(id)arg1 ;
-(unsigned long long)_sequenceNumberOfFirstFragmentInAsset:(id)arg1 ;
-(unsigned long long)currentFrameId;
-(void)setCurrentFrameId:(unsigned long long)arg1 ;
@end

