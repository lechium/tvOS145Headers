/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:47 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class ARUISpriteTexture;

@interface ARUISpriteSheetFactory : NSObject {

	ARUISpriteTexture* _defaultSpriteTexture;
	ARUISpriteTexture* _wheelchairSpriteTexture;
	ARUISpriteTexture* _sharingSpriteTexture;
	ARUISpriteTexture* _wheelchairSharingSpriteTexture;

}
+(id)sharedInstance;
+(id)defaultSpriteSheet;
+(id)wheelchairSpriteSheet;
+(id)spriteSheetForRingType:(long long)arg1 ;
+(id)wheelchairSpriteSheetForRingType:(long long)arg1 ;
+(id)sharingSpriteSheet;
+(id)wheelchairSharingSpriteSheet;
-(id)defaultSpriteTexture;
-(id)wheelchairSpriteTexture;
-(id)sharingSpriteTexture;
-(id)wheelchairSharingSpriteTexture;
@end

