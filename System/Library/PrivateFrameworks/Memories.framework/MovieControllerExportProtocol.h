/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class AVMutableComposition, Project, CALayer, AVMutableVideoComposition, AVMutableAudioMix;


@protocol MovieControllerExportProtocol <NSObject>
@property (nonatomic,readonly) AVMutableComposition * AVComposition; 
@property (retain) Project * project; 
@property (nonatomic,readonly) CALayer * compositionLayer; 
@property (nonatomic,retain) CALayer * playerLayer; 
@property (nonatomic,readonly) AVMutableVideoComposition * videoComposition; 
@property (nonatomic,readonly) AVMutableAudioMix * audioMix; 
@property (assign) double exportAspect; 
@property (assign) CGSize size; 
@property (nonatomic,copy) id progressUpdateBlock; 
@optional
-(void)tearDownProjectDisplay;

@required
-(CGSize)size;
-(void)setSize:(CGSize)arg1;
-(CALayer *)playerLayer;
-(void)setPlayerLayer:(id)arg1;
-(AVMutableVideoComposition *)videoComposition;
-(AVMutableAudioMix *)audioMix;
-(void)updateComposition;
-(void)setProgressUpdateBlock:(/*^block*/id)arg1;
-(id)progressUpdateBlock;
-(double)exportAspect;
-(void)setExportAspect:(double)arg1;
-(Project *)project;
-(void)setProject:(id)arg1;
-(AVMutableComposition *)AVComposition;
-(CALayer *)compositionLayer;

@end

