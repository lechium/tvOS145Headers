/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol OS_dispatch_queue;
@class UIImageView, UIView, NSArray, NSObject;

@interface _MPCDebugOverlayView : UIView {

	UIImageView* _imageView;
	UIImageView* _containerBackground;
	UIView* _container;
	NSArray* _itemViews;
	NSArray* _overlayItems;
	NSObject*<OS_dispatch_queue> _renderQueue;

}

@property (nonatomic,copy,readonly) NSArray * overlayItems;                         //@synthesize overlayItems=_overlayItems - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> renderQueue;              //@synthesize renderQueue=_renderQueue - In the implementation block
-(void)layoutSubviews;
-(NSObject*<OS_dispatch_queue>)renderQueue;
-(NSArray *)overlayItems;
-(id)initWithImage:(id)arg1 overlayItems:(id)arg2 ;
-(void)setRenderQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)getImageRepresentationWithSize:(CGSize)arg1 scale:(double)arg2 completion:(/*^block*/id)arg3 ;
@end
