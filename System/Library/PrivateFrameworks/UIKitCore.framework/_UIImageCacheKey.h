/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:41 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIImageConfiguration, NSBundle;

@interface _UIImageCacheKey : NSObject <NSCopying> {

	NSString* _name;
	UIImageConfiguration* _configuration;
	NSBundle* _bundle;
	SCD_Struct_UI32 _flags;

}
+(id)keyWithName:(id)arg1 configuration:(id)arg2 bundle:(id)arg3 ;
+(id)keyWithName:(id)arg1 configuration:(id)arg2 ;
+(id)keyWithSystemName:(id)arg1 private:(BOOL)arg2 configuration:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
@end
