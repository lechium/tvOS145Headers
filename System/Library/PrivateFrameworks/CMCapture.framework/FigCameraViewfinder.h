/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:07 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class FigCameraViewfinderSession, FigDelegateStorage;

@interface FigCameraViewfinder : NSObject {

	FigCameraViewfinderSession* _delegateActiveViewfinderSession;
	FigDelegateStorage* _delegateStorage;

}

@property (nonatomic,retain) FigCameraViewfinderSession * delegateActiveViewfinderSession;                      //@synthesize delegateActiveViewfinderSession=_delegateActiveViewfinderSession - In the implementation block
@property (readonly) id<FigCameraViewfinderDelegate><FigCameraViewfinderSessionDelegate> delegate; 
@property (readonly) NSObject*<OS_dispatch_queue> queue; 
+(id)cameraViewfinder;
-(id)init;
-(void)dealloc;
-(id<FigCameraViewfinderDelegate><FigCameraViewfinderSessionDelegate>)delegate;
-(void)stop;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(void)startWithOptions:(id)arg1 ;
-(void)setDelegateActiveViewfinderSession:(FigCameraViewfinderSession *)arg1 ;
-(FigCameraViewfinderSession *)delegateActiveViewfinderSession;
@end

