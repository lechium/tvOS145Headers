/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SPOwner/SPOwner-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, SPHandle, NSDate, NSString;

@interface SPBeaconShare : NSObject <NSCopying, NSSecureCoding> {

	BOOL _accepted;
	NSUUID* _identifier;
	SPHandle* _handle;
	NSDate* _expiration;
	NSDate* _shareDate;
	unsigned long long _sharePrimaryIndex;
	NSString* _correlationIdentifier;

}

@property (nonatomic,copy) NSUUID * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) SPHandle * handle;                                     //@synthesize handle=_handle - In the implementation block
@property (assign,nonatomic) BOOL accepted;                                       //@synthesize accepted=_accepted - In the implementation block
@property (nonatomic,copy) NSDate * expiration;                                   //@synthesize expiration=_expiration - In the implementation block
@property (nonatomic,copy) NSString * correlationIdentifier;                      //@synthesize correlationIdentifier=_correlationIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDate * shareDate;                           //@synthesize shareDate=_shareDate - In the implementation block
@property (nonatomic,readonly) unsigned long long sharePrimaryIndex;              //@synthesize sharePrimaryIndex=_sharePrimaryIndex - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(SPHandle *)handle;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(void)setHandle:(SPHandle *)arg1 ;
-(NSDate *)expiration;
-(NSString *)correlationIdentifier;
-(void)setCorrelationIdentifier:(NSString *)arg1 ;
-(void)setExpiration:(NSDate *)arg1 ;
-(BOOL)accepted;
-(void)setAccepted:(BOOL)arg1 ;
-(NSDate *)shareDate;
-(unsigned long long)sharePrimaryIndex;
-(id)initWithIdentifier:(id)arg1 handle:(id)arg2 accepted:(BOOL)arg3 expiration:(id)arg4 correlationIdentifier:(id)arg5 shareDate:(id)arg6 sharePrimaryIndex:(unsigned long long)arg7 ;
@end

