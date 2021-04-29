/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVConference/AVConference-Structs.h>
@class NSMutableArray, NSString, VideoAttributes, NSArray;

@interface VCVideoCapture : NSObject {

	id _captureServer;
	NSMutableArray* _sinkArray;
	NSString* _sourceUID;
	VideoAttributes* _localVideoAttributes;
	opaque_pthread_mutex_t _sinkArrayMutex;

}

@property (readonly) NSArray * sinkArray;                                        //@synthesize sinkArray=_sinkArray - In the implementation block
@property (readonly) NSObject*<VCVideoCaptureServer> captureServer; 
-(void)dealloc;
-(id)initWithCaptureServer:(id)arg1 ;
-(NSObject*<VCVideoCaptureServer>)captureServer;
-(void)distributeVideoFrame:(opaqueCMSampleBufferRef)arg1 frameTime:(SCD_Struct_AV88)arg2 preview:(BOOL)arg3 orientation:(int)arg4 fromCamera:(BOOL)arg5 camera:(int)arg6 switching:(BOOL)arg7 videoMirrored:(BOOL)arg8 ;
-(void)addSink:(id)arg1 ;
-(void)removeSink:(id)arg1 ;
-(NSArray *)sinkArray;
@end

