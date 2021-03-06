/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <LinkPresentation/LPComponentView.h>

@class UIColor, UIImageView;

@interface LPCaptionBarAccessoryView : LPComponentView {

	long long _type;
	UIColor* _color;
	UIImageView* _accessoryView;
	BOOL _shouldFlipHorizontally;

}

@property (nonatomic,readonly) CGSize size; 
-(id)init;
-(CGSize)size;
-(void)layoutComponentView;
-(id)_createImageViewWithImage:(id)arg1 ;
-(id)ensureAccessoryView;
-(id)initWithType:(long long)arg1 side:(long long)arg2 ;
@end

