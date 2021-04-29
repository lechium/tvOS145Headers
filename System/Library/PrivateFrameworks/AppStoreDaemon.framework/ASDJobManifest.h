/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSNumber, NSString;

@interface ASDJobManifest : NSObject <NSCopying, NSSecureCoding> {

	NSMutableArray* _activities;
	long long _manifestType;
	NSNumber* _purchaseID;
	NSString* _storeCorrelationID;

}

@property (nonatomic,readonly) long long manifestType;                 //@synthesize manifestType=_manifestType - In the implementation block
@property (nonatomic,copy) NSNumber * purchaseID;                      //@synthesize purchaseID=_purchaseID - In the implementation block
@property (nonatomic,copy) NSString * storeCorrelationID;              //@synthesize storeCorrelationID=_storeCorrelationID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(unsigned long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_generateIdentifier;
-(id)addActivity:(id)arg1 ;
-(NSString *)storeCorrelationID;
-(id)initWithManifestType:(long long)arg1 ;
-(long long)manifestType;
-(void)setStoreCorrelationID:(NSString *)arg1 ;
-(void)addActivity:(id)arg1 withIdentifier:(id)arg2 ;
-(void)_addActivity:(id)arg1 withIdentifier:(id)arg2 persistentID:(id)arg3 ;
-(void)enumerateActivitiesUsingBlock:(/*^block*/id)arg1 ;
-(NSNumber *)purchaseID;
-(void)setPurchaseID:(NSNumber *)arg1 ;
@end

