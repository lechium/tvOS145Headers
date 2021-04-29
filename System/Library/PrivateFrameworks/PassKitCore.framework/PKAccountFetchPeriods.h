/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface PKAccountFetchPeriods : NSObject <NSCopying, NSSecureCoding> {

	double _accountFetchPeriod;
	double _extendedAccountFetchPeriod;
	double _usersFetchPeriod;
	double _sharedCloudStoreModelFetchPeriod;

}

@property (assign,nonatomic) double accountFetchPeriod;                            //@synthesize accountFetchPeriod=_accountFetchPeriod - In the implementation block
@property (assign,nonatomic) double extendedAccountFetchPeriod;                    //@synthesize extendedAccountFetchPeriod=_extendedAccountFetchPeriod - In the implementation block
@property (assign,nonatomic) double usersFetchPeriod;                              //@synthesize usersFetchPeriod=_usersFetchPeriod - In the implementation block
@property (assign,nonatomic) double sharedCloudStoreModelFetchPeriod;              //@synthesize sharedCloudStoreModelFetchPeriod=_sharedCloudStoreModelFetchPeriod - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isLastUpdatedOutOfDate:(id)arg1 fetchPeriod:(double)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)isEqualToAccountFetchPeriods:(id)arg1 ;
-(double)accountFetchPeriod;
-(double)usersFetchPeriod;
-(double)sharedCloudStoreModelFetchPeriod;
-(double)extendedAccountFetchPeriod;
-(void)setAccountFetchPeriod:(double)arg1 ;
-(void)setExtendedAccountFetchPeriod:(double)arg1 ;
-(void)setUsersFetchPeriod:(double)arg1 ;
-(void)setSharedCloudStoreModelFetchPeriod:(double)arg1 ;
@end
