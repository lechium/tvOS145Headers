/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSSet;

@interface HMAccessoryAllowedHost : HMFObject <NSSecureCoding> {

	BOOL _unrestricted;
	NSString* _name;
	unsigned long long _purpose;
	NSSet* _addresses;

}

@property (nonatomic,readonly) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned long long purpose;                           //@synthesize purpose=_purpose - In the implementation block
@property (nonatomic,readonly) NSString * address; 
@property (nonatomic,readonly) NSSet * addresses;                                    //@synthesize addresses=_addresses - In the implementation block
@property (getter=isUnrestricted,nonatomic,readonly) BOOL unrestricted;              //@synthesize unrestricted=_unrestricted - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)address;
-(NSSet *)addresses;
-(unsigned long long)purpose;
-(BOOL)isUnrestricted;
@end
