/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class VEKProgress;

@interface VEKProgressWatcher : NSObject {

	BOOL _progressIncludesDownload;
	/*^block*/id _progressHandler;
	VEKProgress* _progress;
	id _observedObject;

}

@property (assign,nonatomic) BOOL progressIncludesDownload;              //@synthesize progressIncludesDownload=_progressIncludesDownload - In the implementation block
@property (nonatomic,copy) id progressHandler;                           //@synthesize progressHandler=_progressHandler - In the implementation block
@property (nonatomic,retain) VEKProgress * progress;                     //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic,__weak) id observedObject;                   //@synthesize observedObject=_observedObject - In the implementation block
-(void)dealloc;
-(VEKProgress *)progress;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setProgress:(VEKProgress *)arg1 ;
-(id)progressHandler;
-(void)setProgressHandler:(id)arg1 ;
-(id)initWithObservedObject:(id)arg1 ;
-(id)observedObject;
-(void)setObservedObject:(id)arg1 ;
-(void)setProgressIncludesDownload:(BOOL)arg1 ;
-(BOOL)progressIncludesDownload;
@end

