/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/NearbyInteraction.framework/NearbyInteraction
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NearbyInteraction/NearbyInteraction-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NIConfiguration : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _suspensionPolicy;

}

@property (assign) unsigned long long suspensionPolicy;              //@synthesize suspensionPolicy=_suspensionPolicy - In the implementation block
+(id)new;
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(id)initInternal;
-(BOOL)isEqualToConfiguration:(id)arg1 ;
-(unsigned long long)suspensionPolicy;
-(void)setSuspensionPolicy:(unsigned long long)arg1 ;
@end
