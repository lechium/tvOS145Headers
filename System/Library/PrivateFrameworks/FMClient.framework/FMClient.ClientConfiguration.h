/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:32 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/FMClient.framework/FMClient
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDateComponents, NSString;

@interface FMClient.ClientConfiguration : NSObject <NSSecureCoding> {

	 nearbyScanDuration;
	 nearbyScanEnabled;
	 nearbyScanWhileAuthenticated;
	 deviceNameSyncEnabled;

}

@property (readonly,nonatomic) double nearbyScanDuration; 
@property (readonly,nonatomic) BOOL nearbyScanEnabled; 
@property (readonly,nonatomic) BOOL nearbyScanWhileAuthenticated; 
@property (readonly,nonatomic) NSDateComponents * deviceNameSyncInterval; 
@property (readonly,nonatomic) BOOL deviceNameSyncEnabled; 
@property (readonly,nonatomic) NSString * description; 
+(BOOL)supportsSecureCoding;
-(NSString *)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)nearbyScanWhileAuthenticated;
-(double)nearbyScanDuration;
-(BOOL)nearbyScanEnabled;
-(NSDateComponents *)deviceNameSyncInterval;
-(BOOL)deviceNameSyncEnabled;
-(id)initWithNearbyScanDuration:(double)arg1 nearbyScanEnabled:(BOOL)arg2 nearbyScanWhileAuthenticated:(BOOL)arg3 deviceNameSyncInterval:(id)arg4 deviceNameSyncEnabled:(BOOL)arg5 ;
@end

