/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, DDSAssetPolicy;

@interface DDSAssertDescriptor : NSObject <NSSecureCoding> {

	NSString* _clientIdentifier;
	NSString* _assertionIdentifier;
	DDSAssetPolicy* _policy;

}

@property (nonatomic,retain) NSString * clientIdentifier;                 //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,retain) NSString * assertionIdentifier;              //@synthesize assertionIdentifier=_assertionIdentifier - In the implementation block
@property (nonatomic,retain) DDSAssetPolicy * policy;                     //@synthesize policy=_policy - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)clientIdentifier;
-(DDSAssetPolicy *)policy;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(void)setPolicy:(DDSAssetPolicy *)arg1 ;
-(NSString *)assertionIdentifier;
-(id)initWithPolicy:(id)arg1 assertionID:(id)arg2 clientID:(id)arg3 ;
-(BOOL)isEqualToDescriptor:(id)arg1 ;
-(void)setAssertionIdentifier:(NSString *)arg1 ;
@end

