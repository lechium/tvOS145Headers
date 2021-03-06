/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, MTLFunctionConstantValues;

@interface MTLFunctionDescriptor : NSObject <NSCopying> {

	MTLFunctionDescriptorPrivate _private;

}

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * specializedName; 
@property (nonatomic,copy) MTLFunctionConstantValues * constantValues; 
@property (assign,nonatomic) unsigned long long options; 
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)functionDescriptor;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)options;
-(void)setOptions:(unsigned long long)arg1 ;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(MTLFunctionConstantValues *)constantValues;
-(NSString *)specializedName;
-(void)setSpecializedName:(NSString *)arg1 ;
-(void)setConstantValues:(MTLFunctionConstantValues *)arg1 ;
@end

