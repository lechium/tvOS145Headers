/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebCore/WebCore-Structs.h>
#import <libobjc.A.dylib/AVPlayerItemLegibleOutputPushDelegate.h>
#import <libobjc.A.dylib/AVPlayerItemMetadataOutputPushDelegate.h>
#import <libobjc.A.dylib/AVPlayerItemMetadataCollectorPushDelegate.h>

@class NSString;

@interface WebCoreAVFMovieObserver : NSObject <AVPlayerItemLegibleOutputPushDelegate, AVPlayerItemMetadataOutputPushDelegate, AVPlayerItemMetadataCollectorPushDelegate> {

	WeakPtr<WebCore::MediaPlayerPrivateAVFoundationObjC, WTF::EmptyCounter>* m_player;
	GenericTaskQueue<WebCore::Timer>* m_taskQueue;
	int m_delayCallbacks;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(int)arg4 ;
-(void)disconnect;
-(id)initWithPlayer:(WeakPtr<WebCore::MediaPlayerPrivateAVFoundationObjC, WTF::EmptyCounter>*)arg1 ;
-(void)didEnd:(id)arg1 ;
-(void)outputSequenceWasFlushed:(id)arg1 ;
-(void)legibleOutput:(id)arg1 didOutputAttributedStrings:(id)arg2 nativeSampleBuffers:(id)arg3 forItemTime:(SCD_Struct_We6)arg4 ;
-(void)metadataOutput:(id)arg1 didOutputTimedMetadataGroups:(id)arg2 fromPlayerItemTrack:(id)arg3 ;
-(void)metadataCollector:(id)arg1 didCollectDateRangeMetadataGroups:(id)arg2 indexesOfNewGroups:(id)arg3 indexesOfModifiedGroups:(id)arg4 ;
-(void)metadataLoaded;
@end

