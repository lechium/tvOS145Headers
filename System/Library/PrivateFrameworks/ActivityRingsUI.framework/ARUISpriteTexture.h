/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:47 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActivityRingsUI/ActivityRingsUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol MTLTexture;
@interface ARUISpriteTexture : NSObject <NSCopying> {

	float _height;
	float _width;
	id<MTLTexture> _texture;

}

@property (nonatomic,readonly) float height;                        //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) float width;                         //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) id<MTLTexture> texture;              //@synthesize texture=_texture - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)width;
-(float)height;
-(id<MTLTexture>)texture;
-(id)initWithImage:(id)arg1 ;
@end

