/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/AFUISiriRemoteViewHosting.h>

@class UIView, NSString;

@interface AFUISiriRemoteContainerView : UIView <AFUISiriRemoteViewHosting> {

	UIView* _remoteContentView;

}

@property (nonatomic,retain) UIView * remoteContentView;              //@synthesize remoteContentView=_remoteContentView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutSubviews;
-(UIView *)remoteContentView;
-(void)setRemoteContentView:(UIView *)arg1 ;
@end
