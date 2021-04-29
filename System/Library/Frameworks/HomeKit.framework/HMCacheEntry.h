/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSDate;

@interface HMCacheEntry : HMFObject <NSSecureCoding> {

	NSData* _data;
	NSDate* _lastModificationDate;

}

@property (copy,readonly) NSData * data;                              //@synthesize data=_data - In the implementation block
@property (copy,readonly) NSDate * lastModificationDate;              //@synthesize lastModificationDate=_lastModificationDate - In the implementation block
@property (readonly) BOOL isExpired; 
+(BOOL)supportsSecureCoding;
+(id)shortDescription;
-(NSData *)data;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isExpired;
-(NSDate *)lastModificationDate;
-(id)initWithData:(id)arg1 lastModificationDate:(id)arg2 ;
@end

