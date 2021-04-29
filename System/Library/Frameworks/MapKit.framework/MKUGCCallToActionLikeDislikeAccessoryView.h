/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIButton, NSString;

@interface MKUGCCallToActionLikeDislikeAccessoryView : UIView {

	UIButton* _dislikeButton;
	UIButton* _likeButton;
	NSString* _likeImageGlyphName;
	NSString* _dislikeImageGlyphName;

}

@property (nonatomic,copy) NSString * likeImageGlyphName;                 //@synthesize likeImageGlyphName=_likeImageGlyphName - In the implementation block
@property (nonatomic,copy) NSString * dislikeImageGlyphName;              //@synthesize dislikeImageGlyphName=_dislikeImageGlyphName - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_setupButtons;
-(void)_contentSizeChanged;
-(void)setTarget:(id)arg1 likeSelector:(SEL)arg2 dislikeSelector:(SEL)arg3 ;
-(void)setLikeImageGlyphName:(NSString *)arg1 ;
-(void)setDislikeImageGlyphName:(NSString *)arg1 ;
-(NSString *)likeImageGlyphName;
-(NSString *)dislikeImageGlyphName;
@end

