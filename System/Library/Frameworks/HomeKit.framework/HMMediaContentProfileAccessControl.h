/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKit/HomeKit-Structs.h>
#import <HomeKit/HMAccessControl.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSMutableSet, NSArray;

@interface HMMediaContentProfileAccessControl : HMAccessControl <NSCopying, NSMutableCopying> {

	NSMutableSet* _internalAccessories;

}

@property (copy,readonly) NSArray * accessories; 
+(id)shortDescription;
+(BOOL)isAccessorySupported:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)debugDescription;
-(id)initWithUser:(id)arg1 ;
-(id)shortDescription;
-(NSArray *)accessories;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(id)initWithUser:(id)arg1 accessories:(id)arg2 ;
@end

