/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/MTLArgumentInternal.h>

@interface MTLTextureArgument : MTLArgumentInternal {

	unsigned _textureType : 15;
	unsigned _isDepthTexture : 1;
	unsigned short _textureDataType;

}
-(id)formattedDescription:(unsigned long long)arg1 ;
-(unsigned long long)textureType;
-(id)initWithName:(id)arg1 access:(unsigned long long)arg2 isActive:(BOOL)arg3 locationIndex:(unsigned long long)arg4 arraySize:(unsigned long long)arg5 dataType:(unsigned long long)arg6 textureType:(unsigned long long)arg7 isDepthTexture:(BOOL)arg8 ;
-(BOOL)isDepthTexture;
-(unsigned long long)textureDataType;
@end

