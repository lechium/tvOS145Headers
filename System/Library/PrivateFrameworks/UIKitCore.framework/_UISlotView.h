/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UISSlotStyle;

@interface _UISlotView : UIView {

	Class _localContentClass;
	id _localTag;
	NSString* _localization;
	/*^block*/id _remoteContentProvider;
	UISSlotStyle* _currentSlotStyle;
	CGSize _intrinsicContentSize;
	BOOL _hasLocalContent;
	/*^block*/id _contentRenderer;

}

@property (setter=_setRemoteContentProvider:,nonatomic,copy) id _remoteContentProvider; 
-(void)displayLayer:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)tintColorDidChange;
-(void)_updateContent;
-(id)_slotStyle;
-(void)_updateLocalContentWithLastSlotStyle:(id)arg1 ;
-(void)_slotStyleDidChange;
-(void)_updateRemoteContent;
-(void)_setContentSize:(CGSize)arg1 localContent:(BOOL)arg2 contentBlock:(/*^block*/id)arg3 ;
-(id)initWithLocalContentClass:(Class)arg1 localTag:(id)arg2 ;
-(id)_remoteContentProvider;
-(void)_setRemoteContentProvider:(/*^block*/id)arg1 ;
@end

