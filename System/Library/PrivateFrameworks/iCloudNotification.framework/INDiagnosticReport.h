/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:49 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/iCloudNotification.framework/iCloudNotification
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSDate;

@interface INDiagnosticReport : NSObject <NSSecureCoding> {

	BOOL _disabled;
	NSString* _pushEnvironment;
	NSString* _pushToken;
	NSArray* _pushTopics;
	NSDate* _nextHeartbeatDate;

}

@property (nonatomic,copy) NSString * pushEnvironment;              //@synthesize pushEnvironment=_pushEnvironment - In the implementation block
@property (nonatomic,copy) NSString * pushToken;                    //@synthesize pushToken=_pushToken - In the implementation block
@property (nonatomic,copy) NSArray * pushTopics;                    //@synthesize pushTopics=_pushTopics - In the implementation block
@property (nonatomic,copy) NSDate * nextHeartbeatDate;              //@synthesize nextHeartbeatDate=_nextHeartbeatDate - In the implementation block
@property (assign,nonatomic) BOOL disabled;                         //@synthesize disabled=_disabled - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)pushToken;
-(void)setPushToken:(NSString *)arg1 ;
-(BOOL)disabled;
-(void)setDisabled:(BOOL)arg1 ;
-(NSString *)pushEnvironment;
-(void)setPushEnvironment:(NSString *)arg1 ;
-(NSArray *)pushTopics;
-(void)setPushTopics:(NSArray *)arg1 ;
-(NSDate *)nextHeartbeatDate;
-(void)setNextHeartbeatDate:(NSDate *)arg1 ;
@end

