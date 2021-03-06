/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UIViewController, NSString;


@protocol MPCVideoOutput <NSObject>
@property (assign,nonatomic,__weak) id<MPCVideoOutputDelegate> videoOutputDelegate; 
@property (nonatomic,readonly) UIViewController * playerViewController; 
@property (assign,nonatomic) BOOL showsPlaybackControls; 
@property (nonatomic,readonly) CGSize presentationSize; 
@property (nonatomic,copy) NSString * videoGravity; 
@property (nonatomic,readonly) CGRect videoBounds; 
@property (getter=isReadyForDisplay,nonatomic,readonly) BOOL readyForDisplay; 
@required
-(void)setVideoGravity:(id)arg1;
-(CGSize)presentationSize;
-(UIViewController *)playerViewController;
-(NSString *)videoGravity;
-(BOOL)isReadyForDisplay;
-(BOOL)showsPlaybackControls;
-(void)setShowsPlaybackControls:(BOOL)arg1;
-(CGRect)videoBounds;
-(id<MPCVideoOutputDelegate>)videoOutputDelegate;
-(void)showFullScreenPresentationFromView:(id)arg1 completion:(/*^block*/id)arg2;
-(void)enterFullScreenWithCompletion:(/*^block*/id)arg1;
-(void)exitFullScreenWithCompletion:(/*^block*/id)arg1;
-(void)setVideoOutputDelegate:(id)arg1;

@end

