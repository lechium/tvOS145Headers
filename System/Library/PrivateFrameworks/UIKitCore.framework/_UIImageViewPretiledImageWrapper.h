/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:05 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIImage, _UIImageViewPretiledImageCacheKey;

@interface _UIImageViewPretiledImageWrapper : NSObject {

	UIImage* _pretiledImage;
	_UIImageViewPretiledImageCacheKey* _cacheKey;

}

@property (nonatomic,readonly) UIImage * pretiledImage;              //@synthesize pretiledImage=_pretiledImage - In the implementation block
+(id)cacheValueWithPretiledImage:(id)arg1 cacheKey:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)dealloc;
-(UIImage *)pretiledImage;
@end

