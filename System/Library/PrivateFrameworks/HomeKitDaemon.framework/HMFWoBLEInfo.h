/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface HMFWoBLEInfo : HMFObject <NSSecureCoding> {

	NSData* _bleIdentifier;

}

@property (nonatomic,readonly) NSData * bleIdentifier;              //@synthesize bleIdentifier=_bleIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)shortDescription;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)bleIdentifier;
-(id)initWithBLEIdentifier:(id)arg1 ;
@end

