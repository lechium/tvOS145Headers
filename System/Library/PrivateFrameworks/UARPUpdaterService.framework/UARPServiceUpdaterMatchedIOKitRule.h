/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UARPUpdaterService.framework/UARPUpdaterService
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface UARPServiceUpdaterMatchedIOKitRule : NSObject <NSSecureCoding> {

	NSString* _identifier;
	unsigned long long _registryEntryID;

}

@property (readonly) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long registryEntryID;              //@synthesize registryEntryID=_registryEntryID - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(unsigned long long)registryEntryID;
-(id)initWithIdentifier:(id)arg1 registryEntryID:(unsigned long long)arg2 ;
@end

