/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <AppStoreDaemon/ASDRequestOptions.h>

@class NSNumber, NSString, NSArray;

@interface ASDRestoreDemotedApplicationsRequestOptions : ASDRequestOptions {

	NSNumber* _accountID;
	NSString* _appleID;
	NSArray* _bundleIDs;

}

@property (nonatomic,readonly) NSNumber * accountID;              //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,readonly) NSString * appleID;                //@synthesize appleID=_appleID - In the implementation block
@property (nonatomic,copy) NSArray * bundleIDs;                   //@synthesize bundleIDs=_bundleIDs - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)accountID;
-(void)setBundleIDs:(NSArray *)arg1 ;
-(NSArray *)bundleIDs;
-(NSString *)appleID;
-(id)initWithBundleIDs:(id)arg1 ;
-(id)initWithAccountID:(id)arg1 appleID:(id)arg2 ;
@end

