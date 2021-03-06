/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:55 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriTVUI/SiriTVUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol SiriTVUISnippetViewDelegate;
@interface SiriTVUISnippetView : UIView {

	id<SiriTVUISnippetViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SiriTVUISnippetViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SiriTVUISnippetViewDelegate>)delegate;
-(void)setDelegate:(id<SiriTVUISnippetViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 delegate:(id)arg2 ;
@end

