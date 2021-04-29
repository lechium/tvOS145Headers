/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MTLBinaryKey : NSObject <NSCopying> {

	SCD_Struct_MT8 _hash;

}

@property (readonly) const SCD_Struct_MT8* value; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(const SCD_Struct_MT8*)value;
-(BOOL)isEqualToKey:(id)arg1 ;
-(id)initWithHash:(const SCD_Struct_MT8*)arg1 ;
@end

