/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreThread.framework/CoreThread
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface THThreadNetwork : NSObject <NSSecureCoding> {

	NSString* _networkName;
	NSData* _extendedPANID;

}

@property (nonatomic,readonly) NSString * networkName;              //@synthesize networkName=_networkName - In the implementation block
@property (nonatomic,readonly) NSData * extendedPANID;              //@synthesize extendedPANID=_extendedPANID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)networkName;
-(NSData *)extendedPANID;
-(id)initWithName:(id)arg1 extendedPANID:(id)arg2 ;
@end

