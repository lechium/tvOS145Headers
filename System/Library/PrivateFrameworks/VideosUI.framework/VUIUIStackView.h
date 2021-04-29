/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIStackView.h>

@interface VUIUIStackView : UIStackView {

	BOOL _axisFollowsDeviceOrientation;
	BOOL _alignmentFollowsDeviceOrientation;
	long long _lastOrientation;

}

@property (assign,nonatomic) long long lastOrientation;                           //@synthesize lastOrientation=_lastOrientation - In the implementation block
@property (assign,nonatomic) BOOL axisFollowsDeviceOrientation;                   //@synthesize axisFollowsDeviceOrientation=_axisFollowsDeviceOrientation - In the implementation block
@property (assign,nonatomic) BOOL alignmentFollowsDeviceOrientation;              //@synthesize alignmentFollowsDeviceOrientation=_alignmentFollowsDeviceOrientation - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)lastOrientation;
-(void)setLastOrientation:(long long)arg1 ;
-(void)setAxisFollowsDeviceOrientation:(BOOL)arg1 ;
-(void)setAlignmentFollowsDeviceOrientation:(BOOL)arg1 ;
-(BOOL)axisFollowsDeviceOrientation;
-(BOOL)alignmentFollowsDeviceOrientation;
@end

