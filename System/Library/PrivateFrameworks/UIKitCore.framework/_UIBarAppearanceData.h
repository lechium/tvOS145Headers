/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:24 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _UIBarAppearanceData : NSObject <NSCopying> {

	BOOL _immutable;

}
+(id)decodeFromCoder:(id)arg1 prefix:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeToCoder:(id)arg1 prefix:(id)arg2 ;
-(void)describeInto:(id)arg1 ;
-(id)writableInstance;
-(id)replicate;
-(long long)hashInto:(long long)arg1 ;
-(BOOL)checkEqualTo:(id)arg1 ;
-(void)assertMutable:(SEL)arg1 ;
-(void)markReadOnly;
@end
